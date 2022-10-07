import java.util.Scanner;
public class TaxiFare {

	public static void main(String[] args) {
		//declaration
		double fare;
		Scanner scan = new Scanner(System.in);
		
		//User input
		System.out.println("Input your fare: ");
		fare = scan.nextDouble();
		
		//Exception handling
		if(fare > 300){
			System.out.println("Fare can not exceed 300");
		}
		
		else if(fare < 0) {
			System.out.println("Error");
		}
		
		//Main algorithm
		double distCount = 0;
		
		//less than 5 km
		if(fare < 50) {
			distCount += fare/10;
		}
		
		//5km - 20 km
		else if(fare >= 50 && fare <= 170) {
			fare -= 50;
			distCount += 5;
			distCount += fare / 8;
		}
		
		//20km - 46km
		else if(fare >= 170 && fare <= 300) {
			fare -= 50;
			distCount += 5;
			
			fare -= 120;
			distCount += 15;
			
			distCount += fare / 5;
		}
		
		//output statement
		System.out.println("Total distance covered: "+distCount);

	}

}
