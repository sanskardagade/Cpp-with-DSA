type TPromiseResolve<T> = (value:T) => void;
type TPromiseReject<T> = (reason:T) => void;
type TPromiseExceutor<T,K> = (
    resolve:TPromiseResolve<T>,
    reject:TPromiseReject<K>
) => void;

enum PromiseState {
    PENDING = "pending",
    FULFILLED = "fulfilled",
    REJECTED = "rejected"
}   

class MyPromise<T,K>{
    private _state:PromiseState = PromiseState.PENDING;

    constructor(executor:TPromiseExceutor<T,K>){
        executor
    }

    private _promiseResolver(value:T){
        if(this._state === PromiseState.FULFILLED)return;
        this._state = PromiseState.FULFILLED;
    }
}


function customPromise(){
    return new MyPromise((resolve,reject)=>{
        //... code
        resolve("value");
    });
}


customPromise()
    .then(()=>{})
    .catch(()=>{})  
    .finally(()=>{})