package ParcialDos.POO;

import java.sql.Date;

public class Parcial {
    private Date fechaInicial;
    public Date getFechaInicial() {
        return fechaInicial;
    }
    public void setFechaInicial(Date fechaInicial) {
        this.fechaInicial = fechaInicial;
    }
    private Date fechaFinal;
    public Date getFechaFinal() {
        return fechaFinal;
    }
    public void setFechaFinal(Date fechaFinal) {
        this.fechaFinal = fechaFinal;
    }
}
