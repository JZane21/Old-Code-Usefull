package Practica2;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.IntStream;

public class ej4 {
    public static void main(String[] args) {
        List<Integer> numeros = new ArrayList<>();
        int n = pedirNumero("Introduzca el numero de casos: ");
        IntStream.range(1, n+1).forEach(i->{
            numeros.add(pedirNumero("Introduzca un numero: "));
        });
        System.out.println("Los numeros impares son:");
        numeros.stream().forEach(num -> System.out.print(num%2!=0 ? num+" ":""));
        System.out.println();
    }
    public static int pedirNumero(String mensaje){
        System.out.print(mensaje);
        return new Scanner(System.in).nextInt();
    }
}