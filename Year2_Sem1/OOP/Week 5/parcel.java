import java.util.Scanner; 

public class Parcel { 

public 

String name; 

double id; 

double weight; 

double charge; 

  

Scanner in = new Scanner(System.in); 

//constructor 

Parcel(){ 

//default value 

charge = 32.50; 

} 

void input(){ 

System.out.println("Input customer name: "); 

name = in.next(); 

System.out.println("Input parcel id: "); 

id = in.nextDouble(); 

System.out.println("Input parcel weight: "); 

weight = in.nextDouble(); 

} 

//process charge method 

double charge(){ 

if(weight <= 2) { 

charge = 32.50; 

} 

else{ 

charge = 32.50 + (weight - 2) * 10.50; 

} 

return charge; 

} 

public static void main(String[] args) { 

// TODO Auto-generated method stub 

int numParcels = 0; 

double outCharge = 0; 

Parcel arr[]; 

System.out.println("Input number of parcels"); 

Scanner in = new Scanner(System.in); 

numParcels = in.nextInt(); 

for(int i = 0; i < numParcels; i++) { 

Parcel currParcel = new Parcel(); 

currParcel.input(); 

outCharge = currParcel.charge(); 

System.out.println("Id: " + currParcel.id + " Charge: " + currParcel.charge); 

} 

} 

} 