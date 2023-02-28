package ParcialDos.POO;

import java.util.ArrayList;
import java.util.Date;

public class POO {
    public static void main(String[] args) {
        Persona persona1 = new Persona("Jose",new Date(),"67004903");
        System.out.println("-----Relaciones entre clases-----");
        Materia materia = new Materia();
        Parcial parcial = new Parcial();
        materia.setNombre("PF");
        parcial.setFechaFinal((java.sql.Date) new Date());

        Profesor profesor = new Profesor();
        materia.setProfesor(profesor);

        profesor.materia = new ArrayList<>();
        profesor.materia.add(materia);
        Materia m2 = new Materia();
        m2.setNombre("Automatas");
        profesor.materia.add(m2);
        System.out.println(profesor);
    }
}
