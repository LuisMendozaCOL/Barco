var Libreria_jf = require("johnny-five")
var Circuito = new Libreria_jf.Board({port : "COM3"})

Circuito.on("ready", encender)


