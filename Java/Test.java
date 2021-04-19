import java.util.Scanner;

class Test
{
	public static void main(String args[])
	{
		int num1, num2, num3;
		
		Scanner scanner = new Scanner(System.in);
		
		// taking user inputs
		System.out.print("Please Enter the First Number : ");
		num1 = scanner.nextInt();
		System.out.print("Please Enter the Second Number : ");
		num2 = scanner.nextInt();
		System.out.print("Please Enter the Third Number : ");
		num3 = scanner.nextInt();
		
		if(num1 >= num2 && num1 >= num3)
		{
			System.out.println(num1 + " is the greatest number among the three!");
		}
		else if(num2 >= num1 && num2 >= num3)
		{
			System.out.println(num2 + " is the greatest number among the three!");
		}
		else
		{
			System.out.println(num3 + " is the greatest number among the three!");
		}
		
	}
}
