#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int,pair<int,int> > P;
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
      ll x,y,z;
      cin>>x>>y>>z;
      a.push_back({x,{y,z}});
  }

  for(i=0;i<n;i++)
  {
      ll x,y,z;
      cin>>x>>y>>z;
      b.push_back({x,{y,z}});
  }

  for(i=0;i<n;i++)
  {
      ll x,y,z;
      cin>>x>>y>>z;
      c.push_back({x,{y,z}});
  }

  s.insert(a);
  s.insert(b);
  s.insert(c);



     set <vector <P > > ::iterator it;
        for ( it=s.begin(); it!=s.end(); ++it)
        {
            const vector<P>& k = (*it);
            for (int i=0;i<k.size();i++)
             cout<<k[i].first<<" "<<k[i].second.first<<" "<<k[i].second.second<<endl;;
            cout<<endl;
        }

  cout<<endl;

 return 0;
}
