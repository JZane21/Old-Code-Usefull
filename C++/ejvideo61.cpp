#include <string.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
//Estructura promedio
struct promedio{
	float nota1,nota2,nota3;
};
//estructura datos alumno
struct alumnos{
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio prom;
}alm[100];
//Funcion principal
int main(){
	int limite,posicion = 0;
	float max = 0,promedio = 0;
	//Aqui pediremos datos al usuario
	cout<<"*Ingrese el numero de alumnos: "; cin>>limite;
	cout<<'\n';
	for(int i=0;i<limite;i++){
		fflush(stdin);
		cout<<"["<<i+1<<"] Ingrese el nombre del alumno: ";cin.getline(alm[i].nombre,20,'\n');
		cout<<"["<<i+1<<"] Ingrese el genero del alumno: "; cin.getline(alm[i].sexo,20,'\n');
		cout<<"["<<i+1<<"] Ingrese la edad del alumno:"; cin>>alm[i].edad;
		cout<<"\nNotas del alumno "<<endl;
		cout<<"Ingrese la nota ["<<i+1<<"] del alumno: "; cin>>alm[i].prom.nota1;
		cout<<"Ingrese la nota ["<<i+1<<"] del alumno: "; cin>>alm[i].prom.nota2;
		cout<<"Ingrese la nota ["<<i+1<<"] del alumno: "; cin>>alm[i].prom.nota3;
		promedio = (alm[i].prom.nota1+alm[i].prom.nota2+alm[i].prom.nota3)/3;
		if(promedio > max){
			max = promedio;
			posicion = i;
		}
		cout<<'\n';
	}

	cout<<"\t*ALUMNO CON MEJOR PROMEDIO DE LA CLASE*"<<endl;
	cout<<"Nombre: "<<alm[posicion].nombre<<endl;
	cout<<"Edad: "<<alm[posicion].edad<<endl;
	cout<<"Genero: "<<alm[posicion].sexo<<endl;
	cout<<"Promedio: "<<max<<endl;

	getch();
	return 0;
}
