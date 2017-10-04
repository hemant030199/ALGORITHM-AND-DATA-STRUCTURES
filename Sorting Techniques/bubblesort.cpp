/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/
//Bubble Sort

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i,j,c=0;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
     for(i=0;i<n;i++)
     {
          for(j=0;j<n-i-1;j++)
          {
              if(a[j]>a[j+1])
              {
                  swap(a[j],a[j+1]);
              }
          }
     }
     for(i=0;i<n;i++)
    cout<<a[i]<<" ";

     cout<<endl;

    return 0;
}
