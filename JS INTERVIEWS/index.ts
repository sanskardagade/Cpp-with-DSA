type Resolve<T> = (value: T | MyPromise<T>) => void;
type Reject = (reason: any) => void;
enum State {
  PENDING = "pending",
  FULFILLED = "fulfilled",
  REJECTED = "rejected",
}

class MyPromise<T> {
  private state: State = State.PENDING;
  private value: any;
  private handlers: {
    onFulfilled?: (value: any) => any;
    onRejected?: (reason: any) => any;
    resolve: Resolve<any>;
    reject: Reject;
  }[] = [];

  constructor(executor: (resolve: Resolve<T>, reject: Reject) => void) {
    try {
      executor(this.resolve.bind(this), this.reject.bind(this));
    } catch (err) {
      this.reject(err);
    }
  }

  // ✅ FIXED: explicit return type (void)
  private resolve(value: T | MyPromise<T>): void {
    if (this.state !== State.PENDING) return;

    // Promise unwrapping
    if (value instanceof MyPromise) {
      value.then(this.resolve.bind(this), this.reject.bind(this));
      return;
    }

    this.state = State.FULFILLED;
    this.value = value;
    this.runHandlers();
  }

  private reject(reason: any): void {
    if (this.state !== State.PENDING) return;

    this.state = State.REJECTED;
    this.value = reason;
    this.runHandlers();
  }

  private runHandlers(): void {
    if (this.state === State.PENDING) return;

    queueMicrotask(() => {
      this.handlers.forEach((handler) => {
        if (this.state === State.FULFILLED) {
          if (!handler.onFulfilled) {
            handler.resolve(this.value);
          } else {
            try {
              const result = handler.onFulfilled(this.value);
              handler.resolve(result);
            } catch (err) {
              handler.reject(err);
            }
          }
        }

        if (this.state === State.REJECTED) {
          if (!handler.onRejected) {
            handler.reject(this.value);
          } else {
            try {
              const result = handler.onRejected(this.value);
              handler.resolve(result);
            } catch (err) {
              handler.reject(err);
            }
          }
        }
      });

      this.handlers = [];
    });
  }

  then<U = T>(
    onFulfilled?: (value: T) => U | MyPromise<U>,
    onRejected?: (reason: any) => U | MyPromise<U>
  ): MyPromise<U> {
    return new MyPromise<U>((resolve, reject) => {
      this.handlers.push({
        onFulfilled,
        onRejected,
        resolve,
        reject,
      });

      this.runHandlers();
    });
  }

  catch<U = never>(
    onRejected: (reason: any) => U | MyPromise<U>
  ): MyPromise<U> {
    return this.then(undefined, onRejected);
  }

  finally(cb: () => void): MyPromise<T> {
    return this.then(
      (value) => {
        cb();
        return value;
      },
      (reason) => {
        cb();
        throw reason;
      }
    );
  }
} 
