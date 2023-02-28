let cantidadElementos=0;
let elementos=[];

function calcularMediaGeometrica(lista){
    return Math.pow(lista.reduce((a,b)=>a*b),1/lista.length);
}

function numeroElementos(){
    cantidadElementos = parseInt(document.getElementById("InputValor").value);
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
            "La media geometrica de los elementos agregados es: "
            +calcularMediaGeometrica(elementos);
        }
    }else{
        document.getElementById("textoAnuncio").innerText = "No es posible agregar un elemento";
    }
}