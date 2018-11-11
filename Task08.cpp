#include <iostream>
using namespace std;
int main()
{
    int number,digit,reversed=0,currentnumber;
    cin>>number;
    currentnumber=number;
    while(number!=0)
    {
        digit=number%10;
        reversed=reversed*10+digit;
        number=number/10;
    }
    if(currentnumber==reversed)
    {
        cout<<"It is palindrome."<<endl;
    }
    else
    {
        cout<<"It is not a palindrome."<<endl;
    }
    return 0;
}
