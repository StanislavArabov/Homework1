#include <iostream>
using namespace std;
int main()
{
    int N,count=0;;
    cout<<"Enter value of N:";
    cin>>N;
    if(N>=10 && N<=30000)
    {
        while(N!=0)
        {
            N=N/10;
            count++;
        }
        cout<<"It is "<<count<<" digit number."<<endl;
    }
    else
    {
        cout<<"Try with another number."<<endl;
    }
    return 0;
}
