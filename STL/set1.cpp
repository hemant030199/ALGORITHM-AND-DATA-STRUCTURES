#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   ll n,i;
   cin>>n;

   set<pair<int,int>> s;
   for(i=0;i<n;i++)
   {
       ll x,y;
       cin>>x>>y;
       s.insert({x,y});
   }


   set<pair<int,int>> ::iterator it;
   for(it=s.begin();it!=s.end();it++)
   {
       pair<int,int> p;
       p = *it;
       cout<<p.first<<" "<<p.second<<endl;
   }


   while(!s.empty())
   {
       pair<int,int> p;
       p = *s.begin();
       cout<<p.first<<" "<<p.second<<endl;
       s.erase(s.begin());
   }



 return 0;
}
