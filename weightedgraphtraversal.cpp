/*
written by :- Hemant Mangwani on 24/07/16

For more reference  for theory :-

http://www.geeksforgeeks.org/graph-implementation-using-stl-for-competitive-programming-set-2-weighted-graph/

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> a[100];
    int n,e,i;
    cin>>n>>e;
    for(i=0;i<e;i++)
    {
      int x,y,c;
      cin>>x>>y>>c;
      a[x].push_back({y,c});// a[x].push_back(make_pair(y,c);
      a[y].push_back({x,c});
    }
    for(i=1;i<=n;i++)
    {
        cout<<i<<"->";
    for(auto it=a[i].begin();it!=a[i].end();it++)
    {
        cout<<"Node="<<it->first<<" Cost="<<it->second<<" ";
    }
    cout<<"\n";
    }

    return 0;
}
