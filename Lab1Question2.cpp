#include <iostream>
#include <string>
using namespace std;

class flight{
    private:
    int flightNum;
    char dest[100];
    float dist;
    float fuel = 13.2;

    int calculate_fuel(int d){
        int f;
        if(d <= 1000){
        f = 500;
        }
        else if(d > 1000 && d <= 2000){
        f = 1100;
        }
        else{
        f = 2200;
        }

        cout << "Fuel Needed: " << f << endl;
        return f;
    }



    public:
    void information_entry(){
    cout << "Enter flight Number: " << endl;
    cin >> flightNum;

    cout << "Enter flight destination: " << endl;
    cin >> dest;

    cout << "Enter flight Distance: " << endl;
    cin >> dist;


    int distance = dist;
    int fuelNeeded = calculate_fuel(distance);
    }

    void display_info(){
    cout << "Flight Number: " << flightNum << endl;
    cout << "Fuel Left: " << fuel << endl;
    }

};



int main(){
    flight f;
    f.information_entry();
    f.display_info();
}
