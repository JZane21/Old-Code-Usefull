package ParcialDos.Practica3.Ejercicio7;

import java.util.Scanner;
import java.util.function.BiFunction;

public class Ej7 {
    public static void main(String[] args) {
        System.out.print("Digite una operacion: ");
        String operacion = pedirDato();
        BiFunction<Double,Double,Double>suma=(a,b)->a+b;
        BiFunction<Double,Double,Double>resta=(a,b)->a-b;
        BiFunction<Double,Double,Double>multiplicacion=(a,b)->a*b;
        BiFunction<Double,Double,Double>division=(a,b)->a/b;
        double a = Double.parseDouble(pedirDato());
        double b = Double.parseDouble(pedirDato());
        switch(operacion.charAt(0)){
            case '+':
                System.out.println("La suma es: "+suma.apply(a,b));
                break;
            case '-':
                System.out.println("La resta es: "+resta.apply(a,b));
                break;
            case '*':
                System.out.println("La multiplicacion es: "+multiplicacion.apply(a,b));
                break;
            case '/':
                System.out.println("La division es: "+division.apply(a,b));
                break;
            default:
                System.out.println("Operacion no valida");
                break;
        }
    }
    public static String pedirDato(){
        return new Scanner(System.in).nextLine();
    }
}
