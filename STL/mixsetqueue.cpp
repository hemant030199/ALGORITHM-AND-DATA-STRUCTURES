#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n,i;
  cin>>n;
  queue<int>q;
  for(i=0;i<n;i++)
  {
      ll x;
      cin>>x;
      q.push(x);
  }
  set<int>s;
  while(!q.empty())
  {
      int a = q.front();
      s.insert(a);
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
