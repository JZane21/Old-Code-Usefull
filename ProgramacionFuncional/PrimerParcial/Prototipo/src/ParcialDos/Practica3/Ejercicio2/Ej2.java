package ParcialDos.Practica3.Ejercicio2;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.function.Function;
import java.util.stream.Collector;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class Ej2 {
    public static void main(String[] args) {
        List<Estudiante> Estudiantes = List.of(
            new Estudiante("Omar", 80)
            ,new Estudiante("Luis", 40)
            ,new Estudiante("Alberto", 99));
        List<Estudiante> aprobados = new LinkedList<>();
        Estudiantes.stream().map(i->i.getNota()>=51?
        Estudiantes.get(Estudiantes.indexOf(i)) 
        :null).filter(i->i!=null)
        .forEach(i->aprobados.add(i));
        aprobados.stream().forEach(i->System.out.print(i.getNombre()+" "));
    }
}
