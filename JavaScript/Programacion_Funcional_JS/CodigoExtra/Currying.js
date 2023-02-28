const buildSum2 = a => b => a+b;

const tag = t => content => `<${t}>${content}</${t}>`

function sumThreeNumber(a,b,c){
    return a + b + c;
}

console.log(sumThreeNumber(2,3,5));

function sumThreeNumber2(a){
    return function(b){
        return function(c){
            return a+b+c;
        }
    }
}

console.log(sumThreeNumber2(2)(3)(5));

const sumThreeNumber3 = a => b => c => a+b+c;

console.log(sumThreeNumber3(2)(3)(5));