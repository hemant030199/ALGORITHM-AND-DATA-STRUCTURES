/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n,i,j;
  cin>>n;
  float a[n];
  for(i=0;i<n;i++)
  cin>>a[i];
  vector<float>v[10];
  for(i=0;i<n;i++)
  {
    ll index = a[i]*10;
    v[index].push_back(a[i]);
  }
  for(i=0;i<n;i++)
  {
   sort(v[i].begin(),v[i].end());
  }
  ll c=0;
  for(i=0;i<n;i++)
  {
   for(j=0;j<v[i].size();j++)
   {
     a[c++]=v[i][j];
   }
  }

  for(i=0;i<n;i++)
  {
  cout<<a[i]<<" ";
  }
  cout<<endl;
  return 0;
}
