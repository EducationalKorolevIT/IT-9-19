using System;
					
public class Program
{
	public static void Main()
	{
		int a = int.Parse(Console.ReadLine());
		int c = int.Parse(Console.ReadLine());
		Console.WriteLine(a*a+c*c);
		Console.WriteLine(a*a-c*c);
		Console.WriteLine((a*a)*(c*c));
		Console.WriteLine((a*a)/(c*c));
	}
}
