// Minimum Program

#include <iostream>
using namespace std;

main()
{

    // Minimum Program 01
    int a, b;
    cout << "Enter a value of First number :";
    cin >> a;
    cout << "Enter a value of Second numner :";
    cin >> b;
    if (a > b)
    {
        cout << "The minimum value is : " << b;
    }
    else
    {
        cout << "The minimum value is : " << a << endl;
    }

    // Netural Number Program 02

    int c;

    cout << "Enter a Number : ";
    cin >> c;

    if (c != 0)
    {
        if (c > 0)
        {
            cout << "This number is Positive" << endl;
        }
        else
        {
            cout << "This number is Negative" << endl;
        }
    }
    else
    {
        cout << "This number is Neutral" << endl;
    }

    // Average Mark 03

    int d, e, f;

    cout << "Enter math marks : ";
    cin >> d;
    cout << "Enter english marks : ";
    cin >> e;
    cout << "Enter science marks : ";
    cin >> f;

    float g = (d + e + f) / 3;

    cout << g;
}