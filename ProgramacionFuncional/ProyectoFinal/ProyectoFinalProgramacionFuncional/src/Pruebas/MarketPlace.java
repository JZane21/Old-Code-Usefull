package Pruebas;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;
import java.util.function.Function;
import java.util.stream.Collectors;

public class MarketPlace {
    private Cliente cliente;
    public Cliente getCliente() {
        return cliente;
    }
    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }

    private List<Cliente> clientes = new ArrayList<>();
    
    public List<Cliente> getClientes() {
        return clientes;
    }
    public void setClientes(List<Cliente> clientes) {
        this.clientes = clientes;
    }

    private List<Map<String, Producto>> tienda = new ArrayList<>();
    
    public MarketPlace(List<Map<String, Producto>> tienda){
        this.tienda = tienda;
    }
    
    public List<Map<String, Producto>> getTienda() {
        return tienda;
    }
    public void setTienda(List<Map<String, Producto>> tienda) {
        this.tienda = tienda;
    }

    public void agregarSaldo(){
        System.out.println("Seleccione la cantidad que desea agregar:");
        System.out.println("1: 50 Bs.\n2: 100 Bs.\n3: 200 Bs.\n4: 400 Bs.\n5: 500 Bs.\n6: Otro monto\n7: Cancelar Deposito");
        System.out.print("Escriba aqui: ");
        switch(pedirDato().toCharArray()[0]){
            case '1':
                cliente.setCartera(cliente.getCartera()+50);
                System.out.println("Deposito Exitoso");
                System.out.print("Saldo actual: "+cliente.getCartera()+"\n");
                break;
            case '2':
                cliente.setCartera(cliente.getCartera()+100);
                System.out.println("Deposito Exitoso");
                System.out.print("Saldo actual: "+cliente.getCartera()+"\n");
                break;
            case '3':
                cliente.setCartera(cliente.getCartera()+200);
                System.out.println("Deposito Exitoso");
                System.out.print("Saldo actual: "+cliente.getCartera()+"\n");
                break;
            case '4':
                cliente.setCartera(cliente.getCartera()+400);
                System.out.println("Deposito Exitoso");
                System.out.print("Saldo actual: "+cliente.getCartera()+"\n");
                break;
            case '5':
                cliente.setCartera(cliente.getCartera()+500);
                System.out.println("Deposito Exitoso");
                System.out.print("Saldo actual: "+cliente.getCartera()+"\n");
                break;
            case '6':
                System.out.print("Ecriba la cantidad que desea depositar: ");
                Double deposito = Double.parseDouble(pedirDato());
                if(deposito>0){
                    cliente.setCartera(cliente.getCartera()+deposito);
                    System.out.println("Deposito Exitoso");
                    System.out.print("Saldo actual: "+cliente.getCartera()+"\n");
                break;
                }else{
                    System.out.println("Cantidad Invalida");
                    System.out.print("Saldo actual: "+cliente.getCartera()+"\n");
                }
            default:
                System.out.print("Saldo actual: "+cliente.getCartera()+"\n");
                break;
        }
    }

    public void clientesExistentes(){
        clientes.add(new Cliente("Mateo Michel", "mateo777@gmail.com", "MateoM", "123", 2029.0));
        clientes.add(new Cliente("Jose Carrasco", "jsce2021@gmail.com", "SamJ", "Jose1234", 1000.0));
    }
    
    public void Buscador(){
        System.out.println("Desea filtrar una categoria de busqueda? (y/n or another symbol)");
        String parametro;
        if(pedirDato().toLowerCase().equals("y")){
            parametro = agregarParametro();
        }else{
            parametro = "";
        }
        System.out.print("Que es lo que busca?\nEscribalo aqui: ");
        resultadosBusqueda(pedirDato(),parametro);
    }
    private Map<String,String> tipoProducto = new HashMap<>();
    private void agregarTipoProducto(){
        tipoProducto.put("EL", "Buscar electrodomesticos");
        tipoProducto.put("FC", "Buscar alimentos o consumibles");
        tipoProducto.put("LH", "Buscar limpieza e higiene");
        tipoProducto.put("RC", "Buscar ropa y calzados");
        tipoProducto.put("JJ", "Buscar juguetes y juegos");
        tipoProducto.put("HC", "Buscar herramientas y carpinteria");
        tipoProducto.put("ED", "Buscar libros, musica y peliculas");
        tipoProducto.put("ME", "Buscar material educativo");
    }
    private String agregarParametro(){
        agregarTipoProducto();
        System.out.println("Seleccione una opcion:");
        tipoProducto.entrySet().forEach(i->System.out.println(i.getKey()+": "+i.getValue()));
        System.out.print("Escriba aqui: ");
        String opcion = pedirDato();
        List<String> opciones = new ArrayList<>();
        tipoProducto.entrySet().forEach(i->opciones.add(i.getValue()));
        if(opciones.stream().filter(i->i.equals(opcion)).count()==1){
            return opcion;
        }
        else{
            System.out.println("Opcion no valida");
            return "";
        }
    }
    private void resultadosBusqueda(String objeto,String parametro){
        tienda.stream().forEach(i->busqueda(objeto, i, parametro));
    }
    private void busqueda(String palabraClave,Map<String, Producto> mapa,String parametro){
        List<String>cadenas = new ArrayList<>();
        List<String>cadenasAux = new ArrayList<>();
        Map<String, Producto> resultados = new HashMap<>();

        mapa.entrySet().forEach(aux->cadenas.add(aux.getValue().getNombre()));
        List<String>cadenas3 = (List<String>) cadenas.stream().filter(aux->aux.toLowerCase()
        .contains(palabraClave.toLowerCase())).collect(Collectors.toList());
        
        mapa.entrySet().forEach(aux->cadenasAux.add(aux.getKey()));
        List<String>cadenas2 = (List<String>) cadenasAux.stream().filter(aux->aux
        .contains(parametro)).collect(Collectors.toList());
        
        mapa.entrySet().forEach(aux->resultados
        .put((cadenas3).contains(aux.getValue().getNombre())&&
        (cadenas2).contains(aux.getKey())?aux.getKey():null
        ,cadenas3.contains(aux.getValue().getNombre())&&
        (cadenas2).contains(aux.getKey())?aux.getValue():null));

        resultados.entrySet().forEach(i->System.out.print(i.getValue()!=null
        ?i.getKey()+": "+i.getValue().getNombre()+"\n":""));
    }
    private Function<Double,Double> aplicarDescuento(String specialWord){
        switch(specialWord){
            case "KD02":
                System.out.println("Se aplico un descuento del 30%");
                Function<Double,Double> descuento = x -> x-x*0.3;
                return descuento;
            case "CODIGO":
                System.out.println("Se aplico un descuento de Bs. 5");
                Function<Double,Double> descuento2 = x -> x-5;
                return descuento2;
            default:
                System.out.println("Codigo no existente");
                Function<Double,Double> loMismo = x -> x;
                return loMismo;
        }
    }

    public void pedirProducto(){
        System.out.print("Digite el codigo del producto que desea comprar: ");
        String number = pedirDato();
        System.out.println("Se selecciono el producto:");
        tienda.stream().filter(i->i.keySet().contains(number))
        .forEach(i->i.get(number).mostrarDatosProducto());

        if(tienda.stream().filter(i->i.keySet().contains(number))
        .map(i->i.get(number).getCantidad()).toList().get(0)>0){
            System.out.println("Ingrese la cantidad a comprar:");
            realizarCompra(Integer.parseInt(pedirDato()), number);
        }else{
            System.out.println("Ya no hay mas items para comprar");
        }
    }
    private void realizarCompra(int cantidad,String code){
        if(cantidad<=tienda.stream().filter(i->i.keySet().contains(code))
        .map(i->i.get(code).getCantidad()).toList().get(0)){

            System.out.println("Si tiene un codigo de descuento valido\n"
            +"insertarlo:");
            Double precio = aplicarDescuento(pedirDato()).apply(tienda.stream()
            .filter(i->i.keySet().contains(code)).map(i->i.get(code).getPrecio())
            .toList().get(0)*cantidad);
            System.out.println("Precio: "+precio);

            if(cliente.getCartera()>=precio){
                System.out.println("Saldo disponible: "+cliente.getCartera());
                System.out.println("Realizar compra? (y/n or another symbol)");
                if(pedirDato().toLowerCase().equals("y")){
                    System.out.println("Compra exitosa");
                    cliente.setCartera(cliente.getCartera()-precio);
                    tienda.stream().filter(i->i.keySet().contains(code))
                    .forEach(i->i.get(code).setCantidad(i.get(code).getCantidad()-cantidad));
                    System.out.println("Saldo restante: "+cliente.getCartera());
                }else{
                    System.out.println("Compra cancelada");
                }
            }else{
                System.out.println("No tiene saldo suficiente");
            }

        }else{
            System.out.println("No puede pedir esta cantidad");
        }
        
    }
    public String pedirDato(){
        return new Scanner(System.in).nextLine();
    }
}
