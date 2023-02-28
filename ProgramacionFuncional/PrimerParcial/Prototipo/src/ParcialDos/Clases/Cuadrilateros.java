package ParcialDos.Clases;

public class Cuadrilateros {
    int alto,largo,ancho;
    public Cuadrilateros(int alto,int largo,int ancho){
        this.alto = alto;
        this.largo = largo;
        this.ancho = ancho;
    }
    public int getV(){
        return alto*largo*ancho;
    }

}
