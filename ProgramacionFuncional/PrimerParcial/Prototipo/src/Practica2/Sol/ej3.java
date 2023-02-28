package Practica2.Sol;

import java.util.Arrays;
import java.util.List;

public class ej3 {
    public static void main(String[] args) {
        List<Integer>enteros=Arrays.asList(1,2,3,4,5,6);
        System.out.println(enteros.stream().filter(i -> i%0==0));
    }
}
