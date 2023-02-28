package ParcialDos.POO;

public class Materia {
    private Profesor profesor;
    private String nombre;
    public String getNombre() {
        return nombre;
    }
    public Profesor getProfesor() {
        return profesor;
    }
    public void setProfesor(Profesor profesor) {
        this.profesor = profesor;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    private int creditos;
    private Parcial primerParcial;
    private Parcial segundoParcial;
    private Parcial examenFinal;
}
