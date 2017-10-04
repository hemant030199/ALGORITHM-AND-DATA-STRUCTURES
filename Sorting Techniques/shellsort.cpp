/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/
//shell sort
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 1000000
int main()
{
   ll n,i;
   cin>>n;
   ll a[n];
   for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;

    ll gap=n/2,j;
    while(gap>0)
    {
        for(i=gap;i<n;i++)
        {
            ll temp = a[i];
            j=i;
            while(j>=gap&&a[j-gap]>temp)
            {
                a[j]=a[j-gap];
                j=j-gap;
            }
            a[j]=temp;
        }
        gap=gap/2;
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;

 return 0;
}
