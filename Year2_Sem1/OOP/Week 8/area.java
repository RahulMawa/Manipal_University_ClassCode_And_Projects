package week7;
import java.util.Scanner;

class Ar{
	float height;
}

class Triangle extends Ar{
	float base;
	float areaT;
	
	float area() {
		areaT = (float) (0.5 * height * base);
		return areaT;
	}
}

class Rectangle extends Ar{
	float width;
	float areaR;
	
	float area() {
		areaR = height * width;
		return areaR;
	}
}

public class area {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		float n = 0;
		Scanner sc = new Scanner(System.in);
		Triangle B = new Triangle();
		Rectangle C = new Rectangle();
		
		//Input values
		System.out.println("What is the height of the object: ");
		B.height = sc.nextFloat();
		C.height = B.height;
		
		System.out.println("What is the base of your triangle: ");
		B.base = sc.nextFloat();
		
		System.out.println("What is the width of your rectangle: ");
		C.width = sc.nextFloat();
		
		//Output 
		System.out.println("Areas are: \n");
		n = B.area();
		System.out.println("Triangle Area: " + n);
		
		n = C.area();
		System.out.println("Rectangle Area: " + n);
		

	}

}
