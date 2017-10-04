/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/
//counting sort
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 1000000
ll input[Max];
ll output[Max];
ll countn[Max];
int main()
{
    ll n,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>input[i];

  ll k= *max_element(input,input+n);
  cout<<k<<endl;

    for(i=0;i<n;i++)
        countn[input[i]]++;

    for(i=0;i<k+1;i++)
     cout<<countn[i]<<" ";
    cout<<endl;

     for(i=1;i<k+1;i++)
        countn[i]+=countn[i-1];

    for(i=0;i<k+1;i++)
     cout<<countn[i]<<" ";
    cout<<endl;


     for(i=n-1;i>=0;i--)
      output[--countn[input[i]]]=input[i];

    for(i=0;i<n;i++)
        cout<<input[i]<<" ";
    cout<<endl;

    for(i=0;i<n;i++)
        cout<<output[i]<<" ";
    cout<<endl;
    return 0;
}
