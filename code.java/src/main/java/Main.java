import java.util.Scanner;
public class Main {
    public static int calcular(int a, int b, int x) {
        int r;
        switch (x) {
            case 1:
                r = a + b;
                break;
            case 2:
                r = a - b;
                break;
            case 3:
                r = a * b;
                break;
            case 4:
                r = a / b;  
                break;
            default:
                System.out.println("Erro: Operacao invalida.");
                return -1; 
        }
        return r;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Insira o primeiro numero: ");
        int a = scanner.nextInt();

        System.out.print("Insira o segundo numero: ");
        int b = scanner.nextInt();

        System.out.print("Qual operacao deseja realizar? (1)Soma (2)Subtracao (3)Multiplicacao (4)Divisao: ");
        int x = scanner.nextInt();

        int resultado = calcular(a, b, x);

        if (resultado != -1) {
            System.out.println("Resultado: " + resultado);
        }

        scanner.close();
    }
}
