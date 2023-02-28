package ParcialDos.POO;

import java.sql.Date;

public class Persona {
    private String nombre;
    private Date fechaNacimiento;
    private String telefono;

    public Persona(String nombre,java.util.Date date,String telefono){
        this.nombre = nombre;
        this.fechaNacimiento = (Date) date;
        this.telefono = telefono;
    }
    public void cambiarTelefono(String telefono){
        this.telefono = telefono;
    }
    
}
