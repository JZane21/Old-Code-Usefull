//var
var firstName; //valor vacio, undefined, null
firstName = 'Oscar'; //asignamos
console.log(firstName); //mostramos valor

var lastName = 'Barajas';
lastName = 'Tavares';
console.log(lastName);

var secondName = 'David'; //declarando/asignando
var secondName = 'Ana'; //reasignando
console.log(secondName);

//let
let fruit = 'Apple'; //declarar y asignar
fruit = 'Kiwi'; //reasignar

//let fruit='banana';//redeclarar/reasignar
                    //No es posible redeclarar
//const
const animal = 'dog';
//animal ='cat';//esto no es posible, ya que a 
                //una constante no se la puede cambiar
                //No es posible redeclarar
console.log(animal);

const vehicles = [];
vehicles.push(1);
vehicles.push(2);
vehicles.push(3);
console.log(vehicles);
vehicles.pop();
console.log(vehicles);
//En el caso de arreglos, podemos agregar o sacar
//elementos