package PrimerParcial;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class SolEj3 {
    static Map map = Map.of("1","UNO","2"
    ,"DOS","3","TRES","4","CUATRO"
    ,"5","CINCO","6","SEIS","7","SIETE"
    ,"8","OCHO","9","NUEVE","0","CERO");
    public static void main(String[] args) {
        String cadena = leerString();
        System.out.println(map.get("i"));
        cadena.chars().filter(c -> (char)c != ' ')
        .forEach(c->{
            System.out.print(
                map.get(((char)c)+" ")
            );
        });
    }
    public static String leerString(){
        System.out.print("Digite un numero: ");
        return new Scanner(System.in).nextLine();
    }
}
