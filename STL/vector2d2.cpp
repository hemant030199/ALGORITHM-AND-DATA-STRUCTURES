#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
int main()
{
speed;
vector<int>v[100001];
ll i;
ll n,e;
cin>>n>>e;
   for(i=0;i<e;i++)
   {
       ll x,y,c;
       cin>>x>>y;
       v[x].push_back(y);
       v[y].push_back(x);
   }
ll  j;
for (int i = 0 ; i < n; i++)
{
    for (int j = 0; j < v[i].size(); j++)
    {
        cout<<i<<" "<<j<<" ";
        cout << v[i][j]<<endl ;
    }
}

return 0;
}

