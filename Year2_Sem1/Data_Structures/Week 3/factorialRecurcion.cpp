#include <iostream>
using namespace std;

int fact(int n){
    if(n <= 1){
        return 1;
    }

    return n * fact(n-1);
}
int main(){
    int number;
    int factorial;

    cout << "Enter the number: " << endl;
    cin >> number;

    factorial = fact(number);
    cout << factorial;



}
