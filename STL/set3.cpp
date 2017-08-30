#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int,pair<int,int>> T ;
int main()
{
   ll n,i;
   cin>>n;

   set<T> s;
   for(i=0;i<n;i++)
   {
       ll x,y,z;
       cin>>x>>y>>z;
       s.insert({x,{y,z}});
   }


   set<T> ::iterator it;
   for(it=s.begin();it!=s.end();it++)
   {
       T p;
       p = *it;
       cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
   }


   while(!s.empty())
   {
       T p;
       p = *s.begin();
       cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
       s.erase(s.begin());
   }



 return 0;
}
