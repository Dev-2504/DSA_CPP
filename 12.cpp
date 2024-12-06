#include <iostream>
using namespace std;

main()
{

    // Pattern 1

    cout << "Pattern :- 1" << endl;

    for(int i = 1; i <= 5; i++)
    {
    int count = 40;
        for(int j = 1; j <= i; j++)
        {
            count++;
            cout <<" " << count << " ";
        }
        cout << endl;
    }
    cout << "----------------------------------------------" << endl;
    cout << "Pattern :- 2" << endl;

    // Pattern 2

    int count = 10;

    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            count++;
            cout << " " << count << " ";
        }
        cout << endl;
    }

    cout << "----------------------------------------------"<< endl;
    cout << "Patter :- 3" << endl;

    // Pattern 3

    for (int i = 1; i <= 5; i++)
    {
        int count = 1;
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 5; j >= i; j--)
        {
            if (count == 1)
            {
                cout << count;
                count = 0;
            }
            else
            {
                cout << count;
                count = 1;
            }
        }
        cout << endl;
    }

    cout << "----------------------------------------------" << endl;
    cout << "Pattern :- 4" << endl;

    // Pattern 4

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 9; j++)
        {
            if(i == 1 && j == 5)
            {
                cout << j;
            }
            else if((i == 2) && (j == 4 || j == 5 || j ==6))
            {
                cout << j;
            }
            else if((i == 3) && (j == 3 || j == 4 || j == 5 || j == 6 || j == 7))
            {
                cout << j;
            }
            else if((i == 4) && (j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
            {
                cout << j;
            }
            else if((i == 5) && (j == 1 || j == 2 || j ==3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8 || j == 9))
            {
                cout << j;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "----------------------------------------------" << endl;
    cout << "Pattern :- 5" << endl;



    // Pattern 5

    for(int i = 1; i <= 5; i ++)
    {
        for(int k = 1; k <= i;k++)
        {
            cout << k;
        }
        for(int j = 4; j >= i; j--)
        {
            cout << " ";
        }
        for(int l = 4; l >= i; l--)
        {
            cout << " ";
        }
        for(int m = i; m >=1; m--)
        {
            cout << m;
        }
        cout << endl; 
    }

    cout << "----------------------------------------------" << endl;
    cout << "Pattern :- 6" << endl;


    // // Patterm 6

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            if(i == 1)
            {
                cout << "*";
            }
            else if(i == 2 && (j == 1 || j == 5))
            {
                cout << "*";
            }
            else if(i == 3)
            {
                cout << "*";
            }
            else if(((i == 4) || (i ==5)) && (j == 1))
            {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}