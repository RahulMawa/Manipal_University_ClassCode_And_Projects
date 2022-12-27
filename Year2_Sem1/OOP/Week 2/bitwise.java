package lab_210968031;
import java.util.Scanner;

public class bitwise {

	public static void main(String[] args) {
		//Bitwise
		int a;
		int b;
		int sum;
		int carry, carry2;
		int counter = 0;
		
		//Input
		Scanner in = new Scanner(System.in);
		System.out.println("Enter first operand: ");
		a = in.nextInt();
		System.out.println("Enter second operand: ");
		b = in.nextInt();
		
		//ALGOrithm
		while(b != 0) { //until carry becomes zero, keep adding it to variable A
			if(b == 0 && counter == 0){
				sum = a;
				System.out.println("Sum: " + sum);
				System.exit(0);
			}
			
			//if both operands are not null
			carry = a & b; 			// Carry calculation -- for all instances where 1|1 will return 10, so that 1 to be taken
			a = a ^ b; 				//dont use or, bcz or will output 1 for 1|1
			b = carry << 1; 		// indent the carry, shift left
			
			
		}
		
		//OUtput
		sum = a;
		System.out.println("Sum is: " + sum);
		
		if(sum % 2 == 0) {
			System.out.println("Even");
		}
		else {
			System.out.println("Odd");
		}
	}
	
	
	/* PARTIALLY WORKING CODE. FIGURE OUT USING RECURSION LATER
	//carry using and so we can find instances were sum would be 10
	carry = a & b;
	
	//sum using or so we can find cases with output 0 or 1
	sum = a | b;
	
	//to indent the carry correctly
	carry = carry << 1;
	
	//to add the carry back
	carry2 = sum & carry;
	sum = sum | carry;
	*/

}
