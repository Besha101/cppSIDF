#include <iostream>
using namespace std;




int main() {
    int num;

    cout<<"Enter an integer"<<endl;
    cin>>num;

    if(num<0 or num>80){
        cout<<"Error"<<endl;
    }

    else if(num>0 and num <=20){
        cout<<"Number is between 0 and 20"<<endl;
    }

    else if(num>=21 and num <=50){
        cout<<"Number is between 21 and 50"<<endl;
    }

    else cout<<"Number is between 51 and 80"<<endl;

}
