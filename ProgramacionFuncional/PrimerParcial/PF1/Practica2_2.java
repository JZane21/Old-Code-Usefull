import java.util.*;
public class Practica2_2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
            String [] numeros = new String[3];
            String [] lenguajes = new String[3];
            for(int i=0;i<3;i++){
                lenguajes[i]=sc.next();
                numeros[i]=sc.next();
                if(numeros[i].equals("0")){
                    numeros[i]="000";
                }else if(numeros[i].length()==1){
                    numeros[i] = 00+numeros[i];
                } else if(numeros[i].length()==2){
                    numeros[i] = 0+numeros[i];
                }
            }
            String []words=new String[3];
            String espacio = "/";
            for(int i=0;i<3;i++){
                words[i] = lenguajes[i]+espacio+numeros[i];
                while(words[i].length()<18){
                    System.out.println(words[i].length());
                    words[i] = lenguajes[i]+espacio+numeros[i];
                    espacio+="/";
                }    
            }
            System.out.println("================================");
            System.out.println(words[0]);
            System.out.println(words[1]);
            System.out.println(words[2]);
            System.out.println("================================");
    }
}
