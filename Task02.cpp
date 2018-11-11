#include <iostream>
using namespace std;
int main()
{
    float loan , months , interest;
    float  monthint=0,totalsum=0,payment=0;
    cout<<"Enter the value of the loan:"<<endl;
    cin>>loan;
    cout<<"Enter the number of months:"<<endl;
    cin>>months;
    cout<<"Enter the interest rate:"<<endl;
    cin>>interest;
    monthint=((interest/months)/100);
    totalsum=((loan*monthint)*months)+loan;
    payment=totalsum/months;
    cout<<"The final sum is: "<<totalsum<<endl;
    cout<<"Monthly payment: "<<payment<<endl;


    return 0;
}
