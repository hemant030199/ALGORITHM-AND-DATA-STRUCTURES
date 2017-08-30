#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll n,i;
  cin>>n;
  vector<int>a;
  vector<int>b;
  vector<int>c;
   set<vector<int>>s;
  for(i=0;i<n;i++)
  {
      ll x;
      cin>>x;
      a.push_back(x);
  }
     for(i=0;i<n;i++)
  {
      ll x;
      cin>>x;
      b.push_back(x);
   }

   for(i=0;i<n;i++)
  {
      ll x;
      cin>>x;
      c.push_back(x);
  }

  s.insert(a);
  s.insert(b);
  s.insert(c);



     set <vector <int > > ::iterator it;
        for ( it=s.begin(); it!=s.end(); ++it)
        {
            const vector<int>& k = (*it);
            for (int i=0;i<k.size();i++) cout<<k[i]<<" ";
            cout<<endl;
        }

  cout<<endl;
  i=0;
   for (const vector<int>& v: s)
   {
    cout << v[i] << endl;
    i++;
   }
 return 0;
}
