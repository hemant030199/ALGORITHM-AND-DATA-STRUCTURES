#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
int main()
{
speed;
vector<pair<int,pair<int,pair<int,int>>>>v;
ll i;
ll n;
cin>>n;
    for(i=0;i<n;i++)
    {
       ll x,y,z,c;
       cin>>c>>x>>y>>z;
       v.push_back({c,{x,{y,z}}});
    }
   vector<int>::iterator it;

for(i=0;i<n;i++){
cout<<v[i].first<<" ";
cout<<v[i].second.first<<" ";
cout<<v[i].second.second.first<<" ";
cout<<v[i].second.second.second<<endl;
}


return 0;
}

