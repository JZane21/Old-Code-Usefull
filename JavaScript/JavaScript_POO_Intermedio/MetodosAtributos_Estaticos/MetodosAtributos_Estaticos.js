console.log('Hola mundo');
class Patito{
    static sonidito(){
        return 'cuak';
    }
}

console.log(Patito.sonidito());

// Object.keys(objeto) .- Nos devolvera las llaves de los atributos
// en forma de un array

// Object.getOwnPropertyName(objeto) .- Hace algo parecido al metodo
// keys, pero tiene una que otra diferencia

// Object.entries(objeto) .- Nos devuelve un arrays de arrays con
// las llaves y valores de esas llaves

// Object.getOwnPropertyDescriptors(objeto) .- Nos devolveria todas
// las propiedades de nuestro objeto (keys y values), ademas
// nos envia propiedades que determinan los permisos de acceso
// que tiene dicho objeto


//TODO metodos mas importantes de la clase Object
const juan = {
    name:"Juanito",
    age:18,
    approvedCourses:["Curso 1"],
    addCourse(newCourse){
        this.approvedCourses.push(newCourse);
    }
}
// console.log(Object.keys(juan));
// console.log(Object.getOwnPropertyNames(juan));
// console.log(Object.entries(juan));


Object.defineProperty(juan, "pruebaNasa", {
    value:"aliens",
    writable:false,
    enumerable:false,
    configurable:false
});

//impide que se muestre si se la llama de
//forma general con Object.keys(objeto)
Object.defineProperty(juan, "navigator", {
    value:"chrome",
    writable:true,
    enumerable:false,
    configurable:true
});

//impide que sea editable
Object.defineProperty(juan, "editor", {
    value:"VSCode",
    writable:false,
    enumerable:true,
    configurable:true
});

//impide que se borre dicha propiedad
Object.defineProperty(juan, "terminal", {
    value:"WSL",
    writable:true,
    enumerable:true,
    configurable:false
});

//esto hace que todos los atributos no sean
//configurables (configurable:false)
//Object.seal(juan);

//Esto impide que podamos sobreescribir o
//eliminar los atributos de nuestro objeto
//Object.freeze(juan);

console.log(Object.getOwnPropertyDescriptors(juan));







