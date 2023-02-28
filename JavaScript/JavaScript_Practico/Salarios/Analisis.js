const salariosCol = Latam.map(i=>i.salary);
const salariosColSorted = salariosCol.sort((a,b)=>a-b);

function esPar(number){
    return number%2==0;
}

//Mediana General
function medianaSalarios(lista){
    const mitad = parseInt(lista.length/2);
    return esPar(lista.length) ? ((lista[mitad-1]+lista[mitad])/2) : lista[mitad];
}

//Mediana Top 10%
const spliceStart=(salariosColSorted.length*(90))/100;
const spliceCount=salariosColSorted.length-spliceStart;
const salariosTop = salariosColSorted.splice(spliceStart,spliceCount);

const medianaGeneral = medianaSalarios(salariosColSorted);
const medianaTop = medianaSalarios(salariosTop);
console.log(medianaGeneral,medianaTop);