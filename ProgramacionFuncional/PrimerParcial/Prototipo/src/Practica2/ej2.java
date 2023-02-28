package Practica2;

import java.util.Scanner;

public class ej2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite una cadena de texto: ");
        String cadena=scanner.nextLine();
        System.out.println("En la cadena de texto hay "+cadena
        .chars()
        .filter(letra -> vocal((char) letra))
        .count()
        +" consonantes");
    }
    public static boolean vocal(char letra){
        return !Character.toString(letra).equals("a") ? 
        !Character.toString(letra).equals("e") ?
        !Character.toString(letra).equals("i") ?
        !Character.toString(letra).equals("o") ?
        !Character.toString(letra).equals("u") ? 
        !Character.toString(letra).equals(" ") ? true : 
        false : false : false : false : false : false;
    }

}
