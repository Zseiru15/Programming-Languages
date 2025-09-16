//modulo nativo de Node.js
const fs = require("fs");
// const archivo = fs.readFileSync(__dirname + '/dato.txt', 'utf-8');
// console.log(archivo);

//modulos propios -> nosotros generamos
// const mp = require('./datosPersonales');
// console.log(mp);

// console.log('mi nombres es '+ mp.nombre +', tengo '+ mp.edad + ' años y soy ' + mp.profesion);

// console.log('mi nombres es '+ mp[0] +', me gustan las '+ mp[1] +' años y soy '+ mp[2]);

const devolver = require("./envio");
console.log("nos devolvio: " + devolver(78));

//modulos externos
// const zodiac = require('zodiac-signs') ();
// console.log(zodiac.getSignByDate());
// console.log(zodiac.getSignByName('Taurus'));
