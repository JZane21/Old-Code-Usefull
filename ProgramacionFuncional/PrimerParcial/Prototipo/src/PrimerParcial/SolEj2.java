package PrimerParcial;

import java.util.Scanner;

public class SolEj2 {
    public static void main(String[] args) {
        int a = leerEntero();
        int b = leerEntero();
        int c = leerEntero();

        int max = 0;
        if(b < a && c < a){
            max=a;
        }else if(c < b && a < b){
            max=b;
        }else{
            max=c;
        }
        System.out.println("Maximo: "+max);

        int i = max;
        while(i%a!=0 || i%b!=0 || i%c!=0){
            i = i+1;
        }
        System.out.println("mcm: "+i);
    }
    public static int leerEntero(){
        System.out.print("Digite un numero: ");
        return new Scanner(System.in).nextInt();
    }
}