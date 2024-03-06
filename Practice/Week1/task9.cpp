#include <iostream>
using namespace std;




int main() {
    int num1,num2;
    cout<<"Enter 2 numbers; "<<endl;
    cin>>num1>>num2;
    cout<<"Before swap: "<<num1<<" "<<num2<<endl;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    cout<<"After swap: "<<num1<<" "<<num2<<endl;

}
