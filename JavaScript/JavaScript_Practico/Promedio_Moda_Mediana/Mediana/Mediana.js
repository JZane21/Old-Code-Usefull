let mitadLista;
let cantidadElementos=0;
let elementos=[];

function esPar(numero){
    if(numero%2==0){
        return true;
    }else{
        return false;
    }
}

function calcularMediana(elementos){
    if(esPar(elementos.length)){
        return (elementos[mitadLista]+elementos[mitadLista-1])/2;
    }else{
        return elementos[mitadLista];
    }
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
            "La mediana de los elementos agregados es: "
            +calcularMediana(elementos);
        }
    }else{
        document.getElementById("textoAnuncio").innerText = "No es posible agregar un elemento";
    }
}