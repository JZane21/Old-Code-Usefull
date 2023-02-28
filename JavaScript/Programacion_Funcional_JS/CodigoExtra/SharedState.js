const a = {
    value:2
};

const addOne = () => a.value += 1;

const timesTwo = () => a.value *= 2;

addOne();
timesTwo();
console.log(a);


const b = {
    value:2
};

const addOne2 = b => Object.assign({},b,{puppet:'hola'});

const timesTwo2 = b => Object.assign({},b,{value: b.value * 2});

console.log(addOne2(timesTwo2(b)));

console.log(b.value);