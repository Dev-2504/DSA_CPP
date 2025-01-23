#include<iostream>
using namespace std;

void Factorial(int a)
{
    int b = 1;
    for(int i = 1; i <= a; i++)
    {
        b = b * i;
    }
    cout << b;
}

int main()
{
    int n;
    cout << "Enter a Number : " << endl;
    cin >> n;
    Factorial(n);
    return 0;
}