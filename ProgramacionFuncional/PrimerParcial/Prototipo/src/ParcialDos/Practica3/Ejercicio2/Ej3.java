package ParcialDos.Practica3.Ejercicio2;

import java.util.LinkedList;
import java.util.List;
import java.util.Map;

public class Ej3 {
    public static void main(String[] args) {
        List<Estudiante> Estudiantes = List.of(
            new Estudiante("Omar", 80)
            ,new Estudiante("Luis", 40)
            ,new Estudiante("Alberto", 99));
        int sumaNotas = Estudiantes.stream().map(i->i.getNota()).reduce(0,(a,b)->a+b);
        double promedio = sumaNotas/Estudiantes.size();
        System.out.println("El promedio es: "+promedio);
    }
}
