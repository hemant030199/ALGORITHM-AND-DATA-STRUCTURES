#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
int main()
{
speed;
vector<int>v;
ll i;
ll n;
cin>>n;
for(i=0;i<n;i++)
   {
       ll x;
       cin>>x;
       v.push_back(x);
   }
   vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";


return 0;
}

