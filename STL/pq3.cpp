#include<bits/stdc++.h>
using namespace std;
typedef  pair<int,pair<int,int>> P;
int main()
{
    priority_queue<pair<int,pair<int,int>>> q;
    int n,i;
    cin>>n;
     for(i=0;i<n;i++)
     {
         int x,y,z;
         cin>>x>>y>>z;
         q.push({x,{y,z}});
     }

     while(!q.empty())
     {
         pair<int,pair<int,int>> p;
         p = q.top();
         cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
         q.pop();
     }
    return 0;
}
