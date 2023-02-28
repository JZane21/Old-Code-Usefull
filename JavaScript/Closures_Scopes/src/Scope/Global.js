// variables

var a;//declaramos una variable
var b = 'b';//declaramos y asignamos
b = 'bb';//reasignacion
var a = 'aa';//redeclaracion


//Global Scope
/*
nuestras variables pasan a ser globales, instanciandose
en el objeto window, siendo capaces de acceder donde queramos
a estas variables
*/
var fruit = 'apple';//global

function bestFruit(){
    console.log(fruit);
}

bestFruit();

//Creando una variable global por error
function countries(){
    country = ' Bolivia';//se declara automaticamente como global
    console.log(country);
}
countries();
console.log(country);