package tuitionFee;
import java.util.Scanner;

public class q3 {
	public static void main(String[] args) {
		// Declaration
		int num;
		Scanner in = new Scanner(System.in);
		
		//User Input
		System.out.println("Enter a digit between 1-7: ");
		num = in.nextInt();
		
		//Algorithm
		switch (num) {
		case 1:
			System.out.println("Monday");
			System.exit(0);
			break;
			
		case 2:
			System.out.println("Tuesday");
			System.exit(0);
			break;
			
		case 3:
			System.out.println("Wednesday");
			System.exit(0);
			break;
			
		case 4:
			System.out.println("Thursday");
			System.exit(0);
			break;
			
		case 5:
			System.out.println("Friday");
			System.exit(0);
			break;
			
		case 6:
			System.out.println("Saturday");
			System.exit(0);
			break;
			
		case 7:
			System.out.println("Sunday");
			System.exit(0);
			break;
		}
	}

}
