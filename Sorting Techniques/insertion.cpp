/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/
#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
int main()
{
   speed;
   ll n,i,j;
   cin>>n;
   ll a[n];
   for(i=0;i<n;i++)
    cin>>a[i];
   for(i=1;i<n;i++)
   {
       ll temp=a[i];
       for(j=i-1;(a[j]>temp&&j>=0);j--)
       {
           a[j+1]=a[j];
       }
       a[j+1]=temp;
       for(ll k=0;k<n;k++)
    cout<<a[k]<<" ";
     cout<<endl;
   }


  return 0;
}


