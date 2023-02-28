function newFunction(name,age,country){
    var name = name || 'Alejandro';
    //Al lado de la inicializacion, podemos colocar un valor
    //por defecto en caso de que dicho valor no se haya 
    //ingresado en los parametros de la funcion
    var age = age || 19;
    var country = country || 'Bolivia';
    console.log(name,age,country);
}

// es6
function newFunction2(name = 'Alejandro',age = 19,country = 'Bolivia'){
    console.log(name,age,country);
}

newFunction2();
newFunction2('Jose',19,'Peru');