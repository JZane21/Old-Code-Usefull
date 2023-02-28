package ParcialDos.Clases;

import java.sql.Date;
import java.time.Year;
import java.time.YearMonth;

public class Cliente {
    String nombre;
    Date fechaNacimiento;
    public Cliente(String nombre, Date fechaNacimiento){
        this.fechaNacimiento = fechaNacimiento;
        this.nombre = nombre;
    }
    public Date Edad(){
        return fechaNacimiento;
    }
}
