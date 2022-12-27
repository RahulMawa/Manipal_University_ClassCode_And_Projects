import java.util.Scanner;
public class GreatestNumber {

	public static void main(String[] args) {
		//declaration
		int num1, num2, num3;
		Scanner sc = new Scanner(System.in);
		
		//take the three user inputs
		System.out.println("Enter the first number: ");
		num1 = sc.nextInt();
		
		System.out.println("Enter the second number: ");
		num2 = sc.nextInt();
		
		System.out.println("Enter the third number: ");
		num3 = sc.nextInt();
		
		//greatest number from three
		//num1 is greatest
		if(num1 > num2 && num1 > num3) {
			System.out.println("Greatest Number is: "+num1);
		}
		
		//num2 is greatest
		else if(num2 > num1 && num2 > num3) {
			System.out.println("Greatest Number is: "+num2);
		}
		
		//num3 is greatest
		else if(num3 > num1 && num3 > num2) {
			System.out.println("Greatest Number is: "+num3);
		}
		
		//num3 is greatest
		else if(num3 == num1 && num3 == num2) {
			System.out.println("All values are the same");
		}

	}

}
