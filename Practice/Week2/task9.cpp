#include <iostream>
using namespace std;




int main() {
    cout<<"Enter 3 sides of triangle"<<endl;
    int n1,n2,n3;

    cin>>n1>>n2>>n3;

    if(n1==n2 and n1==n3 and n2==n3) cout<<"Triangle is equilateral"<<endl;
    else if(n1!=n2 and n1!=n3 and n2!=n3) cout<<"Triangle is scalene"<<endl;
    else cout<<"Triangle is isosceles"<<endl;


}
