/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define speed ios_base::sync_with_stdio(0)

int par(ll a[],ll s, ll e)
{
    ll piv=a[e];
    ll j=s;
    ll i=j-1;
    while(j<e)
    {
        if(a[j]<piv)
        {
            swap(a[++i],a[j]);
        }
        j++;
    }
    swap(a[++i],a[e]);
    return i;
}

void quicksort(ll a[],ll s,ll e)
{
    if(s<e)
    {
        ll pos=par(a,s,e);
        quicksort(a,s,pos-1);
        quicksort(a,pos+1,e);

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
    quicksort(a,0,n-1);
   for(i=0;i<n;i++)
      cout<<a[i]<<" ";
    cout<<endl;



    return 0;
}
