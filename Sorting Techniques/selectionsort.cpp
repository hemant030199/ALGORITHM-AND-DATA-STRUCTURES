/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n-1;i++)
    {
        int min = i;
         for(j=i+1;j<n;j++)
         {
             if(a[min]>a[j])
             {
                 min=j;
             }
         }
        if(i!=min)
            swap(a[i],a[min]);
    }
    for(int k=0;k<n;k++)
    cout<<a[k]<<" ";
     cout<<endl;

    return 0;
}
