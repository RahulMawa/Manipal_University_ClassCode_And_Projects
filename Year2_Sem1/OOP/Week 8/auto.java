package week7;
import java.util.Scanner;

class Vehicle{
	int tyres;
	float speed;
	int safety; // safety ranking 1-3 .. bikes are 1, cars are 2, planes are 3
	
	void showSpeed() {
		System.out.println("Speed of the vehicle: " + speed);
	}
}

class Car extends Vehicle{
	String brand;
	Boolean sportsCar;	
	
	void setDefault() {
		tyres = 4;
		safety = 2;
	}
	
}

public class auto {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int f;
		Car hondaOne = new Car();
		hondaOne.setDefault();
		
		//Input values
		System.out.println("Input Car Brand: ");
		hondaOne.brand = sc.next();
		
		System.out.println("Is it a sportscar (1/0): ");
		f = sc.nextInt();
		if(f==0) {
			hondaOne.sportsCar = false;
		}
		else {
			hondaOne.sportsCar = true;
		}
		
		System.out.println("Input speed of vehicle: ");
		hondaOne.speed = sc.nextFloat();
		
		System.out.println("Brand: " + hondaOne.brand + "; Tyres: " + hondaOne.tyres + "; Speed: " + hondaOne.speed);
		
	}

}
