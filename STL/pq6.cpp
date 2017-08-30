#include<bits/stdc++.h>
using namespace std;
typedef  pair<int,int> T;
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
         cin>>x>>y;
         v.push_back({x,y});
     }

     for(i=0;i<n;i++)
     {
         int x,y,z;
         cin>>x>>y;
         a.push_back({x,y});
    }
    q.push(v);
    q.push(a);
     while(!q.empty())
     {
       for(i=0;i<q.top().size();i++)
        {
           pair<int,int>p;
           p=q.top()[i];
            cout<<p.first<<" "<<p.second<<" "<<endl;
        }

         q.pop();
     }
    return 0;
}
