/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package edu.upb.registroestudiantes.pfsegundoparcial;

import java.util.function.Function;

/**
 *
 * @author vgutierrez
 */
public class Estudiante{
    String nombre;
    double nota;
    
    public Estudiante(String nombre, double nota){
        this.nombre = nombre ;
        this.nota = nota;
    }

    @Override
    public String toString() {
        return "Estudiante{" + "nombre=" + nombre + ", nota=" + nota + '}';
    }
    
    
    public void aplicarFuncion(Function<Double,Double> operador){
        this.nota = operador.apply(nota);
    }
    
}
