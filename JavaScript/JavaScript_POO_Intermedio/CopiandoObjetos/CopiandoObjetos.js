'use strict';
const obj1 = {
    a: 'a',
    b: 'b',
    c: {
        d:'d',
        e:'e'
    },
    imprimir(){
        console.log('miau');
    }
};

const obj2 = {};

//forma 1 - incompleta - no funciona con objetos
for(let propiedad in obj1){
    obj2[propiedad] = obj1[propiedad];
}

//forma 2 - incompleta - no funciona con objetos
const obj3 = Object.assign({},obj1,{name: 'Hello World!'});

//forma 3 - incompleta - no funciona con objetos, y si se altera la copia
//original, tambien afecta a los objetos que son del resultado de esta
//por la herencia que genera __proto__
const obj4 = Object.create(obj1);

//forma 4 - JSON.parse(JSON.stringify(objeto)) - semicompleta
//no copia los metodos de los objetos
const stringObj1 = JSON.stringify(obj1);
const obj5 = JSON.parse(stringObj1);

function isObject(subject){
    return typeof subject == "object"; 
}
function isArray(subject){
    return Array.isArray(subject);
}

//forma 5 - deepCopy - completa
function deepCopy(subject){
    let copySubject;

    if(isArray(subject)){
        copySubject = [];
    } else if(isObject(subject)){
        copySubject = {};
    } else{
        return subject;
    }

    for(let key in subject){
        if(isObject(subject[key])){
            copySubject[key] = deepCopy(subject[key]);
        }else{
            if(isArray(subject)){
                copySubject.push(subject[key]);
            }else{
                copySubject[key] = subject[key];
            }
        }
    }

    return copySubject;
}

const obj6 = deepCopy(obj1);