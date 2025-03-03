using System;

internal class Program
{
    private static void Main(string[] args)
    {        
        Console.WriteLine("-------------");
        Console.WriteLine(" Exercício 1 ");
        Console.WriteLine("-------------");

        Console.WriteLine("");

        double pi, area, R; 

        pi = 3.14159;

        Console.WriteLine("Insira o valor do raio: ");
        R = Convert.ToDouble(Console.ReadLine(), System.Globalization.CultureInfo.InvariantCulture);

        area = pi * Math.Pow(R, 2);

        Console.WriteLine($"A = {area:F4}");

    }
}