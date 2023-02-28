function calcularPrecioConDescuento(precio,descuento){
    const porcentajePrecioConDescuento = 100-descuento;
    const precioConDescuento = (precio*porcentajePrecioConDescuento)/100;

    return precioConDescuento;
}

function priceDiscount(){
    const price = document.getElementById("InputPrice").value;
    const discount = document.getElementById("InputDiscount").value;
    if(validarCupon(discount)!=0){
        document.getElementById("ResultP").innerText = 
        "El precio con descuento es: "
        +calcularPrecioConDescuento(price,validarCupon(discount))+" Bs.";
    }else{
        document.getElementById("ResultP").innerText = "Cupon invalido";
    }
    
}

function validarCupon(codigo){
    const cupones = ['123','132','213','231','312','321'];
    const code = cupones.filter(i=>i==codigo)[0];
    switch(code){
        case '123':
            return 30;
        case '213':
            return 17.5;
        case '312':
            return 25;
        case '321':
            return 40;
        case '231':
            return 10;
        case '132':
            return 20;
        default:
            return 0;
    }
}