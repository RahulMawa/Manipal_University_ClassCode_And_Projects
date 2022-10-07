package tuitionFee;
import java.util.Scanner;

public class q2 {
	public static void main(String[] args) {
		//declaration
		float length;
		float breadth;
		float area;
		float circum;
		Scanner in = new Scanner(System.in);
		
		//Input statement
		System.out.println("Enter length of rectangle: ");
		length = in.nextFloat();

		System.out.println("Enter breadth of rectangle: ");
		breadth = in.nextFloat();
		
		//Calculation
		area = length*breadth;
		circum = (2 * (length + breadth));
		
		//Output
		System.out.println("Area is: " + area + "and Circum is: " + circum);
	}

}
