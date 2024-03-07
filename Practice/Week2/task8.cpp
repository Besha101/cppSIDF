#include <iostream>
using namespace std;




int main() {
    int num1,num2,num3,max;
    cout<<"Enter 3 numbers:  "<<endl;
    cin>>num1>>num2>>num3;

    max=num1;

    if(max<num1) max=num1;
    if(max<num2) max=num2;
    if(max<num3) max=num3;

    cout<<"Maximum is: "<<max;
}
