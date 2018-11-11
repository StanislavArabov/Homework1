#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number,m,digit=0,result=1,sum=0,n,l;
    cin>>number;
    int count=0;
    m=number;
    n=number;
    l=number;
    while(m!=0)
    {
        m=m/10;
        count++;
    }
    cout<<count<<endl;
    for(int i=1;i<=count;i++)
    {
        digit=n%10;
        result=pow(digit,count);
        sum=sum+result;
        n=n/10;
    }
    cout<<sum<<endl;
    if(l==sum)
    {
        cout<<"It is  is narcissistic."<<endl;
    }
    else
    {
        cout<<"It is not narcissistic"<<endl;
    }


    return 0;
}
