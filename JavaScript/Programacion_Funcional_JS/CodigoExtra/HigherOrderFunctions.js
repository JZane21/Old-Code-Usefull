let array1 = [1,2,3];
let array2 = [];

//imperativa
for(let i=0;i<array1.length;i++){
    array2.push(array1[i]*2);
}
console.log(array2);// [2,4,6]

array1 = [1,2,3];
array2 = [];
//funcional - 1
array1.forEach(i=>array2.push(i*2))
console.log(array2);// [2,4,6]

array1 = [1,2,3];
array2 = [];
//funcional - 2
array2 = array1.map(function(item){
    return item * 2;
});
console.log(array2);// [2,4,6]

array1 = [1,2,3];
array2 = [];
//funcional - 3
array2 = array1.map(item=>item*2)
console.log(array2);// [2,4,6]