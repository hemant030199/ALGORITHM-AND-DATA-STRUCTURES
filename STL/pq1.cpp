#include<bits/stdc++.h>
using namespace std;
typedef  pair<int,pair<int,int>> P;
int main()
{
    priority_queue<int> q;
    int n,i;
    cin>>n;
     for(i=0;i<n;i++)
     {
         int x,y,z;
         cin>>x;
         q.push(x);
     }

     while(!q.empty())
     {
         cout<<q.top()<<" ";
         q.pop();
     }
    return 0;
}
