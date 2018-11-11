#include <iostream>
using namespace std;
int main()
{
    cout<<"Press 1 for:Check balance."<<endl;
    cout<<"Press 2 for:Refill your voucher."<<endl;
    cout<<"Press 3 for:Exit."<<endl;
    int command;
    int currentm=5;
    int sum,code,count=0,k;
    while(command!=3)
    {
        cin>>command;
    switch(command)
    {
        case 1: cout<<"You have "<<currentm<< "levs."<<endl;
                 break;
        case 2: cout<<"Enter a code to refill your voucher"<<endl;
                cin>>code;
                while(code!=0)
                {
                    k=code%10;
                    if(k==5)
                    {
                    count++;
                    }
                    code=code/10;
                }
                if(count==3)
                {
                cout<<"Enter the sum you want to put in your voucher"<<endl;
                cin>>sum;
                cout<<"The selected sum is: "<<sum<<endl;
                currentm=currentm+sum;
                }
                else
                {
                    cout<<"The operation is invalid.Press again 2 if you want to refill your voucher"<<endl;
                    command=2;
                }
                break;
                default: cout<<"You have exited"<<endl;
    }
    }
    return 0;
}
