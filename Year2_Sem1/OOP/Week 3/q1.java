package tuitionFee;
import java.util.Scanner;

public class q1 {
	public static void main(String[] args) {
		//Declaration
		/*
		 * Test Cases for voting:
		 * 1. age > 18
		 * 2. Aadhar Number / Voting id = 12 digits 
		 * 3. Nationality = Indian
		 * */
		
		//Declaration:
		String id;
		int age;
		String nationality;
		Scanner in = new Scanner(System.in);
		
		//Input
		System.out.println("Enter age: ");
		age = in.nextInt();
		System.out.println("Enter id: ");
		id = in.next();
		System.out.println("Enter nationality: ");
		nationality = in.next().toLowerCase();
		
		//Algorithm
		if(age >= 18){
			if(nationality.startsWith("indian") && id.length() == 12) {
				System.out.println("You can Vote!");
			}
		}
		else {
			System.out.println("You are not allowed to vote");
		}
		
	}
}
