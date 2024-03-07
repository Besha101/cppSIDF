#include <iostream>
using namespace std;




int main(){
    char grade;
    cout << "Enter grade:  ";
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "Excellent\n";
            break;
        case 'B' :
            cout << "Great \n";
            break;
        case 'C' :
            cout << "Well done \n";
            break;
        case 'D' :
            cout << "Solid \n";
            break;
        case 'E' :
            cout << "You passed \n";
            break;
        case 'F' :
            cout << "Better try again \n";
            break;
        default:
            cout << "There is no appropriate grade.";
    }
    return 0;
}