package ParcialDos.Clases;

import java.util.function.Function;

public class Estudiante {
    String nombre;
    double nota;
    public Estudiante(String nombre, double nota){
        this.nombre = nombre;
        this.nota = nota;
    }
    public void aplicarFuncion(Function<Double,Double> funcion){
        this.nota = funcion.apply(nota-10);
    }
}
