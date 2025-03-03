using System;

internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("-------------");
        Console.WriteLine(" Exercício 2 ");
        Console.WriteLine("-------------");

        Console.WriteLine("");

        int A, B, C, D, dif;

        Console.WriteLine("Insira o valor de A: ");
        A = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Insira o valor de B: ");
        B = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Insira o valor de C: ");
        C = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Insira o valor de D: ");
        D = Convert.ToInt32(Console.ReadLine());

        dif = (A * B) - (C * D);

        Console.WriteLine($"DIFERENCA = {dif}");

    }
}