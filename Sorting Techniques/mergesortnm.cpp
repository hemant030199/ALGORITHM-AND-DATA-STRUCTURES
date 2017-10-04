/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void mergee(ll a[],ll s,ll m, ll e)
{
    ll ls=m-s+1,i;
    ll rs=e-m;
    ll l[ls+1]={0};
    ll r[rs+1]{0};
    l[ls]=10001;
    r[rs]=10001;
    for(i=0;i<ls;i++)
    {
        l[i]=a[s+i];
    }
    for(i=0;i<rs;i++)
    {
        r[i]=a[m+i+1];
    }
 i=0;
 ll j=0,k;
    for(k=s;k<=e;k++)
    {
        if(l[i]<=r[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=r[j];
            j++;
        }
    }

}

void mergesort(ll a[],ll s, ll e)
{
    if(s<e)
    {
        ll m=(s+e)/2;
        mergesort(a,s,m);
        mergesort(a,m+1,e);
        mergee(a,s,m,e);
    }

}


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

    mergesort(a,0,n-1);

   for(i=0;i<n;i++)
      cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
