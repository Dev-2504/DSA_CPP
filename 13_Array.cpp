#include <iostream>
using namespace std;

main()
{
    // First Question

    int n,index,value;
    cout << "Enter Array Size : ";
    cin >> n;

    for(int i = 0; i <= n-1; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> value;
    }

    cout << "Array Length : "<< n;

    // Second Question

    int n,index,value;
    float avg = 0;
    cout << "Enter Array Size : ";
    cin >> n;

    for(int i = 0; i <= n-1; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> value;
        avg = avg + value;
    }

    cout << "Array Average : "<< avg / n;


    // Third Question

    int n1, value1, value2;
    cout << "Enter Array Length : ";
    cin >> n1;

    int a[n1];

    for (int i = 0; i < n1; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> value1;
        a[i] = value1;
    }

    // Second Array


    int b[n1];

    for (int i = 0; i < n1; i++)
    {
        cout << "b[" << i << "] = ";
        cin >> value2;
        b[i] = value2;
    }

    int c[n1];

    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i] + b[i];
    }

    for (int i = 0; i < n1; i++)
    {
        cout << c[i] << " ";
    }
}
