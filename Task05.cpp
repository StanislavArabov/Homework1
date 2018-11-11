#include <iostream>
using namespace std;
int main()
{

   int m,n,sum,count,counter=0;
   cin>>n>>m;
    for(int i=n;i<=m;i++)
       {
           sum=0;
           count=0;
           for(int j=1;j<i;j++)
           {
               if(i%j==0)
               {
                   sum=sum+j;
               }
           }
           cout<<sum<<endl;
           for(int g=2;g<=sum;g++)
           {
               if(sum%g==0)
                count++;
           }
           if(count==1)
           {
               counter++;
           }
       }
       cout<<counter<<endl;
   return 0;
}
