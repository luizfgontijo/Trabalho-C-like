using System;
class Program
{
    static int Calcular(int a, int b, int x)
    {
        int r;
        switch (x)
        {
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
                Console.WriteLine("Erro: Operacao invalida.");
                return -1; // Indicar erro
        }
        return r;
    }

    static void Main()
    {
        Console.Write("Insira o primeiro numero: ");
        int a = int.Parse(Console.ReadLine());

        Console.Write("Insira o segundo numero: ");
        int b = int.Parse(Console.ReadLine());

        Console.Write("Qual operacao deseja realizar? (1)Soma (2)Subtracao (3)Multiplicacao (4)Divisao: ");
        int x = int.Parse(Console.ReadLine());

        int resultado = Calcular(a, b, x);

        if (resultado != -1)
        {
            Console.WriteLine("Resultado: " + resultado);
        }
    }
}
