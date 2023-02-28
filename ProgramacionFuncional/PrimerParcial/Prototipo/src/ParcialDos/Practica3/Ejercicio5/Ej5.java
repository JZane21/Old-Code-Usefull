package ParcialDos.Practica3.Ejercicio5;

import java.util.ArrayList;
import java.util.List;

public class Ej5 {
    public static void main(String[] args) {
        List<String> cadenas = List.of(
            "Shazam","HolaMundo",
            "El libro","Spiderman");
        List<String> cadenasMV = new ArrayList<>();
        cadenas.stream().filter(i->i.toLowerCase().chars()
        .filter(letra -> vocal((char) letra)).count()>=3)
        .forEach(i->cadenasMV.add(i));

        System.out.println("Las cadenas con mas de 3 vocales son:");
        cadenasMV.forEach(i->System.out.println(i));
    }
    public static boolean vocal(char letra){
        return Character.toString(letra).equals("a") ? true : 
        Character.toString(letra).equals("e") ? true : 
        Character.toString(letra).equals("i") ? true :
        Character.toString(letra).equals("o") ? true :
        Character.toString(letra).equals("u") ? true : false;
    }
}
