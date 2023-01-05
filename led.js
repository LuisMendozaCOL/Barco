/*var Libreria_jf = require("johnny-five")
var Circuito = new Libreria_jf.Board({port : "COM3"})


Circuito.on("ready", encender)
function encender(){
    var led_azul = new Libreria_jf.Led(13)
    led_azul.blink(2000)  
    var led_amarillo = new Libreria_jf.Led(11)
    led_amarillo.blink(2000)
    var led_rojo= new Libreria_jf.Led(12)
    led_rojo.blink(2000)
}
*/ 
var Libreria_jf=require("johnny-five")
var Circuito=new Libreria_jf.Board({port : "COM13"})

var foco, motor,celda ; 

Circuito.on("ready", encender); 

function encender()
{

var celda_config = { pin: "A0", freq: 50 };
celda = new Libreria_jf.Sensor(celda_config)

foco = new Libreria_jf.Led(13);
foco.on(); 

motor = new Libreria_jf.Servo(9)
motor.to(90)

console.log("Luz: " +celda.value);

}


 
