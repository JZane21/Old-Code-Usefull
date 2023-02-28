/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package edu.upb.registroestudiantes.pfsegundoparcial;

/**
 *
 * @author vgutierrez
 */
public class Cuadrilatero {
    int alto;
    int ancho;
    int largo;

    double volumen;
    
    public Cuadrilatero(int alto, int ancho, int largo) {
        this.alto = alto;
        this.ancho = ancho;
        this.largo = largo;
    }

    @Override
    public String toString() {
        return "Cuadrilatero{" + "alto=" + alto + ", ancho=" + ancho + ", largo=" + largo + ", volumen=" + volumen + '}';
    }
            
            
}
