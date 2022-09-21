//LAB 4 --- PROBLEM THREE --- FIBO ---------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

//fib try 2
int fib(int x){
	if(x==1 || x==0){
		return x;
	}
	
	else{
		return (fib(x-1) + fib(x-2));
	}
}

int main(){
	int num;
	int final;
	cout << "Enter a number: "<< endl;
	cin >> num;
	
	final = fib(num);
	cout << "Fibonacci Result: " << final << endl;
	
	return 0;
}
