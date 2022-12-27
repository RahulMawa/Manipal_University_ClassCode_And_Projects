package tuitionFee;
import java.util.Scanner;

public class q4 {
	public static void main(String[] args) {
		//Declaration
		int num;
		Scanner in = new Scanner(System.in);
		
		//User input
		System.out.println("Pls input a number: ");
		num = in.nextInt();
		
		//Algorithm
		for(int i = 2; i < num; i++) {
			if(num % i == 0) {
				System.out.println("Not prime");
				System.exit(0);
				break;
			}
		}
		
		System.out.println(num + "is a prime number");

	}

}
