#include <iostream>
using namespace std;




int main() {
    int h,m,s;
    cout<<"Enter hours and mins: "<<endl;
    cin>>h>>m;

    s=h*60*60+m*60;

    cout<<"Seconds: "<<s<<endl;
}
