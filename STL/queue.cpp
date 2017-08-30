#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
int main()
{
  speed;
  queue<int>q;
  ll n,i;
  cin>>n;
  for(i=0;i<n;i++)
  {
      ll x;
      cin>>x;
      q.push(x);
  }
  while(!q.empty())
  {
      cout<<q.front()<<" ";
      q.pop();
  }


  return 0;
}
