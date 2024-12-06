#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 5; j >= i; j--)
        {
            cout << j;
        }
        cout << endl;
    }


    //pattern 2
    cout << "---------------------------------" << endl;
    cout << "patter :- 2" << endl;

    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for(int k = 4; k >= i; k--)
        {
            cout << " ";
        }
        for(int k = 4; k >= i; k--)
        {
            cout << " ";
        }
         for(int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    cout << "---------------------------------" << endl;
    cout << "pattern :- 3" << endl;

    // pattern 3
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    for(int i = 2; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}