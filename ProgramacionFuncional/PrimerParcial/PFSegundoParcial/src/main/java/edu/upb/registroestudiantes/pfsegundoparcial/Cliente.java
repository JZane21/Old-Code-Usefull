/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package edu.upb.registroestudiantes.pfsegundoparcial;

import java.util.Date;

/**
 *
 * @author vgutierrez
 */
public class Cliente {
    String nombre;
    Date fechaNacimiento;
    double edad;
    
    public Cliente(String nombre, Date fechaNacimiento){
        this.nombre = nombre;
        this.fechaNacimiento = fechaNacimiento;
    }

    @Override
    public String toString() {
        return "Cliente{" + "nombre=" + nombre + ", fechaNacimiento=" + fechaNacimiento + ", edad=" + edad + '}';
    }

       
}
