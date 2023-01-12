var five = require("johnny-five");
var board = new five.Board({port: "COM12"});

board.on("ready",encender_led);

function encender_led(){
  var led1 = new five.Led(13);
  led1.blink(2000);
}


