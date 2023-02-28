let cantidadElementos=0;
let elementos=[];

function calcularModa(lista){
    let listaG=[];
    lista = lista.sort((a, b) => a - b);
    let contador=1;
    for(let i=0;i<lista.length;i++){
        if(lista[i]==lista[i+1]){
            contador++;
        }else{
            listaG.push([lista[i],contador]);
            contador=1;
        }
    }
    const cantidadGrande = listaG.map(i=>i[1]).sort((a, b) => a - b)[listaG.length-1];
    return listaG.filter(i=>i[1]==cantidadGrande).map(i=>i[0]);
}

function numeroElementos(){
    cantidadElementos = parseInt(document.getElementById("InputValor").value);
    mitadLista = parseInt(cantidadElementos/2);
    while(elementos.length>0){
        elementos.pop();
    }
}
function agregarElemento(){
    if(cantidadElementos>0){
        elementos.push(parseFloat(document.getElementById("InputElemento").value));
        cantidadElementos--;
        if(cantidadElementos==0){
            elementos.sort((a,b)=>a-b);
            document.getElementById("textoAnuncio").innerText = 
            "La moda de los elementos agregados es: "
            +calcularModa(elementos);
        }
    }else{
        document.getElementById("textoAnuncio").innerText = "No es posible agregar un elemento";
    }
}