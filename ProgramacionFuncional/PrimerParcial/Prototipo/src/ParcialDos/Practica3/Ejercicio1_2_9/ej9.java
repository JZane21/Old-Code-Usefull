package ParcialDos.Practica3.Ejercicio1_2_9;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.IntStream;

public class ej9 {
    public static void main(String[] args) {
        List<Character>password = new ArrayList<>();
        System.out.print("Digite un password: ");
        String date = pedirDato();
        IntStream.range(0, date.length())
        .forEach(i -> 
        password.add(date.charAt(i))
        );
        System.out.println(
            esSegura(password) ? "SI Es segura"
            : "NO es segura"
        );
    }
    public static int caracterMay(Character a){
        return a==Character.toUpperCase(a) ? 1 : 0;
    }
    public static int caracterMin(Character a){
        return a==Character.toLowerCase(a) ? 1 : 0;
    }
    public static int entero(Character a){
        return a=='0'||a=='1'||a=='2'||a=='3'||
        a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||
        a=='9' ? 1 : 0;
    }
    public static boolean esSegura(List<Character> lista){
        return lista.size()>=8 &&
        lista.stream().map(i->
        caracterMay(i)).reduce(0,(a,b)->a+b)>=1 &&
        lista.stream().map(i->
        caracterMin(i)).reduce(0,(a,b)->a+b)>=1 &&
        lista.stream().map(i->
        entero(i)).reduce(0,(a,b)->a+b)>=1;
    }
    public static String pedirDato(){
        return new Scanner(System.in)
        .nextLine();
    }
}
