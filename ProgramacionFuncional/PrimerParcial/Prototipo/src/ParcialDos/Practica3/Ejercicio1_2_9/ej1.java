package ParcialDos.Practica3.Ejercicio1_2_9;




import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
import java.util.stream.IntStream;

public class ej1 {
    public static void main(String[] args) {
        List<Integer>numeros=new ArrayList<>();
        List<String>valores=new ArrayList<>();
        IntStream.range(1, ingresarDato()+1)
        .forEach(i->{
            numeros.add(ingresarDato());
        });
        numeros.stream().map(i -> esNumero(i))
        .forEach(i->valores.add(i));
        System.out.println(valores);;
    }
    public static String esNumero(int i){
        return i==1 ? "UNO" :
            i==2 ? "DOS" :
            i==3 ? "TRES" :
            i==4 ? "CUATRO" :
            i==5 ? "CINCO" :
            i==6 ? "SEIS" :
            i==7 ? "SIETE" :
            i==8 ? "OCHO" :
            i==9 ? "NUEVE" :
            "CERO";
    }
    public static int ingresarDato(){
        return new Scanner(System.in).nextInt();
    }
}
