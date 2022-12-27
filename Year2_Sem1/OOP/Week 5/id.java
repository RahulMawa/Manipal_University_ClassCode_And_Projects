import java.util.Scanner; 


/* 

* SCENARIO: 

* Every employee has a default salary of 15000 

*  

* Make an array of id and salary in the class 

*  

* Some employees have different salary, so have parameterized  

* constructor to get the id and then edit their salary 

*  

* Print the id and salary contents from the array 

*  

* Search for an id in the array 

*  

* Compare method to compare the salaries and print which have same 

* */ 

  

public class id { 

    public 

    String name; 

    int id; 

    int sal; 

    int arr[]; 

    Scanner in = new Scanner(System.in); 

  

id(){ 

    //default salary of 15k  

    sal = 15000; 

    System.out.println("Input name: "); 

    name = in.next(); 

    System.out.println("Input id: "); 

    id = in.nextInt(); 

} 

id(int id, int sal){ 

    this.id = id; 

    this.sal = sal; 

    //arr.add(id); 

} 

public void print(){ 

    for(int i = 0; i < arr.length; i+=2) { 

    System.out.println("Id: " + arr[i]); 

    System.out.println("Sal: " + arr[i+1]); 

} 

} 

public void searchId(){ 

    int currId; 

    int flag = 0; 

    System.out.println("Input Search id: "); 

    currId = in.nextInt(); 

    for(int i = 0; i < arr.length; i+=2) { 

        if(currId == arr[i]) { 

        System.out.println("ID found."); 

        System.out.println("Id: " + arr[i]); 

        System.out.println("Sal: " + arr[i+1]); 

        flag = 1; 

        break; 

    } 

} 


    if(flag == 0) { 

    System.out.println("Employee ID not found."); 

    } 

} 


public void compSal()){ 

    int currId1, currId2, currSal1, currSal2; 

    int flag = 0; 

    System.out.println("Input Compare Salary id1: "); 

    currId1 = in.nextInt(); 

    System.out.println("Input Compare Salary id1: "); 

    currId2 = in.nextInt(); 

    for(int i = 0; i < arr.length; i+=2) { 

        if(currId1 == arr[i]) { 

            System.out.println("ID1 found."); 

            System.out.println("Sal1: " + arr[i+1]); 

            currSal1 = arr[i+1]; 

            flag = 1; 

            break; 

        } 

        if(currId2 == arr[i]) { 

            System.out.println("ID2 found."); 

            System.out.println("Sal2: " + arr[i+1]); 

            currSal2 = arr[i+1]; 

            flag = 1; 

            break; 

        } 

} 


//Input code for salary compare, which is greater 

if(flag == 0) { 

System.out.println("Employee ID not found."); 

} 

} 

public static void main(String[] args) { 

// TODO Auto-generated method stub 

Scanner in = new Scanner(System.in); 

int totEmp; 

System.out.println("Input number of employeesL: "); 

totEmp = in.nextInt(); 

for(int i = 0; i < totEmp; i++) { 

id currEmp = new id(); 

System.out.println("Input sal: "); 

currEmp.sal = in.nextInt(); 

} 

} 

  

} 
