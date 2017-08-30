#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int,int> P;
int main()
{
  ll n,i;
  cin>>n;
   vector<P>a;
   vector<P>b;
   vector<P>c;
   set<vector<P>>s;

  for(i=0;i<n;i++)
  {
      ll x,y;
      cin>>x>>y;
      a.push_back({x,y});
  }

  for(i=0;i<n;i++)
  {
      ll x,y;
      cin>>x>>y;
      b.push_back({x,y});
  }

  for(i=0;i<n;i++)
  {
      ll x,y;
      cin>>x>>y;
      c.push_back({x,y});
  }

  s.insert(a);
  s.insert(b);
  s.insert(c);



     set <vector <P > > ::iterator it;
        for ( it=s.begin(); it!=s.end(); ++it)
        {
            const vector<P>& k = (*it);
            for (int i=0;i<k.size();i++)
             cout<<k[i].first<<" "<<k[i].second<<endl;;
            cout<<endl;
        }

  cout<<endl;

 return 0;
}
