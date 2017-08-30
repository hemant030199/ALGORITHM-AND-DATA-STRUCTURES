#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
int main()
{
speed;
vector<pair<int,int>>v[100001];
ll i;
ll n,e;
cin>>n>>e;
   for(i=0;i<e;i++)
   {
       ll x,y,c;
       cin>>x>>y>>c;
       v[x].push_back({y,c});
       v[y].push_back({x,c});
   }
ll  j;
for (int i = 0 ; i < n; i++)
{
    for (int j = 0; j < v[i].size(); j++)
    {
        cout<<i<<" "<<j<<" ";
        cout << v[i][j].first<<" "<<v[i][j].second<<endl ;
    }
}

return 0;
}

