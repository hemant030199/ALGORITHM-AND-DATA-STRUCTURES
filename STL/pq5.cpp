#include<bits/stdc++.h>
using namespace std;
typedef  pair<int,pair<int,int>> T;
int main()
{
    vector<T>v;
    vector<T>a;
   priority_queue<vector<T> > q;
    int n,i;
    cin>>n;
     for(i=0;i<n;i++)
     {
         int x,y,z;
         cin>>x>>y>>z;
         v.push_back({x,{y,z}});
     }

     for(i=0;i<n;i++)
     {
         int x,y,z;
         cin>>x>>y>>z;
         a.push_back({x,{y,z}});
    }
     q.push(v);
    q.push(a);
     while(!q.empty())
     {
       for(i=0;i<q.top().size();i++)
        {
           pair<int,pair<int,int>>p;
           p=q.top()[i];
            cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
        }

         q.pop();
     }
    return 0;
}
