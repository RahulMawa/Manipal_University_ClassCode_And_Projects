import java.util.Scanner;
public class DemoClass {

	public static void main(String[] args) {
		// print hello world program java
		System.out.println("Hello World!");
		
		//print name program from user input
		Scanner s = new Scanner(System.in);
		System.out.println("Enter yuor name" );
		String Sname = s.nextLine();
		System.out.println("Your name is: " + Sname);
	}

}
