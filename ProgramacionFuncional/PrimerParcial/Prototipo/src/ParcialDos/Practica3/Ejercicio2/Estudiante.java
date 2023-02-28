package ParcialDos.Practica3.Ejercicio2;

public class Estudiante {
    String nombre;
    int nota;
    public Estudiante(String nombre, int nota){
        this.nota = nota;
        this.nombre = nombre;
    }
    public String getNombre(){
        return nombre;
    }
    public int getNota(){
        return nota;
    }
}
