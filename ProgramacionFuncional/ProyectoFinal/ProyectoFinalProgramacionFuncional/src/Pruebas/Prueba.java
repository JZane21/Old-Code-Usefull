package Pruebas;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Prueba {
    public static void main(String[] args) {
        String word = pedirDato();
        System.out.println(word.matches("[(\\?=.[A-Z])(\\?=.[a-z])(\\?=.[0-9])]{8,15}"));
    }

    public static String pedirDato(){
        return new Scanner(System.in).nextLine();
    }
}
