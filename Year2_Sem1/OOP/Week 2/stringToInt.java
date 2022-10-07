package lab_210968031;
import java.util.Scanner;

public class stringToInt {

	public static void main(String[] args) {
		// String to Int
		//int a = 123;
		//String b = "123";
		int a;
		String b;
		
		Scanner in = new Scanner(System.in);
		System.out.println("Enter an integer: ");
		a = in.nextInt();
		
		System.out.println("Enter a number value: ");
		b = in.next();
		
		int StringToInt; // containing b but should be storing a
		String IntToString; // containing a but should be storing b
		
		
		StringToInt = Integer.valueOf(b);
		//System.out.println(++StringToInt);
		
		IntToString = String.valueOf(a);
		//System.out.println(++IntToString);
		
		System.out.println("SWAPPED");
		System.out.println("String: " + IntToString);
		System.out.println("Int: " + StringToInt);
	}

}
