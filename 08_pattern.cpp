#include <iostream>
using namespace std;

main()
{

    // Question : 1

    cout << "Pattern :- 1" << endl;

    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
        {
            cout << j;
        }
        cout << endl;
    }


    cout << "----------------------------------" << endl;
    // Question : 2


cout << "Pattern :- 2" << endl;

for(int i = 5; i >= 1; i--)
{
    for(int j = i; j <= 5; j++)
    {
        cout << j;
    }
    cout << endl;
}
    cout << "----------------------------------" << endl;


    // Question : 3

    cout << "Question :- 3" << endl;

    for(int i = 5;i>=1;i--)
    {
        for(int j = 5;j>i;j--)
        {
            cout << i;
        }
        cout <<i;
        cout << endl;
    }
    cout << "----------------------------------" << endl;



    // Question : 4

    cout << "Question :- 4" << endl;

    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            cout <<j;
        }
        cout <<endl;
    }
    cout << "----------------------------------" << endl;

    // Question : 5

cout << "Question :- 5" << endl;
    int count = 0;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count + 1;
        }
        count++;
        cout << endl;
    }
}