#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
int main()
{
  speed;
  queue<pair<int,int>>q;
  ll n,i;
  cin>>n;
  for(i=0;i<n;i++)
  {
      ll x,y;
      cin>>x>>y;
      q.push({x,y});
  }
  while(!q.empty())
  {
      pair<int,int> p;
     p=q.front();
     cout<<p.first<<" "<<p.second<<endl;
      q.pop();
  }


  return 0;
}
