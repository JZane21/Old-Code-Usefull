package PrimerParcial;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.IntStream;
public class Ej3 {
    public static void main(String[] args) {
        String cadena = pedirCadena();
        List<Integer> lista = new ArrayList<>();
        IntStream.range(0, cadena.length()).forEach(i -> 
            lista.add((int)cadena.charAt(i))
        );
        lista.stream().filter(i->i!=' ').forEach(i->System.out.print(imprimir(i)));;
    }
    public static String pedirCadena(){
        return new Scanner(System.in).nextLine();
    }
    public static String imprimir(int i){
        return i=='1' ? "uno"+" " :
        i=='2' ? "dos"+" " :
        i=='3' ? "tres"+" " :
        i=='4' ? "cuatro"+" ":
        i=='5' ? "cinco"+" " :
        i=='6' ? "seis"+" " :
        i=='7' ? "siete"+" " :
        i=='8' ? "ocho"+" " :
        i=='9' ? "nueve"+" " :
        "cero"+" ";
    }
}