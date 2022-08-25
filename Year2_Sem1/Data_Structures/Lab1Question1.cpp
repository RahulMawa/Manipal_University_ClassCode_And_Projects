#include <iostream>
#include <string>
using namespace std;

class EMPLOYEE{
    public:
    int Employee_Number;
    string Employee_Name;
    int DA;
    int Basic;
    int IT;
    int Net_Sal;
    int Gross_salary;
};

int grossSal(int basic, int da){
    return (basic + da);
}

int netSal(int gross, int it){
    return (gross - it);
}

int outSal(int gross, int net, double num, string name){
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Employee Number: " << num << " | Employee Name: " << name << endl;
    cout << "Gross Salary: " << gross << " | Net Salary: " << net << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    return 0;
}

int main(){
    int n;
    string inst_emp_intro = "EMP0";
    cout << "How many employees are working: " << endl;
    cin >> n;

    EMPLOYEE e[n];

    for(int i = 0; i < n; i++){
    cout << "Input the employee number: " << endl;
    cin >> e[i].Employee_Number;

    cout << "Input the employee name: " << endl;
    cin >> e[i].Employee_Name;

    cout << "Input the BASIC (in int): " << endl;
    cin >> e[i].Basic;

    cout << "Input the employee DA (in int): " << endl;
    cin >> e[i].DA;

    cout << "Input the employee IT (in int): " << endl;
    cin >> e[i].IT;

    int DA = e[i].DA;
    int BASIC = e[i].Basic;
    int IT = e[i].IT;
    int grossVar = grossSal(BASIC, DA);
    int netSalary = netSal(grossVar, IT);
    int num = e[i].Employee_Number; // employee number
    string name = e[i].Employee_Name;

    e[i].Gross_salary = grossVar;
    e[i].Net_Sal = netSalary;

    outSal(grossVar, netSalary, num, name);
    }
}