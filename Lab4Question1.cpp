//LAB 4 --- PROBLEM ONE --- FACTORIAL ---------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------


#include <iostream>
using namespace std;

int fact(int x){
	if(x == 1){
		return x;
	}
	else{
		return (x * fact(x-1));
	}
}


int main(){
	
	//factorial recursion
	int num;
	int final;
	cout << "Enter a factorial number: "<< endl;
	cin >> num;
	
	//for(int i = 0; i < num; i++){
		final = fact(num);
	//}
	
	cout << "result: "<< final << endl;
	
}