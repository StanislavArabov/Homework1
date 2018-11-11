#include <iostream>
using namespace std;
int main()
{
    double number,sum=0,count=0,average;
    while(number>1)
    {
        cin>>number;
        if(number>=1 && number<=200)
        {
        count++;
        sum=sum+number;
        }

    }
    average=sum/count;
    cout<<"You've entered "<<count<<" numbers."<<endl;
    cout<<"The sum is: "<<sum<<endl;
    cout<<"The average is: "<<average<<endl;
    return 0;
}
