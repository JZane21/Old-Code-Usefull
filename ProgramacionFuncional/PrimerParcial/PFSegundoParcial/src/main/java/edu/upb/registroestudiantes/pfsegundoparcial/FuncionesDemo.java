/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package edu.upb.registroestudiantes.pfsegundoparcial;

import java.util.Arrays;
import java.util.List;
import java.util.function.BiFunction;
import java.util.function.Function;
import java.util.function.Supplier;

/**
 *
 * @author vgutierrez
 */
public class FuncionesDemo {

    public static void main(String args[]) {
        System.out.println("---------- COMPOSICION DE FUNCIONES -------------");

        System.out.println(multiplicacion(suma(5, 6), 2));

        Function<Integer, Integer> operacion = (a) -> a + 5;

        System.out.println(operacion.apply(10));

        BiFunction<Integer, Integer, Integer> operacion2 = (a, b) -> a + b;

        System.out.println(operacion2.apply(5, 6));

        Function<Estudiante, String> operacion3 = (a) -> a.nota >= 51 ? "APROBADO" : "REPROBADO";

        System.out.println(operacion3.apply(new Estudiante("Vivian", 90)));

        BiFunction<Estudiante, Estudiante, Double> operacion4 = (a, b) -> (a.nota + b.nota) / 2;

        System.out.println(operacion4.apply(new Estudiante("Hugo", 80), new Estudiante("katzumi", 90)));

        /*
        Funtion reciba un Entero, y retorne un STRING que diga si es PAR o IMPAR
         */
        Function<Integer, String> parImpar = (a) -> a % 2 == 0 ? "PAR" : "IMPAR";

        System.out.println(parImpar.apply(10));

        Function<Integer, Integer> operacion5 = (a) -> a * 10;

        Function<Integer, Integer> operacion6 = operacion5.andThen(operacion);

        System.out.println(operacion6.apply(3));

        System.out.println("-------FUNCIONES ANONIMAS-----------------------");
        List<Integer> listado = List.of(6, 5, 64, 32, 2);
        listado.forEach(item -> System.out.println(item));

        Supplier<Double> proveedor1 = () -> Math.random();

        System.out.println(proveedor1.get());

        listado.stream().filter(item -> item % 2 == 0).forEach(System.out::println);

        System.out.println("----------------Funciones como resultado----------------------");
        
        System.out.println(obtenerOperador(2).apply(6));
        
        System.out.println("----------------Funciones que reciben de parametro funciones----------------------");
        
        Estudiante luciano = new Estudiante("Luciano", 40);
        
        luciano.aplicarFuncion((x)->x+10);
        
        System.out.println(luciano);
        
        luciano.aplicarFuncion((x)->x+5);
        
        System.out.println(luciano);
        
        luciano.aplicarFuncion((x)->x-3);
        
        System.out.println(luciano);
        
        
        System.out.println("----------Parametros dinamicos-----------");
        
        
        System.out.println(sumador());
        System.out.println(sumador(1));
        System.out.println(sumador(1,2));
        System.out.println(sumador(1,2,3));
        System.out.println(sumador(1,2,3,4));
        
       
        
        
    }
    
    
    public static Integer sumador(Integer...x){
        List<Integer> lista = Arrays.asList(x);
        return lista.stream().reduce(0, (a,b)->a+b);        
    }
    
  

    public static int suma(int a, int b) {
        return a + b;
    }

    public static int multiplicacion(int a, int b) {
        return a * b;
    }

    public static Function<Integer,Integer> obtenerOperador(int opcion) {
        switch (opcion) {
            case 1:
                Function<Integer,Integer> duplicar = (x)->x*2;
                return duplicar;                
            case 2:
                Function<Integer,Integer> potencia = (x)-> (int)Math.pow(x, 2);
                return potencia;                
            case 3:
                Function<Integer,Integer> mitad = (x)-> x/2;
                return mitad;                
            default:
                throw new AssertionError();
        }
    }

}
