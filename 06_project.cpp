#include<iostream>
using namespace std;

int main() {
    int a;
    char b;
    cout << "Enter A Value : ";
    cin >> a;


// First Program

    b = (a>=90 && a<=100) ? 'A'
    : (a>=80 && a<=89) ? 'B' 
    : (a>=70 && a<=79) ? 'C' 
    : (a>=60 && a<=69) ? 'D' 
    : (a>=33 && a<=50) ? 'E':'F';

    cout << "Your Grade is :"<<b <<endl ;

    switch(b)
    {
        case 'A' :
        cout << "Excellent Work!"<<endl;
        break;

         case 'B':
         cout << "Great Job!"<<endl;
         break;

         case 'C' :
         cout << "Good effort!"<<endl;
         break;

         case 'D' :
         cout << "You passed, but there's room for impovement."<<endl;
         break;

         case 'E' :
         cout << "You passed,but there's room for improvement."<<endl;
         break;
        
        case 'F' :
        cout << "Sorry,you are fail"<<endl;
        break;
        
        default :
        cout << "Invalid grade!"<<endl;
        break;
    }

    if(a>=33)
    {
        cout << "Congrulaction"<<endl;
    }
    else {
        cout << "Sorry You are fail"<<endl;
    }

    return 0;
}