#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
int main()
{
speed;
vector<pair<int,pair<int,int>>>v;
ll i;
ll n;
cin>>n;
    for(i=0;i<n;i++)
    {
       ll x,y,z;
       cin>>x>>y;
       v.push_back({x,{y,z}});
    }
   vector<int>::iterator it;

for(i=0;i<n;i++){
cout<<v[i].first<<" ";
cout<<v[i].second.first<<" ";
cout<<v[i].second.second<<endl;
}


return 0;
}

