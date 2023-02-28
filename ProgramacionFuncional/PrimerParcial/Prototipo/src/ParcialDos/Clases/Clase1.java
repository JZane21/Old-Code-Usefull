package ParcialDos.Clases;

import java.nio.file.DirectoryStream.Filter;
import java.sql.Date;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.List;

public class Clase1{
    public static void main(String[] args) {
        System.out.println("-----Primer Orden-----");
        System.out.println(sumar(1,2));//Funcion de Primer Orden
        System.out.println("-----Orden Superior-----");
        List<Integer>lista = List.of(1,2,3,4);
        System.out.println("Forma 1:");
        lista.stream().map(x -> x*2)
        .forEach(System.out::println);//Funcion de Orden Superior
        System.out.println("Forma 2:");
        lista.stream().map(Clase1::duplicar)
        .forEach(System.out::println);//Funcion de Orden Superior

        System.out.println(lista);//la lista se mantiene

        List<Estudiante> listaEstudiantes = List.of(new Estudiante("Enrique",100),
        new Estudiante("Jose",80));
        /*
        Cliente(String nombre, Date fechaNacimiento)
        lista de clientes que tengan mas de 21 years
        */

        Calendar nacimiento1 = Calendar.getInstance();
        nacimiento1.set(2002,4,14);

        Calendar nacimiento2 = Calendar.getInstance();
        nacimiento2.set(2003,1,15);

        Calendar nacimiento3 = Calendar.getInstance();
        nacimiento3.set(1986,6,26);

        Calendar nacimientoV = Calendar.getInstance();
        nacimientoV.set(2001,6,02);

        /*List<Cliente> clientes = List.of(new Cliente("Brenda",(Date) nacimiento1.getTime())
        ,new Cliente("Victor",(Date) nacimiento3.getTime()));

        clientes.stream().map(i->clientes.get(i)
        .Edad.equals((Date)(nacimientoV.getTime())))
        .forEach(System.out::println);*/

        /*
        Cuadrilatero(int alto, largo, ancho)
        */
        List<Cuadrilateros>cuadrilateros = List.of(new Cuadrilateros(1,2,3)
        ,new Cuadrilateros(4,5,6));
        cuadrilateros.stream().map(i -> i.getV()).filter(i->i>100).forEach( i->
            System.out.println(i)
        );
        List<Integer>enteros = List.of(1,2,3,4,5,6,7,8,9,10);
        System.out.println(enteros.stream().reduce(0,(a,b)->a+b));
        System.out.println("-----Reduce Acumulador con Objetos-----");
        cuadrilateros = List.of(new Cuadrilateros(1,2,3)
        ,new Cuadrilateros(4,5,6));
        System.out.println(cuadrilateros.stream().reduce(new Cuadrilateros(0, 0, 0), (a,b)->cuadrilateroAcumulador(a, b)));
    
        //calcular factorial de un numero
        enteros = List.of(1,2,3,4,5);
        System.out.println(enteros.stream().reduce(1,(a,b) -> factorial(a,1)));
    }
    public static int factorial(int a, int resultado){
        return a>1 ? resultado = a*factorial(a-1,resultado) : a;
    }
    public static Cuadrilateros cuadrilateroAcumulador(Cuadrilateros a, Cuadrilateros b){
        Cuadrilateros resultado = new Cuadrilateros(a.alto+b.alto, a.largo + b.largo, a.ancho + b.ancho);
        return resultado;
    }
    private static int sumar(int i, int j) {
        return i+j;
    }
    private static int duplicar(int i){
        return i*2;
    }
}