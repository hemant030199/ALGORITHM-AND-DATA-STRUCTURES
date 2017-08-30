#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
 ll n,i;
 cin>>n;
 set<int> s;
 for(i=0;i<n;i++)
 {
     ll x;
     cin>>x;
     s.insert(x);
 }

  set<int>::iterator it,up,low;

  for(it=s.begin();it!=s.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<endl;


  cout<<"up , low"<<endl;
  ll u,l;

  cin>>l;
  low = s.lower_bound(l);
  cout<<*low<<endl;

  cin>>u;
  up = s.upper_bound(u);
  cout<<*up<<endl;

  cout<<"equalrange---"<<endl;

  ll eq;
  cin>>eq;
  std::pair<std::set<int>::const_iterator,std::set<int>::const_iterator> er;
  er=s.equal_range(eq);
  cout<<*er.first<<" "<<*er.second<<endl;

  for(i=0;i<10;i++)
 {
   if(s.count(i)!=0)
     cout<<i<<" is in elemnts"<<endl;
 }
 ll e;
 cin>>e;




  s.erase(s.find(e));

  it=s.begin();


 for(i=0;i<10;i++)
 {
   if(s.count(*it%2)!=0)
   {
     cout<<i<<" is in elemnts"<<endl;
     it++;
   }
 }


  while(!s.empty())
  {
     cout<<*s.begin()<<" ";
     s.erase(s.begin());
  }
  s.clear();
  return 0;
}
