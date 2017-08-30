#include<bits/stdc++.h>
using namespace std;
typedef  int P;
int main()
{
    vector<P>v;
    vector<P>a;
   priority_queue<P,vector<P> , greater<P>> q;
    int n,i;
    cin>>n;
     for(i=0;i<n;i++)
     {
         int x,y,z;
         cin>>x ;
         v.push_back(x);
     }

     for(i=0;i<n;i++)
     {
         int x,y,z;
         cin>>x ;
         a.push_back(x);
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
        cout<<endl;
         q.pop();
     }
    return 0;
}
