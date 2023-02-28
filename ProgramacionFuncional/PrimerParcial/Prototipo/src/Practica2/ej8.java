package Practica2;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.IntStream;

public class ej8 {
    public static void main(String[] args) {
        List<Integer> numeros = new ArrayList<>();
        int n = pedirNumero("Introduzca el numero de casos: ");
        IntStream.range(1, n+1).forEach(i->{
            numeros.add(pedirNumero("Introduzca un numero: "));
        });
        System.out.println("La cantidad de numeros primos es: "+
        numeros.stream().filter(i -> i>1 && primo(i,2)).count());
    }
    public static boolean primo(int i, int j){
        return i%j==0 ? i==j ? true : false : primo(i,j+1);
    }
    public static int pedirNumero(String mensaje){
        System.out.print(mensaje);
        return new Scanner(System.in).nextInt();
    }
}
