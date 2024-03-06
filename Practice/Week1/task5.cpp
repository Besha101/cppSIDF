#include <iostream>
using namespace std;




int main() {
    double F,C,Fr,Cr;

    cout<<"Enter temperature in F: "<<endl;
    cin>>F;
    cout<<"Enter temperature in C: "<<endl;
    cin>>C;

    Fr=(F-32)*(5/9);
    Cr=(9/5*C)+32;

    cout<<"From F to C: "<<Fr<<endl;
    cout<<"From C to F: "<<Cr<<endl;
}
