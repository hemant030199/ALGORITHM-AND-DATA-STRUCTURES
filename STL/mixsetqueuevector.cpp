#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n,i;
  cin>>n;
  vector<int>v;
  queue<vector<int>>q;
  set<int>s;
  for(i=0;i<n;i++)
  {
      ll x;
      cin>>x;
      v.push_back(x);
  }
  q.push(v);
  while(!q.empty())
  {
      for(i=0;i<q.front().size();i++)
      {
      int a = q.front()[i];
      s.insert(a);
      }
      q.pop();
  }
  cout<<s.size()<<endl;
  while(!s.empty())
  {
     cout<<*s.begin()<<" ";
      s.erase(s.begin());
  }

  return 0;
}
