//LAB 4 --- PROBLEM TWO --- GCD ---------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int gcd(int x, int y){
	int mod;
	if(x==0){
		return y;
	}
	
	else if(y==0){
		return x;
	}
	
	else{
		mod = x % y;
		return gcd(y, mod);
	}
}

int main(){
	int numA;
	int numB;
	int final;
	cout << "enter a number A: " << endl;
	cin >> numA;
	
	cout << "enter a number B: " << endl;
	cin >> numB;
	
	final = gcd(numA, numB);
	cout << "result: " << final << endl;
	
	return 0;
}