const p1 = {
    fname:"Sanskar",
    lname:"jain",
    age:18
}

const p1Proxy = new Proxy(p1,{
    get(target,prop){
        // console.log({target,prop})
        // return 'testing' 
        if (prop in target) return target[prop];
        return false;
    },
    set(target,prop,value){
        if(!(prop in target))throw new Error(`${prop} does not exist`);
        switch(prop){
            case 'fname':
            case 'lname':
                if (typeof value !== 'string') throw new Error(`${prop} must be a string`);
            break
            case 'age':
                if (typeof value !== 'number') throw new Error(`${prop} must be a number`);
                if(value<=0) throw new Error(`${prop} must be > 0`);
        }
        Reflect.set(target,prop,value)//Default behaviour
        //target[prop] = value;  
    } 
});

// p1.age = -10
// p1.age = 10
// p1.age = 100
p1.age = -10

// console.log(p1Proxy.lname)
// console.log(p1Proxy.kuchbhi)

console.log(p1Proxy)