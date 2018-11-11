#include <iostream>
using namespace std;
int main()
{
    int number,sum=0,count=0;
    for(int i=1;i<=5;i++)
    {
        cin>>number;
        if(number>=10 && number<=99)
        {
            count++;
            sum=sum+number;
        }
        if(sum>=234)
        {
           break;
        }
    }
    cout<<"You've entered "<<count<<" numbers."<<endl;
    cout<<"The sum is: "<<sum<<endl;

    return 0;
}
