#include<bits/stdc++.h>
using namespace std;
typedef  pair<int,pair<int,int>> P;
int main()
{
    priority_queue<pair<int,int>> q;
    int n,i;
    cin>>n;
     for(i=0;i<n;i++)
     {
         int x,y,z;
         cin>>x>>y;
         q.push({x,y});
     }

     while(!q.empty())
     {
         pair<int,int>p;
         p=q.top();
         cout<<p.first<<" "<<p.second<<endl;
         q.pop();
     }
    return 0;
}
