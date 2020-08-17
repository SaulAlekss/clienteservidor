public class Metodos{
    public Metodos(){}    
        private int suma(int n1, int n2){
            return n1 + n2;
        }
        private int resta(int n1, int n2){
            return n1 - n2;
        }
        private int multiplicacion(int n1, int n2){
            return n1 * n2;
        }
        private float division(int n1, int n2){
            float res;
            res = (float)n1/(float)n2;
            return res;
        }
    //Metodo main
public static void main(String [] args){
    Metodos op = new Metodos();
    System.out.println("La Suma es: "+ op.suma(4,5));
    System.out.println("La resta es: "+ op.resta(4,5));
    System.out.println("La multiplicacion es: "+ op.multiplicacion(4,5));
    System.out.println("La division es: "+ op.division(4,5));
    }
}