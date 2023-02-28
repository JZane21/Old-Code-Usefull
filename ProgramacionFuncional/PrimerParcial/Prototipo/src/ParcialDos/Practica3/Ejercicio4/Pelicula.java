package ParcialDos.Practica3.Ejercicio4;

public class Pelicula {
    String nombre;
    int raiting;
    public Pelicula(String nombre,int raiting){
        this.nombre=nombre;
        this.raiting=raiting;
    }
    public String getNombre(){
        return nombre;
    }
    public int getRaiting(){
        return raiting;
    }
}
