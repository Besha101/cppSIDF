#include <iostream>
using namespace std;




int main() {
    int a,b,temp;
    cout<<"Enter two variables: "<<endl;
    cin>>a>>b;

    cout<<"Variables before change: "<<a<<" "<<b<<endl;

    temp=a;
    a=b;
    b=temp;

    cout<<"Variables after change: "<<a<<" "<<b<<endl;



}
