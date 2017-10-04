/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/
//shell sort
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 100000

void countnsort(ll a[],ll n , ll expn)
{
    cout<<"countn"<<endl;
    ll output[n+1]={0},countn[10]={0};
    ll i;


    for(i=0;i<n;i++)
        countn[(a[i]/expn)%10]++;
    for(i=1;i<10;i++)
       countn[i]+=countn[i-1];
    for(i=n-1;i>=0;i--)
    {
        output[countn[(a[i]/expn)%10]-1]=a[i];
        countn[(a[i]/expn)%10]--;
    }
     for(i=0;i<n;i++)
            a[i]=output[i];
}

void radixsort(ll a[],ll n, ll m)
{
    ll i;
    cout<<"radix"<<endl;
    for(i=1;m/i>0;i*=10)
        countnsort(a,n,i);

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

    ll m=*max_element(a,a+n);
    cout<<m<<endl;;
    radixsort(a,n,m);

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;

 return 0;
}
