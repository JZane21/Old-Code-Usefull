package Practica2;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.Vector;
import java.util.stream.IntStream;
public class ej7 {
    public static void main(String[] args) {
        //Normal
        /* 
        Scanner scan = new Scanner(System.in);
        int cantidad1 = scan.nextInt();
        int[] array = new int[cantidad1];
        for(int i=0;i<cantidad1;i++){
            array[i] = scan.nextInt();
            for(int j=2;j<array[i]/2+1;j++){
                if(array[i]%j==0 && j!=array[i] || array[i]<=1){
                    array[i]=0;
                    break;
                }
            }
        }
        for(int i=0;i<cantidad1;i++){
            if(array[i]!=0)System.out.print(array[i]+" ");
        }
        */
        //Funcional
        List<Integer> numeros = new ArrayList<>();
        int n = pedirNumero("Introduzca el numero de casos: ");
        IntStream.range(1, n+1).forEach(i->{
            numeros.add(pedirNumero("Introduzca un numero: "));
        });
        System.out.println("Los numero primos son: ");
        //numeros.stream().filter(i->i%2==0).forEach(i-> System.out.print(i+" "));
        numeros.stream().filter(i -> i>1 && primo(i,2)).sorted().forEach(i->System.out.print(i+" "));
        
    }
    public static boolean primo(int i, int j){
        return i%j==0 ? i==j ? true : false : primo(i,j+1);
    }
    public static int pedirNumero(String mensaje){
        System.out.print(mensaje);
        return new Scanner(System.in).nextInt();
    }
}