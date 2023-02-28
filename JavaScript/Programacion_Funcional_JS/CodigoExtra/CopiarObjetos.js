let a=1;
let b=a;

console.log(a,b);//1 1

b+=1;

console.log(a,b);//1 2

let car = {
    color:'red',
    year:2019,
    km:0
};

//Esto solo copia la referencia de donde se encuentra
//el objeto en memoria, no como tal los datos del mismo
let newCar = car;

console.log(car,newCar);
newCar.color = 'blue';
console.log(car,newCar);

//Asi se copia los valores de un objeto
let newCar2 = Object.assign({},car);

newCar2.color = 'green';
console.log(car,newCar2);

let car2 = {
    color:'red',
    year:2019,
    km:0,
    owner:{
        name:'Dick Grayson',
        age:25
    }
};

let newCar3 = Object.assign({},car2);
console.log(car2,newCar3);

newCar3.owner.age=26;

//el cambio se efectuara en ambos, debido a que lo que
//se copia del objeto dentro del objeto es la direccion
//de referencia y no sus datos
console.log(car2,newCar3);

//JSON.stringify() .- Convierte todo objeto de JS en un JSON(representacion 
//de un objeto), en este caso en un string

//JSON.parse() .- Convierte una cadena de texto en un objeto de JS, sin
//importar que tan complejo sea

//de esta manera, copiamos todo contenido de un objeto en
//otro, sin importar que haya otros objetos dentro de
//este
let newCar4 = JSON.parse(JSON.stringify(car2));

console.log(car2,newCar4);

newCar4.owner.name='Star Fire';



