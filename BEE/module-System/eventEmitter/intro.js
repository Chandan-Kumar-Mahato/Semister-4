const eventEmitter = require('events');

class myEmitter extends eventEmitter {}

const MyEmitter = new myEmitter();

MyEmitter.on('event',()=>{
    console.log("an event occured");
})

MyEmitter.emit('event');