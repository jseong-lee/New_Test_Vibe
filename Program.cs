int[] numbers = { 5, 3, 8, 1, 9, 2, 7, 4, 6, 10 };

Console.WriteLine("Original: " + string.Join(" ", numbers));

Array.Sort(numbers);

Console.WriteLine("Sorted:   " + string.Join(" ", numbers));
Console.WriteLine("Sum: " + numbers.Sum());
Console.WriteLine("Avg: " + numbers.Average());

Console.WriteLine();
Calculator.Run();
