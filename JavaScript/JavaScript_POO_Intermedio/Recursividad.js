const n = 1000000000;

function recursividad(numero){
    return numero>1?numero+recursividad(numero-1):1;
}

function bucle(numero){
    let suma=0;
    for(let i=1;i<=numero;i++){
        suma+=i;
    }
    return suma;
}

function formula(numero){
    return (numero*(numero+1))/2;
}

console.log(formula(n));
console.log(bucle(n));
console.log(recursividad(n));