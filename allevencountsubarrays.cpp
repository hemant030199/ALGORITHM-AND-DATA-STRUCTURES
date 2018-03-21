#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
   // int a[n];
    //for(i=1;i<=n;i++)
      //  cin>>a[i];
     for(k=1;k<=n;k++)
     {
         for(i=k;i<=n;i++)
         {
            if((k-i)%2!=0)
             {
               for(j=k;j<=i;j++)
                {
                  cout<<j<<" ";
                }
             }
         cout<<endl;
         }
     }
    return 0;
}
