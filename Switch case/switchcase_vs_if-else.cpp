#include <iostream>

using namespace std;

int main() {
    
    char grade;
    cout << "Enter your grade" << endl;
    cin >> grade;

    // if (grade == 'A') {
    //     cout << "your marks will be in range of 90 to 100" << endl;
    // } 
    // else if (grade == 'B') {
    //     cout << "your marks will be in range of 80 to 90" << endl;
    // } 
    // else if (grade == 'C') {
    //     cout << "your marks will be in range of 70 to 80" << endl;
    // } 
    // else if (grade == 'D') {
    //     cout << "your marks will be in range of 60 to 100" << endl;
    // } 
    // else {
    //     cout << "your marks will be in range of 0 to 60" << endl;
    // }
// #####ITS-TEMPLATE#######
    // switch (expression)
    // {
    // case constant expression:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }


    switch (grade)
    {
    case 'A':cout << "your marks will be in range of 90 to 100" << endl;
        break;
    case 'B':cout << "your marks will be in range of 80 to 90" << endl;
        break;
    case 'C':cout << "your marks will be in range of 70 to 80" << endl;
        break;    
    case 'D':cout << "your marks will be in range of 60 to 70" << endl;
        break;
    default: cout << "your marks will be in range of 0 to 60" << endl;
        break;
    }

    //switch case is more readable,but remember to use break, and in cases try to keep constant values and not to compare them.

    return 0;
}