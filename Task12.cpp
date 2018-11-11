#include <iostream>
using namespace std;
int main()
{
    int depth,days=0,climb=0;
    cout<<"Enter the depth: "<<endl;
    cin>>depth;
    while(climb<depth)
    {
       climb=(climb+2)-1;
       if(climb<depth)
        {
           days++;
        }
    }
    cout<<days<<endl;
    return 0;
}
