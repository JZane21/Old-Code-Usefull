package SolCalcularFactorial;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class factorial {
    public static void main(String[] args) {
        //System.out.println("factorial funcional: "+factorialFuncional(10));
        //System.out.println();
        //System.out.println(siete(100));
        List lista = new ArrayList<>();
        lista.add("h");
        lista.add("a");
        lista.add("l");
        lista.add("l");
        lista.add("o");
        System.out.println(lista.stream().filter(i -> !i.equals("a")).reduce("" , (a,b) -> ""+a+b));
        //System.out.println(lista.stream().filter(i -> ((String) i).charAt(0)=='a').collect(Collectors.toList()));

    }

    public static int sumaPares(int numero){
        return IntStream.range(1, numero+1).filter(i -> i%2==0).sum();
    }

    public static int siete(int numero){
        return (int) IntStream.range(1, numero+1).filter(i -> i%7==0).count();
    }    

    public static int par(int num){
        return num%2==0 ? num:0;
    }

    public static int f(int numero){
        return IntStream.range(1, numero+1).reduce(1, (a,b) -> a*b);
    }
    public static int multiplicar(int i){
        return i-1;
    }
    public static int factorialFuncional(int numero){
        return numero==1 ? 1 : numero*factorial1(numero-1);
    }
    public static int factorial1(int numero){
        if(numero==1){
            return 1;
        }else{
            return numero*factorial1(numero-1);
        }
    }
    public static int factorial2(int numero){
        int fac = 1;
        for(int i=1;i<=numero;i++){
            fac*=i;
        }
        return fac;
    }
}
