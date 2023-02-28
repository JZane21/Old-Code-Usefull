package ParcialDos.Clases;

import java.io.File;
import java.util.Arrays;
import java.util.List;
import java.util.function.BiFunction;
import java.util.function.Function;
import java.util.function.Supplier;

public class Clase2 {
    public static void main(String[] args) {
        System.out.println("-----Composicion de Funciones-----");
        System.out.println();
        Function<Integer,Integer>operacion=(a)->a+5;
        System.out.println(operacion.apply(10));

        BiFunction<Integer,Integer,Integer>operacion2=(a,b)->a+b;
        System.out.println(operacion2.apply(2, 3));
    
        Function<Estudiante,String> op3=(a) -> a.nota >= 60 ? "Aprobado":"Reprobado";

        Function<Integer,String> op4 = (a) -> a%2==0 ? "ES PAR" : "ES IMPAR";
        System.out.println(op4.apply(7));

        Function<Integer,Integer>op5 = (a)->a*10;
        Function<Integer,Integer>op6 = op5.andThen(operacion);
        
        System.out.println("----------------------------");
        System.out.println("-----Funciones Anonimas-----");

        System.out.println("Consumidores");
        List<Integer> listado = List.of(6,5,64,32,2);
        //acepta un valor de parametro y no devuelve ninguno
        listado.forEach(item->System.out.println(item));

        System.out.println("Proveedores");
        //No recibe parametros, pero devuelve un resultado
        Supplier<Integer> proveedor1 = ()->(int)(Math.random()*100);
        System.out.println(proveedor1.get());

        System.out.println("Funciones");
        //Son funciones que pueden acpetar varios argumentos
        //y devuelven resultados que no son necesariamente del mismo
        //tipo

        System.out.println("operadores Unarios");
        /* */
        System.out.println("operadores Binarios");
        /* */
        System.out.println("Predicados");
        /* Es una expresion lambda que recibe un solo
         * parametro y devuelve un boolean
        */
        listado.stream().filter(item->item%2==0).forEach(System.out::println);
        /*Funciones que devuelven funciones como resultados*/
        System.out.println("Currificacion");
        /*Una funcion que acepte un parametro N,
         * la cual se va reduciendo por N-1, y asi
         * sucesivamente hasta obtener un parametro unico 
         */
        System.out.println(obtenerOperador(2).apply(13));

        System.out.println("-----Funcion que recibe como parametro otra funcion-----");

        Estudiante luciano = new Estudiante("Luciano", 99);
        luciano.aplicarFuncion((x)->x+10);
        System.out.println(luciano.nota);

        System.out.println("-----Parametros Dinamicos-----");

        System.out.println(sumador());
        System.out.println(sumador(1));
        System.out.println(sumador(1,2));
    }

    public static Integer sumador(Integer...x){//este x seria como un array
        List<Integer> lista = Arrays.asList(x);
        return lista.stream().reduce(0,(a,b)->a+b);
    }

    public static Function<Integer,Integer> obtenerOperador(int opcion){
        switch(opcion){
            case 1:
                Function<Integer,Integer> duplicar = (x)->x*2;
                return duplicar;
            case 2:
                Function<Integer,Integer> potencia = (x)->(int)(Math.pow(x, 2));
                return potencia;
            case 3:
                Function<Integer,Integer> mitad = (x)->x/2;
                return mitad;
            default:
                throw new AssertionError();
        }
    }
}
