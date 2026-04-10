public class Calculator
{
    public static int Add(int a, int b) => a + b;
    public static int Subtract(int a, int b) => a - b;
    public static int Multiply(int a, int b) => a * b;
    public static double Divide(int a, int b) => b != 0 ? (double)a / b : throw new DivideByZeroException();

    public static void Run()
    {
        Console.WriteLine("=== Calculator ===");
        Console.WriteLine($"10 + 3 = {Add(10, 3)}");
        Console.WriteLine($"10 - 3 = {Subtract(10, 3)}");
        Console.WriteLine($"10 * 3 = {Multiply(10, 3)}");
        Console.WriteLine($"10 / 3 = {Divide(10, 3):F2}");
    }
}
