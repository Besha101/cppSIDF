#include <iostream>
using namespace std;




int main() {

    int num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;

    if(num2%num1==0 or num1%num2==0){
        cout<<"Multiplied"<<endl;
    }

    else cout<<"Not Multiplied"<<endl;

}
