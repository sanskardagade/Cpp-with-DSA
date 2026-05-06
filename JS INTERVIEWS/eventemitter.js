class MyEventEmitter{
    constructor(){
        //[event]:listner[]
        this.__event_listners = {}
    }

    on(event,listner){
        //Regsiter the [listner] for [event]
        if(!this.__event_listners[event]){
            this.__event_listners[event] = []
        }

        this.__event_listners[event].push(listner)
        return true
    }

    emit(event,...args){
        if(!this.__event_listners[event]){
            return false;
        }

        const listners = this.__event_listners[event]
        listners.forEach(listner => {
            listner(...args)
        });
    }

    off(event,listner){

    }

    once(event,listner){

    }
}

const e = new MyEventEmitter()

const sendWhatsapp = (username)  => console.log('Whatsapp to' , username)

e.on('user:signup',(username) => console.log('User signup'))
e.on('user:signup',(username) => console.log('Sending email to ',username));
// e.on('user:signup',(username) => console.log('Whatsapp email to ',username))
e.on('user:signup',sendWhatsapp)
e.on('user:logout',(username) => console.log('Logout ',username))


e.emit('user:signup','@sanskar')
e.emit('user:signup','@sanskar1')
e.off('user:signup',sendWhatsapp)

e.emit('user:signup','@sanskar2')
e.emit('user:logout','@sanskar')


e.emit('user:signup','@sanskar')
e.emit('user:signup','@sanskar1')
e.off('user:signup',sendWhatsapp)

e.emit('user:signup','@sanskar2')
e.emit('user:logout','@sanskar')