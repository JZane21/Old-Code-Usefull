package ParcialDos.Practica3.Ejercicio6;
public class Ej6 {
    public static void main(String[] args) {
        Productos p = new Productos("Pan",11);
        p.descuento((x) -> x-x*0.1);
        System.out.println(p.getPrecio());
        p.actualizarPrecio(i->(double)Math.round(i));
        System.out.println((int)p.getPrecio());
    }
}
