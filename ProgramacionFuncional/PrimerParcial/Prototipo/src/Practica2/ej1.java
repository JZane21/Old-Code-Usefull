package Practica2;
import java.util.Scanner;

public class ej1{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite una cadena de texto: ");
        String cadena=scanner.nextLine();
        System.out.println("En la cadena de texto hay "+cadena
        .chars()
        .filter(letra -> vocal((char) letra))
        .count()
        +" vocales");
    }
    public static boolean vocal(char letra){
        return Character.toString(letra).equals("a") ? true : 
        Character.toString(letra).equals("e") ? true : 
        Character.toString(letra).equals("i") ? true :
        Character.toString(letra).equals("o") ? true :
        Character.toString(letra).equals("u") ? true : false;
    }
}