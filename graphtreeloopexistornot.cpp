
/*
Program Written by :- Hemant Kumar Mangwani on 24/07/17
Here we are finding that in a directed graph or tree a loop exist or not  we can simply
do it by checking taak a loop enters in else part when we are searching the connected
edges with any node . Here i taken the help of bfs algo u can also do it by dfs
HAPPY CODING..... :)
*/




#include<bits/stdc++.h>
using namespace std;

int main()
{
vector <int> a[10];
 int n,e,i,j,s,k,flag=0;
 cin>>n>>e;
 for(i=0;i<e;i++)
 {
     int x,y;
     cin>>x>>y;
     a[x].push_back(y);
 }
cin>>s;
queue<int >q;
bool v[10]={0};
q.push(s);
v[s]=1;
while(!q.empty())
{
    s=q.front();
    cout<<s<<" ";
    q.pop();
    j=0;
    for(i=0;i<a[s].size();i++)
    {
        k=a[s][i];
        if(v[k]==0)
        {
        q.push(k);
        v[k]=1;
        }
        else flag=1;
    }
}
   if(flag==1)
   cout<<"\nEdge exist\n";
else
    cout<<"Edge not exist\n";
}
