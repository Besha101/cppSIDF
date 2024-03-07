#include <iostream>
using namespace std;


int main(){
    double salary;
    cout << "Enter your salary: \n";
    cin >> salary;

    if (salary <=10000.0){
        cout << "Your gross salary is: " << salary + (salary * 0.2) + (salary * 0.8);
    }
    else if (salary <=20000.0 ){
        cout << "Your gross salary is: " << salary + (salary * 0.25) + (salary * 0.9);
    }
    else {
        cout << "Your gross salary is: " << salary + (salary * 0.3) + (salary * 0.95);
    }

    return 0;
}