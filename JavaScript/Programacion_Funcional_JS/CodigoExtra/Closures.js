//Function Composition .- combinamos dos o mas funciones para generar una nueva funcion
//                        con un resultado nuevo

function buildSum(a){
    return function(b){
        return a + b;
    }
}

const addFive = buildSum(5)
console.log(addFive(5)); //10

const buildSum2 = a => b => a+b;

const addFive2 = buildSum2(5)
console.log(addFive2(5)); //10