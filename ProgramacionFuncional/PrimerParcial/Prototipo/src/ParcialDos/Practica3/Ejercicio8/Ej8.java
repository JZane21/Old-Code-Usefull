/*package ParcialDos.Practica3.Ejercicio8;

import java.util.Scanner;

public class Ej8 {
    public static void main(String[] args) {
        String cadena = p();
        cadena.chars().map(i->i=cambiar((String)i));
    }
    public static Character cambiar(String letra){
        return !letra.equals("á")?'a':
        !letra.equals("é")?'e':
        !letra.equals("í")?'i':
        !letra.equals("ó")?'o':
        !letra.equals("ú")?'u':
        ' '; 
        
    }
    public static String p(){
        return new Scanner(System.in).nextLine();
    }
}
*/