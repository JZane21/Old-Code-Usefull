package Pruebas;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;

public class Main {
    private static MarketPlace marketPlace = new MarketPlace(null);
    public static void main(String[] args) {
        inicioApp();
    }

    public static Cliente iniciarSesion(){
        System.out.println("Nombre de Usuario:");
        System.out.println("Password:");
        String user = marketPlace.pedirDato();
        String password = marketPlace.pedirDato();
        if(marketPlace.getClientes().stream()
        .filter(i->i.getUsuario().equals(user)&&i.getPassword().equals(password)).count()==1){
            System.out.println("Bienvenido "+marketPlace.getClientes().stream()
            .filter(i->i.getUsuario().equals(user)&&i.getPassword().equals(password))
            .map(i->i.getNombre()).toList().get(0));
            return (Cliente) marketPlace.getClientes().stream()
            .filter(i->i.getUsuario().equals(user)&&i.getPassword().equals(password))
            .toArray()[0];
        }else{
            System.out.println("Vuelva a intentarlo");
            return iniciarSesion();
        }
    }

    public static void inicioApp(){
        marketPlace.setTienda(inicializarMarketPlace());
        if(marketPlace.getClientes().isEmpty()){
            marketPlace.clientesExistentes();
        }
        System.out.println("Bienvenido a KIOSKITOS.COM\n"
        +"Tiene una cuenta ya existente? (y/n or another symbol)");
        if(marketPlace.pedirDato().toLowerCase().equals("y")){
            marketPlace.setCliente(iniciarSesion());
            menu();
        } else{
            crearUsuario();
            marketPlace.setCliente(iniciarSesion());
            menu();
        }
    }

    public static List<Map<String,Producto>> inicializarMarketPlace(){
        Map<String,Producto> productosElectrodomesticos = new HashMap<>();
        productosElectrodomesticos.put("EL2011",new Producto("MacBook Pro 2022", 2999.99,10));
        productosElectrodomesticos.put("EL2194",new Producto("Computadora HP", 2000,13));
        productosElectrodomesticos.put("EL2099",new Producto("Asus Infinity", 2399.99,19));
        Map<String,Producto> productosComestibles = new HashMap<>();
        productosComestibles.put("FC3011",new Producto("Cafe con leche", 10.23, 11));
        productosComestibles.put("FC3194",new Producto("Sandwich de la Muerte", 200, 13));
        productosComestibles.put("FC3099",new Producto("Cow Boy", 49.99, 24));
        List<Map<String,Producto>> store = List.of(productosElectrodomesticos,productosComestibles);
        return store;
    }

    public static void crearUsuario(){
        System.out.println("Nombre:");
        String nombre = marketPlace.pedirDato();
        System.out.println("Email:");
        String email = registrarEmail();
        System.out.println("Usuario:");
        String usuario = marketPlace.pedirDato();
        System.out.println("Password:");
        String password = crearPassword();
        System.out.println("Cartera:");
        Double cartera = Double.parseDouble(marketPlace.pedirDato());
        Cliente nuevo = new Cliente(nombre, email, usuario, password, cartera);
        if(marketPlace.getClientes().stream().filter(i->i.getEmail().equals(email)).count()==1
        || marketPlace.getClientes().stream().filter(i->i.getUsuario().equals(usuario)).count()==1){
            System.out.println("La cuenta ya existe, intentelo de nuevo");
            crearUsuario();
        }else{
            marketPlace.getClientes().add(nuevo);
            System.out.println("Bienvenido a KIOSKITOS.COM "+nuevo.getNombre());
        }
    }

    public static String registrarEmail(){
        String correo = marketPlace.pedirDato();
        //correo.matches("[\w.]{0,25}@(gmail|upb|yahoo|hotmail|tempmail|)\.(com|edu|\w{2,3})(\W|$)")
        return correo.matches("\\w*")
        ?correo: emailIncorrecto();
    }

    public static String emailIncorrecto(){
        System.out.println("Email invalido, vuelva a intentarlo");
        return registrarEmail();
    }

    public static String crearPassword(){
        String password = marketPlace.pedirDato();
        //password.matches("(?=.[A-Z])(?=.[a-z])(?=.[$#!&/()=?¿])(?=.[0-9])[A-Za-z\d$#!&/()=?¿]{8,15}")
        return password.matches("\\w*")
        ?password: passwordIncorrecto();
    }

    public static String passwordIncorrecto(){
        System.out.println("Password Invalido, vuelva a intentarlo");
        return crearPassword();
    }

    public static void menu(){
        interfazMenu();
        char opcion = marketPlace.pedirDato().toCharArray()[0];
        switch(opcion){
            case '1':
                marketPlace.Buscador();
                menu();
                break;
            case '2':
                System.out.println("Saldo disponible:\n"+marketPlace.getCliente().getCartera());
                menu();
                break;
            case '3':
                marketPlace.agregarSaldo();
                menu();
                break;
            case '4':
                marketPlace.pedirProducto();
                menu();
                break;
            case '5':
                // List<Cliente> actualizacion = marketPlace.getClientes().stream().filter(i->!i.getUsuario()
                // .equals(marketPlace.getCliente().getUsuario())).collect(Collectors.toList());
                // marketPlace.getClientes().clear();
                // marketPlace.getClientes().addAll(actualizacion);
                // marketPlace.getClientes().add(marketPlace.getCliente());
                inicioApp();
                break;
            case '6':
                System.out.println("Saliendo del Programa");
                System.exit(0);
                break;
            default:
                System.out.println("Opcion no valida, vuelva a intentarlo");
                menu();
        }
    }

    public static void interfazMenu(){
        System.out.println("===========================");
        System.out.println("-------KIOSKITOS.COM-------");
        System.out.println("===========================");
        System.out.println("| Que desea hacer?        |");
        System.out.println("| 1. Buscar producto      |");
        System.out.println("| 2. Consultar saldo      |");
        System.out.println("| 3. Depositar Saldo      |");
        System.out.println("| 4. Comprar un producto  |");
        System.out.println("| 5. Cambiar Usuario      |");
        System.out.println("| 6. Salir                |");
        System.out.println("===========================");
    }
}