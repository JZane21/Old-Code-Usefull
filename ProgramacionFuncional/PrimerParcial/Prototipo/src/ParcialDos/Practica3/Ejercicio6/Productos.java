package ParcialDos.Practica3.Ejercicio6;

import java.util.function.Function;
public class Productos {
    private String nombre;
    private double precio;
    public Productos(String nombre, double precio){
        this.nombre = nombre;
        this.precio = precio;
    }
    public double getPrecio(){
        return precio;
    }
    public void actualizarPrecio(Function<Double,Double> funcion){
        this.precio = funcion.apply(precio);
    }
    public void descuento(Function<Double,Double> funcion){
        this.precio = funcion.apply(precio);
    }
}
