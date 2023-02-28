package Practica2.Sol;

import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class ej1 {
    public static void main(String[] args) {
        String cadena = leerString().toLowerCase();
        System.out.println("La cadena tiene:"+
        cadena.chars().filter(c -> c=='a' || 
        c=='e' || c=='i' || c=='o' || c=='u').count()+" vocales");
    }
    public static String leerString(){
        System.out.print("Digite un numero: ");
        return new Scanner(System.in).nextLine();
    }
}
