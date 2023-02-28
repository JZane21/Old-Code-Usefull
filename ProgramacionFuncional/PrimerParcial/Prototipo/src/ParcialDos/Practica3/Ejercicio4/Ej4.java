package ParcialDos.Practica3.Ejercicio4;

import java.util.ArrayList;
import java.util.List;

public class Ej4 {
    public static void main(String[] args) {
        List<Pelicula>pelicula=List.of(
        new Pelicula("Among Us", 4),
        new Pelicula("Lord of the Rings", 5),
        new Pelicula("Saw 3D", 2),
        new Pelicula("Kick Ass", 3),
        new Pelicula("Spiderman-No Way Home", 5)
        );
        List<Pelicula>peliculasFamosas=new ArrayList<>();
        pelicula.stream().map(i->popularidad(i)).filter(i->i!=null)
        .forEach(i->peliculasFamosas.add(i));
        System.out.println("Las peliculas famosas son:");
        peliculasFamosas.forEach(i->System.out.println(i.getNombre()));
    }
    public static Pelicula popularidad(Pelicula movie){
        return movie.getRaiting()>=4?movie:null;
    }
}
