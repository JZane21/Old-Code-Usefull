import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class clase1Ej2 {
    public static void main(String[] args) {
        List<String> lista = new ArrayList<>();
        lista.add("Golang");
        lista.add("Java");
        lista.add("JavaScript");
        lista.add("Python");
        //el max encuentra el maximo del string
        String masMayusculas = lista.stream()
        .max(
            Comparator.comparingLong(clase1Ej2::minsuculas)
        ).get();
        System.out.println(masMayusculas);
    }
    public static long minsuculas(String cadena){
        return cadena.chars().filter(Character::isLowerCase).count();
    }
}
