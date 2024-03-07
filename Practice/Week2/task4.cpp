#include <iostream>
using namespace std;




int main() {
    string username,password;

    cout<<"Enter username:  "<<endl;
    cin>>username;
    cout<<"Enter password:  "<<endl;
    cin>>password;

    if(username=="testuser" and password=="Test124"){
        cout<<"Credentials are valid"<<endl;
    }

    else cout<<"Credentials are not valid"<<endl;

}
