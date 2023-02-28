package Pruebas;
public class Cliente{
    private String nombre;
    private String email;
    private String usuario;
    private String password;
    private Double cartera;

    public Cliente(String nombre, String email, String usuario
    , String password, Double cartera) {
        this.nombre = nombre;
        this.email = email;
        this.usuario = usuario;
        this.password = password;
        this.cartera = cartera;
    }

    public String getUsuario() {
        return usuario;
    }
    public void setUsuario(String usuario) {
        this.usuario = usuario; 
    }

    public String getPassword() {
        return password;
    }
    public void setPassword(String password) {
        this.password = password;
    }

    public Double getCartera() {
        return cartera;
    }
    public void setCartera(Double cartera) {
        this.cartera = cartera;
    }

    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getEmail() {
        return email;
    }
    public void setEmail(String email) {
        this.email = email;
    }
}
