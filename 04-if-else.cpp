#include<iostream>
using namespace std;

main() {


// First Program

    int a;
    cout << "Enter a Value : ";
    cin >> a;

    if(a%2==0) {
        cout << "Value is Even" << endl;
    }
    else {
        cout << "Value is Odd" << endl;
    }

    cout << "----------------------------------------------" <<endl;

    // Second Program

    int b;

    cout << "Enter a Value in 1 to 100 : ";
    cin >> b;

    if(b >= 1  && b <= 60)
    {
        cout << "Grade : F" << endl;
    }
    else if(b >=60 && b <= 69) {
        cout << "Grade : D" << endl;
    }
    else if(b >= 70 && b <= 79) {
        cout << "Grade : C" << endl;
    }
    else if (b >= 80 && b <= 89) {
        cout << "Grade : B" << endl;
    }
    else if(b >= 90 && b <= 100) {
        cout << "Grade : A" << endl;
    }
    else {
        cout << "Unvalid Number are given" << endl;
    }

    cout << "----------------------------------------------" << endl;

    // Program 3

    int c;

    cout << "Enter a Age : ";
    cin >> c;

    if(c >= 18) {
        cout << "Adult" << endl;
    }
    else {
        cout << "Not Adult" << endl;
    }

    cout << "----------------------------------------------" << endl;


// Program 4


    int d;
    cout << "Enter a Year : ";
    cin >> d;

    if((d % 4 == 0 && d % 100 != 0) || (d % 400 == 0)) {
        cout << "Leap Year" << endl;
    }
    else {
        cout << "Not Leap Year" << endl;
    }
}