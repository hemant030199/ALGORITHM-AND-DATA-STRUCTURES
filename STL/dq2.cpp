#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int,int> P;
int main()
{
   deque<P>dq;
   ll n,i;
   cin>>n;
   for(i=0;i<n;i++)
   {
       ll x,y;
       cin>>x>>y;
       dq.push_back({x,y});
   }

   while(!dq.empty())
   {
       P p;
       p=dq.front();
       cout<<p.first<<" "<<p.second<<endl;
       dq.pop_front();
   }


 return 0;
}
