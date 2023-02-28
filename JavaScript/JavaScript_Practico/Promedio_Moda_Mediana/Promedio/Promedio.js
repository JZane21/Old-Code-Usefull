function calcularMediaAritmetica(lista){
    //opcion 1
    // lista.reduce(
    //     function (valorAcumulado=0, nuevoElemento){
    //         return valorAcumulado + nuevoElemento;
    //     }
    // );

    //opcion 2
    // lista.reduce((a,b)=>a+b);

    //En javascript, para usar el reduce, no es necesario (por el momento)
    //darle un valor inicial al lambda calculus para empezar a acumular
    //en dicho valor
    return lista.reduce((a,b)=>a+b) / lista.length;
}
let cantidadElementos=0;
let elementos=[];
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
            document.getElementById("textoAnuncio").innerText = 
            "El promedio de los elementos agregados es: "
            +calcularMediaAritmetica(elementos);
        }
    }else{
        document.getElementById("textoAnuncio").innerText = "No es posible agregar un elemento";
    }
}
