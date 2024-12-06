#include<iostream>
using namespace std;

main() {

    // Question : 1;

    cout << "Question :- 1" << endl;
    int i = 0;
    while(i<=10)
    {
        cout << i<<endl;
        i++;
    };

    cout << "--------------------------------------" <<endl;



    // // Question : 2;

    cout << "Question :- 2" << endl;
    int a = 10;
    while(a>=1)
    {
        cout << a<<endl;
        a--;
    }
    cout << "--------------------------------------"<<endl;

    // // Question : 3;
    cout << "Question :- 3" << endl;
    int b,c;
    cout << "Enter a Number : ";
    cin >> b;

    c = 1;
    while(c<=b)
    {
        cout << c<<endl;
        c++; 
    }
    cout << "--------------------------------------"<<endl;

    // // Question : 4;
    cout << "Question :- 4" << endl;
    int d,e;
    cout << "Enter a Number : ";
    cin >> d;
    e = d;
    while(e>=1)
    {
        if(e%2!=0)
        {
            cout << e<<endl;
            e--;
        }
        else {
            e--;
        }
    }
    cout << "--------------------------------------"<<endl;


    // Question 5
    cout << "Question :- 5" << endl;
    int start,end,w;
    cout << "Enter a start Value : ";
    cin >> start;
    cout << "Enter a second Value : ";
    cin >> end;
    
    w  = start;
    while(w<=end)
    {
        if((w%4==0 && w%100!=0)||w%400==0)
        {
            cout << w<<endl;
            w++;
        }
        else {
            w++;
        }

    }
}