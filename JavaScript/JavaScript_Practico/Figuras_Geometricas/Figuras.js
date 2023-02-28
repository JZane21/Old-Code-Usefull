//Codigo del Cuadrado
function perimetroCuadrado(lado) {
    return lado*4;
}
function areaCuadrado(lado){
    return lado*lado;
}

//Codigo del Triangulo
function perimetroTriangulo(lado1,lado2,base){ 
    return lado1+lado2+base;
}
function areaTriangulo(base,altura) {
    return (base*altura)/2;
}
//Codigo del Circulo
const pi = Math.PI;

function diametroCirculo(radio){
    return radio*2;
}
function circunferencia(radio) {
    return diametroCirculo(radio)*pi;
}
function areaCircunferencia(radio) {
    return radio*radio*pi;
}

//Aqui interactuaremos con el html:
//Cuadrado
function calcularPerimetroCuadrado(){
    const entrada = document.getElementById("InputCuadrado");
    const valor = entrada.value;
    if(valor>0){
        alert("El perimetro es: "+perimetroCuadrado(valor)+"cm");
    }else{
        alert("Valor no permitido");
    }
}
function calcularAreaCuadrado(){
    const entrada = document.getElementById("InputCuadrado");
    const valor = entrada.value;
    
    if(valor>0){
        alert("El area es: "+areaCuadrado(valor)+"cm^2");
    }else{
        alert("Valor no permitido");
    }
}
//Triangulo
function calcularPerimetroTriangulo(){
    const lado1 = document.getElementById("InputLadoTriangulo1");
    const lado2 = document.getElementById("InputLadoTriangulo2");
    const base = document.getElementById("InputBaseTriangulo");

    const v1 = parseFloat(lado1.value);
    const v2 = parseFloat(lado2.value);
    const v3 = parseFloat(base.value);

    if(v1>0&&v2>0&&v3>0){
        alert("El perimetro es: "+perimetroTriangulo(v1,v2,v3)+"cm");
    }else{
        alert("Error al ingresar los datos");
    }
    
}
function calcularAreaTriangulo(){   
    const base = document.getElementById("InputBaseTriangulo");
    const altura = document.getElementById("InputAlturaTriangulo");

    const v3 = parseFloat(base.value);
    const v4 = parseFloat(altura.value);

    if(v3>0&&v4>0){
        alert("El area es: "+areaTriangulo(v3,v4)+"cm^2");
    }else{
        alert("Error al ingresar los datos");
    }
}
//Circulo
function calcularPerimetroCirculo(){
    const radio = document.getElementById("InputRadioCirculo").value;
    if(radio>0){
        alert("El perimetro es: "+circunferencia(radio)+"cm");
    }else{
        alert("Error al ingresar el dato");
    }
}
function calcularAreaCirculo(){
    const radio = document.getElementById("InputRadioCirculo").value;
    if(radio>0){
        alert("El perimetro es: "+areaCircunferencia(radio)+"cm^2");
    }else{
        alert("Error al ingresar el dato");
    }
}
//Triangulo Isosceles

function calcularAlturaTrianguloI(){
    const lado1 = parseFloat(document.getElementById("InputLadoTrianguloI1").value);
    const lado2 = parseFloat(document.getElementById("InputLadoTrianguloI2").value);
    const base = parseFloat(document.getElementById("InputBaseTrianguloI").value);
    if((lado1==lado2&&lado1!=base)
    ||(lado1==base&&lado1!=lado2)
    ||(lado2==base&&lado2!=lado1)){
        resultado=0;
        if(lado1==lado2){
            resultado=alturaTI(lado1,base);
        }else if(lado1==base){
            resultado=alturaTI(lado1,lado2);
        }else{
            resultado=alturaTI(lado2,lado1);
        }
        alert("La altura es: "+resultado);
    }else{
        alert("Datos incorrectos\nNo es posible calcular la altura");
    }
}
function alturaTI(lado,base){
    return Math.sqrt((lado*lado)-(base*base)/4);
}