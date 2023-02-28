package PrimerParcial;

import java.util.Scanner;

public class Ej2 {
    private static Scanner scan = new Scanner(System.in);
    public static void main(String[] args) {
        Ej2 e = new Ej2();
        int num1 = scan.nextInt();
        int num2 = scan.nextInt();
        int num3 = scan.nextInt();
        e.mcm(num1, num2, num3);
    }
    public void mcm(int num1, int num2, int num3){
        int i=2;
        int divisor=1;
        do{
            if(num1%i==0 || num2%i==0 || num3%i==0){
                if(num1%i==0){
                    num1/=i;
                }
                if(num2%i==0){
                    num2/=i;
                }
                if(num3%i==0){
                    num3/=i;
                }
                divisor *= i;
            }else{
                i++;
            }
        }while(num1>1 || num2>1 || num3>1);
        System.out.println(divisor);
    }
}
