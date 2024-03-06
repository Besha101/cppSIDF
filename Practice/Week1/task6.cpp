#include <iostream>
#include <cmath>
using namespace std;




int main() {
    double g1,g2,g3,g4;
    double avg;
    cout<<"Enter 4 grades: "<<endl;
    cin>>g1>>g2>>g3>>g4;

    avg=(g1+g2+g3+g4)/4;
    avg=round(avg*100)/100;

    cout<<avg;
}
