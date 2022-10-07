package lab_210968031;
import java.util.Scanner;

public class conversion {

	public static void main(String[] args) {
		//converting data types:
		int a;
		double b;
		char c;
		
		byte IntToByte;
		int CharToInt;
		byte DoubleToByte;
		int DoubleToInt;
		
		
		//Input
		Scanner in = new Scanner(System.in);
		System.out.println("Enter an integer: ");
		a = in.nextInt();
		
		System.out.println("Enter a double: ");
		b = in.nextDouble();
		
		System.out.println("Enter a char: ");
		c = in.next().charAt(0);
		
		
		//output
		IntToByte = (byte) a;
		System.out.println("Int To Byte Conversion: " + IntToByte);
		
		CharToInt = (int) c;
		System.out.println("Char To Int Conversion: " + CharToInt);
		
		DoubleToByte = (byte) b;
		System.out.println("Double To Byte Conversion: " + DoubleToByte);
		
		DoubleToInt = (int) b;
		System.out.println("Double To Int Conversion: " + DoubleToInt);

	}

}
