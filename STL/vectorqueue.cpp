#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
int main()
{
  speed;
  vector<pair<int,int>>v;
  queue<vector<pair<int,int>>>q;
  ll n,i;
  cin>>n;
  for(i=0;i<n;i++)
  {
      ll x,y;
      cin>>x>>y;
      v.push_back({x,y});
  }
  q.push(v);
 cout<< q.front().size()<<endl;
  while(!q.empty())
  {
    pair<int,int> p;

      for(int i=0;i<q.front().size();i++)
      {
          p=q.front()[i];
        cout<<p.first<<" "<<p.second<<endl;
      }

            cout<<endl;
      q.pop();
  }


  return 0;
}
