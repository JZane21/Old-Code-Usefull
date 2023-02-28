/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */
package edu.upb.registroestudiantes.pfsegundoparcial;

import java.util.Calendar;
import java.util.Date;
import java.util.List;
import java.util.stream.IntStream;

/**
 *
 * @author vgutierrez
 */
public class PFSegundoParcial {

    public static void main(String[] args) {
        System.out.println("----------PRIMER ORDEN----------------");
        System.out.println(suma(5, 6));  // FUNCION DE PRIMER ORDEN

        System.out.println("---------PRDEN SUPERRIOR--------------");
        List<Integer> lista = List.of(4, 4, 8, 9, 5, 4, 2, 8);

        lista.stream().map(PFSegundoParcial::operacion).forEach(System.out::println);  // FUNCION DE ORDEN SUPERIOR
        System.out.println(lista);// la lista se mantiene

        System.out.println("---------PRDEN SUPERRIOR OBJETOS--------------");

        List<Estudiante> listaEstudiantes = List.of(new Estudiante("Hugo", 90), new Estudiante("Jose", 85), new Estudiante("Emanuel", 95));

        listaEstudiantes.stream().map(PFSegundoParcial::aplicarPenalidad).forEach(System.out::println);

        /*
          
        Cliente{String nombre, Date fechaNacimiento}
        
        lista de Clientes calculando su edad
        
         */
        Calendar nacimientoBrenda = Calendar.getInstance();
        nacimientoBrenda.set(2002, 4, 14);

        Calendar nacimientoKatzumi = Calendar.getInstance();
        nacimientoKatzumi.set(2003, 1, 15);

        Calendar nacimientoVictor = Calendar.getInstance();
        nacimientoVictor.set(1986, 6, 26);

        List<Cliente> clientes = List.of(new Cliente("Brenda", nacimientoBrenda.getTime()), new Cliente("Katzumi", nacimientoKatzumi.getTime()), new Cliente("Victor", nacimientoVictor.getTime()));

        clientes.stream().map(PFSegundoParcial::calcularEdad).forEach(System.out::println);

        System.out.println("-------EDADES MAYORES A 21------");
        clientes.stream().filter(e -> e.edad > 21).forEach(System.out::println);

        System.out.println("-------------------------------");

        /*
          
        Cuadrilatero{int alto, int largo, int ancho} --> volumen
        
        lista de Cuadrilateros calculando el volumen = alto * largo * ancho
        
        filtrar todos los cuadrilateros que tengan un volumen mayor a 100 m3
        
         */
        List<Cuadrilatero> cuadrilateros = List.of(new Cuadrilatero(5, 5, 5), new Cuadrilatero(9, 9, 9), new Cuadrilatero(9, 10, 10));

        cuadrilateros.stream().map(cuadrilatero -> cuadrilatero.alto * cuadrilatero.ancho * cuadrilatero.largo)
                .filter(volumen -> volumen > 100)
                .forEach(System.out::println);

        /*
       
       Suma de los volumenes
       
       
         */
        System.out.println("------------");

        int sumaVolumen = cuadrilateros.stream().map(cuadrilatero -> cuadrilatero.alto * cuadrilatero.ancho * cuadrilatero.largo)
                .reduce(0, (a, b) -> a + b);

        System.out.println("Suma Volumen:" + sumaVolumen);
        
        
        /*
        
        Sumar los elementos de una lista
        
        */
        
        List<Integer> listaEnteros = List.of(6,4,8,4,4,322);
        
        int acumulador = listaEnteros.stream().reduce(0, (a,b)-> operacionAcumuladora(a,b));
        
        System.out.println(acumulador);
        
        System.out.println("------------ REDUCE CON OBJETOS ------------");
        
        System.out.println(cuadrilateros.stream().reduce(new Cuadrilatero(0, 0, 0),(a,b)->aculadorCuadrilatero(a,b)));
        
        
        ///
        int total1 = 0;
        for(int i=0;i<=10;i++){
            total1 = total1 + i;
        }
        System.out.println(total1);
        //////
        System.out.println(IntStream.rangeClosed(0, 10).reduce(0, (total2,i)->total2+i));
        
        /// usando Reduce calcular el factorial de un numero 5! = 5+4*3*2*1 
        
        
        
    }

    
    
    public static Cuadrilatero aculadorCuadrilatero(Cuadrilatero a, Cuadrilatero b){
        System.out.println("A:"+a);
        System.out.println("B:"+b);
        Cuadrilatero resulado = new Cuadrilatero(a.alto+b.alto,a.ancho+b.ancho,a.largo+b.largo);
        
        return resulado;
    }
    
    public static int operacionAcumuladora(int a,int b){
        return (a+b)/2;
    }
    
    
    public static Cliente calcularEdad(Cliente cliente) {
        long edadEnMillisegundos = new Date().getTime() - cliente.fechaNacimiento.getTime();

        double edadEnAnios = ((((edadEnMillisegundos / 1000) / 60) / 60) / 24) / 365;

        System.out.println(edadEnAnios);
        cliente.edad = edadEnAnios;

        return cliente;

        //int edadCliente = cliente.fechaNacimiento;
    }

    public static int suma(int x, int y) { // FUNCION PRIMER ORDEN
        return x + y;
    }

    public static int operacion(int x) {
        return (int) Math.pow(x, 2);
    }

    public static Estudiante aplicarPenalidad(Estudiante e) {
        e.nota = e.nota - 5;
        return e;
    }

}
