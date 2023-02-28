package Practica2;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.IntStream;

public class ej5 {
    public static void main(String[] args) {
        List<Integer> numeros = new ArrayList<>();
        int n = pedirNumero("Introduzca el numero de casos: ");
        IntStream.range(1, n+1).forEach(i->{
            numeros.add(pedirNumero("Introduzca un numero: "));
        });
        System.out.println("La cantidad de pares es: "+numeros
        .stream()
        .filter(num->num%2==0)
        .count());
    }
    public static int pedirNumero(String mensaje){
        System.out.print(mensaje);
        return new Scanner(System.in).nextInt();
    }
}
