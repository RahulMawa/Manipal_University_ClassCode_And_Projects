import java.util.Scanner;

public class RegistrationYear {

	public static void main(String[] args) {
		//declaration
		long reg;
		double year;
		Scanner s = new Scanner(System.in);
		
		//take the three user inputs
		System.out.println("Enter the first number: ");
		reg = s.nextInt();
		
		if(reg < 1000000000) {
			System.out.println("Error");
			System.exit(0);
		}
		
		reg /= 10000000;
		year = reg;
		
	
		System.out.println("Year is: 20"+year);

	}

}
