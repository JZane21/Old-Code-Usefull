package PrimerParcial;

import java.util.Scanner;
import java.util.stream.Collector;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class SolEj1 {
    public static void main(String[] args) {
        int e = leerEntero();
        while(e>1){
            System.out.println(obtenerPrimerDivisor(e));
            e = e / obtenerPrimerDivisor(e);
        }
    }
    public static int obtenerPrimerDivisor(int numero){
        return IntStream.range(2, numero+1).boxed().filter(i->numero%i==0).collect(Collectors.toList()).get(0);
    }
    public static int leerEntero(){
        System.out.print("Digite un numero: ");
        return new Scanner(System.in).nextInt();
    }
}
