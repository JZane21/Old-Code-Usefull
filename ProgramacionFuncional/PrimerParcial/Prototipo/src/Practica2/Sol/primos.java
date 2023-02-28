package Practica2.Sol;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collector;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class primos {
    static List<Integer>enteros=Arrays.asList(1,2,3,4,5,6);
    public static void main(String[] args) {
        List listPrimos = enteros.stream()
            .filter(item -> isPrimo(item)&&item!=1)
            .collect(Collectors.toList()); 
        System.out.println(listPrimos.size());
    }
    public static boolean isPrimo(Integer numero){
        return IntStream.range(1,numero+1).filter(num ->
        numero%num==0).count()<=2;
    }
}
