#include<iostream>
using namespace std;

main() {



    // First Question
    int a,b,c;
    cout << "Enter a value of the first number : ";
    cin >> a;
    cout << "Enter a value of second number : ";
    cin >> b;
    cout << "Enter a value of third number : ";
    cin >> c;

(a<b)
?((a<c)?cout << "A"<<endl : cout << "C"<<endl)
:((b<c)?cout << "B"<<endl : cout << "C"<<endl);



// Second Question
int day,second;
cout << "Press 1for English"<<endl;
cout << "Press 2 for Hindi"<<endl;
cout << "Press 3 for Gujarati"<<endl;

cout << "Enter a Value : ";
cin >> day;

switch(day)
{
    case 1 : 
    cout << "Your Language Choice is English" << endl;

    cout << "Press 1 for Internet Recharge"<<endl;
    cout << "Press 2 for Top-up Recharge"<<endl;
    cout << "Press 3 for Special Recharge"<<endl;

    cout << "Enter a second value : "<<endl;
    cin >> second;
    switch(second)
    {
        case 1:
        cout << "Internet Recharge" <<endl;
        break;
    
        case 2:
        cout << "Top-up Recharge"<<endl;
        break;

        case 3:
        cout << "Special Recharge"<<endl;
        break;
    }
    break;
    
    case 2:
    cout << "You Languege Choice Is Hindi"<<endl;
    cout << "Press 1 for Internet Recharge"<<endl;
    cout << "Press 2 for Top-up Recharge"<<endl;
    cout << "Press 3 for Special Recharge"<<endl;

    cout << "Enter a second value"<<endl;
    cin >> second;
    switch(second)
    {
        case 1:
        cout << "Internet Recharge"<<endl;
        break;
        
        case 2:
        cout << "Top-up Recharge"<<endl;
        break;

        case 3:
        cout << "Special Recharge"<<endl;
        break;
    }
    break;

    case 3:
    cout << "Your Language Choice Is Gujarati"<<endl;
    cout << "Press 1 for Internet Recharge"<<endl;
    cout << "Press 2 for Top-up Recharge"<<endl;
    cout << "Press 3 for Special Recharge"<<endl;

    cout << "Enter a second value"<<endl;
    cin >> second;
    switch(second)
    {
        case 1:
        cout << "Internet Recharge"<<endl;
        break;
        
        case 2:
        cout << "Top-up Recharge"<<endl;
        break;

        case 3:
        cout << "Special Recharge"<<endl;
        break;
    }
    break;
}


}