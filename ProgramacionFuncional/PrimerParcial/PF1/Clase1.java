import java.util.*;

public class Clase1{
    public static void main(String[] args) {
        String cadena = "Hola Mundo";
        //imperativa
        int contador=0;
        for(int i=0;i<cadena.length();i++){
            if(Character.isLowerCase(cadena.charAt(i))){
                contador++;
            }
        }
        System.out.println("La cadena tiene: "+contador+" letras minusculas");

        //Funcional                                                 clase       metodo
        //                                                          |           |
        //                                                          \/          \/
        System.out.println("La cadena tiene "+cadena.chars().filter(Character::isLowerCase).count()+" letras minsuculas");
        /*
        List<Double>precios = new ArrayList<>();
        for(int i=0;i<=10;i++){
            precios.add(Math.random());
        }
        System.out.println("El precio con IVA es: "+IVA(82,13));
        precios.forEach(System.out::println);
        Date inicio = new Date();
        Date fin = new Date();
        System.out.println(inicio.getTime());
        System.out.println("El precio total del carrito es: "+totalCarritos(precios, 10,13));
        System.out.println(fin.getTime());
    }
    public static double descuento(double precio, double descuento){
        try{
            Thread.sleep(1000);
        } catch(Exception e){

        }
        return precio-(precio*descuento/100);
        */
    }

    public static boolean esMinuscula(char Character){
        if(Character.isLowerCase(cadena.charAt(i))){
            return true;
        } else{
            return false;
        }
    }
    /*
    public static double IVA(double precio, double iva){
        return precio+(precio*iva/100);
    }
    public static double totalCarritos(List<Double> precios, double descuento,double iva){
        return precios.stream().parallel()
        .mapToDouble(precioD -> descuento(precioD,descuento))
        .map(precioI -> IVA(precioI,iva))
        .sum();
    }
    */
}

