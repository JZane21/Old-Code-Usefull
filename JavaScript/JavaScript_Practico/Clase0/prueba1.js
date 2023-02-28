/*
Nombre = "Juan";
Apellido = "Locko";
UsuarioPlatzi = "JLock";
Edad = 17;
CorreoElectronico = "JLock@platzi.com";
MayorEdad = false;
DineroAhorrado = 99.99;
Deudas = 13;
console.log("Nombre Completo: "+Nombre+" "+Apellido+"\n"+"Dinero real: "+(DineroAhorrado-Deudas));
const name = "Juan David";
const lastname = "Castro Gallego";
const nickname = "juandc";
function presentacion(name, lastname, nickname){
	completeName = name + " " + lastname;
	console.log("Mi nombre es " + completeName + ", pero prefiero que me digas " + nickname + ".");
}
presentacion(name,lastname,nickname);
*/
/*
const tipoDeSuscripcion = "Basic";
if(tipoDeSuscripcion=="Free"){
	console.log("Solo puedes tomar los cursos gratis");
} else if(tipoDeSuscripcion=="Basic"){
	console.log("Puedes tomar casi todos los cursos de Platzi durante un mes");
} else if(tipoDeSuscripcion=="Expert"){
	console.log("Puedes tomar casi todos los cursos de Platzi durante un año");
} else{
	console.log("Tú y alguien más pueden tomar TODOS los cursos de Platzi durante un año");
}
*/
/*
function pregunta(){
	a="";
	while(a!="4"){
		a=prompt("Cuanto es 2+2?");
		if(a=="4"){
			alert("felicitaciones");
		}
	}
}
pregunta();
*/

/*
array = [1,2,3,4,5];
function mostrarElemento(array){
	alert(array[0]);
}
mostrarElemento(array);
*/

array = [1,2,3,4,5];
function mostrarElemento(array){
	array.forEach(element => {
		console.log(element);
	});
}
mostrarElemento(array);