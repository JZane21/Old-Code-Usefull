package PrimerParcial;

import java.util.Scanner;
import java.util.Vector;

public class PrimerParcial {
    private Vector <Integer> divisores = new Vector<>();
    private static Scanner scan = new Scanner(System.in);
    public static void main(String[] args) {
        PrimerParcial p = new PrimerParcial();
        
        int numero = scan.nextInt();
        scan.close();
        if(numero>1 && numero<999999){
            p.divisoresPrimos(numero);
        }else{
            System.out.println("Valor no permitido");
        }
    }
    public void divisoresPrimos(int numero){
        int i=2;
        int numeroOriginal = numero;
        do{
            if(numero%i==0){
                numero = numero/i;
                divisores.add(i);
            }else{
                i++;
            }
        }while(numero>1);
        System.out.print(numeroOriginal+" = ");
        for(int j=0;j<divisores.size();j++){
            System.out.print(divisores.get(j)+" ");
        }
        System.out.println();
    }
}
