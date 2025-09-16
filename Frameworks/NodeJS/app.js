// let numero = 5;
// console.log(numero+6); // 11
// console.log(numero++); // 5 +1 no lo muestra directamente
// console.log(numero); // 5+1=6
// console.log(++numero); // 6+1=7
// console.log(numero); // 7

//funcion declarada ---> tiene hoisting
// console.log(saludar("Camilo"));
// function saludar(nombre) {
//   return nombre;
// }

//funcion declarada ---> no tiene hoisting
// console.log(saludar2("Laura"));
// let saludar2 = function(nombre) {
//   return nombre;
// }

// == ===
// let booleano = 1 === '1' || 2 == 3;

// console.log(booleano);
// // --------------------------------
// let clima = "lluvioso";

// if (clima === "soleado") {
//     console.log("salimos para el asado");
// } else if (clima === "lluvioso") {
//     console.log("quedarnos en casita");
// } else {
//     console.log("nos vamos a dunas");
// }

// let nombres =["Camilo", "Laura", "Dario"];
// console.log(nombres);
// let edades = [30, 28, 35, 5, 26];
// console.log(edades);
// let valoresDeVerdad = [true, false, false, true];
// console.log(valoresDeVerdad);
// let variado = [true, "Camilo", false, 21, edades];
// console.log(variado);
// console.log(valoresDeVerdad[0]); // true
// console.log(variado[4][0]); // edades
// nombres.push("esmeralda");
// let dato = nombres.pop();
// console.log(nombres);
// let dato2 = nombres.unshift();
// console.log(nombres);
// let dato3 = nombres.shift();
// console.log(nombres);

// let notas = [3, 6, 7, 8, 9, 0];
// console.log(notas);
// notas.push(1);
// notas.push(4);
// console.log(notas);
// notas.push(7);
// console.log(notas);

// let dato = notas.pop();
// console.log(notas);
// console.log(dato);

// console.log(notas.shift());
// console.log(notas);
// console.log(notas.unshift(10));
// console.log(notas);

//operador spread
// let frutasUno = ["pera", "banana", "manzana"];
// let frutasDos = ["durazno", "ciruela", "naranja", ...frutasUno];
// console.log(frutasDos);
// let todasLasFrutas = [...frutasUno, ...frutasDos];
// let todasLasFrutas2 = [frutasUno, frutasDos];
// console.log(todasLasFrutas);
// console.log(todasLasFrutas2);

//objetos con spread
// let auto = {
//   marca: 'Ferrari',
//   km: 0,
//   anio: 2025,
// };

// let corredorUno = {nombre: 'Camilo', edad: 21, ...auto};
// let corredorDos = {nombre: 'Laura', edad: 20, ...auto};

// console.log(corredorUno);
// console.log(corredorDos);

// let notas = [3.5, 4.0, 5.0, 2.3, 3.0, 3.7, 2.97];
// console.log(Math.min(...notas));
// console.log(Math.max(...notas));

// function peliculasVistas(...nombres){
//     console.log(nombres);
// }
// console.log(peliculasVistas("End Game", "Iron Man 3", "Mi Pobre Angelito", "Bad Boys 2"));

// function parametros(p1, p2, ...otros){
//     console.log(otros);
// }
// console.log(parametros("End Game", "Iron Man 3", "Mi Pobre Angelito", "Bad Boys 2"));

// function sumar(...numeros){
//     return numeros.reduce((acumulador, numero)=> acumulador+=numero);
// }
// console.log(sumar(3,5)); //8
// console.log(sumar(3, 5, 13, 5, 23, 9, 45, 99, 1576, 1, 3)); // 1783

// let sumar = (a,b) => a+b;
// let multiplicar = a => a*2;

// let sauldo = nombre => `hola ${nombre}`;
// console.log(sauldo("Camilo"));

// function nombreCompleto(nombre, apellido) {
//     return nombre + ' ' + apellido;
// }
// function saludar(nombre, apellido, callback) {
//     return 'Hola ' + callback(nombre, apellido)+ '!!!';
// }
// console.log(saludar("Camilo", "Ordoñez", nombreCompleto));

let sumar = (numero1, numero2) => numero1 + numero2;
let resta = (numero1, numero2) => numero1 - numero2;
let multi = (numero1, numero2) => numero1 * numero2;
let divi = (numero1, numero2) => numero1 / numero2;
let calculadora = (numero1, numero2, operacion) => operacion(numero1, numero2);
console.log(calculadora(18, 3, sumar));