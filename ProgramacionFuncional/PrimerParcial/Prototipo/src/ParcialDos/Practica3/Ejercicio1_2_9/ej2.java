package ParcialDos.Practica3.Ejercicio1_2_9;



import java.util.ArrayList;
import java.util.List;

public class ej2 {
    public static void main(String[] args) {
        List<Estudiante> estudiantes = 
        List.of(new Estudiante("Luis",90)
        ,new Estudiante("Jose", 50)
        ,new Estudiante("Ariel", 100));
        List<Estudiante> aprobados=new ArrayList<>();

        System.out.println(
        "Los estudiantes aprobados son:");
        
        estudiantes.stream().map(i->
        i.getNota()>=51 ? i:null).filter(i->i!=null)
        .forEach(i->aprobados.add(i));
        aprobados.forEach(i->System.out.print(i.getNombre()+" "));
        System.out.println();
    }
    public static void agregarEstudiante(List<Estudiante> lista
    ,Estudiante estudiante){
        lista.add(estudiante);
    }
}