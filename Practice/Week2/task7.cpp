#include <iostream>
using namespace std;




int main() {

    double numC,numAC,at;

    cout<<"Enter number of classes:  ";
    cin>>numC;
    cout<<"Enter number of attended  classes:  ";
    cin>>numAC;

    at=numAC/numC*100;

    if(at<75){
        cout<<"\nYou cant enter exam, your attendence is: "<<at<<"%"<<endl;
    }
    else cout<<"\nYou are eligible to take a exam"<<endl;


}
