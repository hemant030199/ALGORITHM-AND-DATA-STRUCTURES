#include<bits/stdc++.h>
using namespace std;
void am()
{
 int n,e,i,j;
 cin>>n>>e;
 bool a[n+1][n+1]={0};
 for(i=0;i<e;i++)
 {
     int x,y;
     cin>>x>>y;
     a[x][y]=1;
     a[y][x]=1;
 }
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
     cout<<a[i][j]<<" ";
 }
 cout<<endl;
 }
}
void al()
{
vector <int> a[10];
 int n,e,i,j;
 cin>>n>>e;
 for(i=0;i<e;i++)
 {
     int x,y;
     cin>>x>>y;
     a[x].push_back(y);
     a[y].push_back(x);
 }

for(i=1;i<n;i++)
 {
     cout<<i<<"-->";
    for(j=0;j<a[i].size();j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
 }
}
void bfs()
{
vector <int> a[10];
 int n,e,i,j,s,k;
 cin>>n>>e;
 for(i=0;i<e;i++)
 {
     int x,y;
     cin>>x>>y;
     a[x].push_back(y);
     a[y].push_back(x);
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
    }
}

}
void dfs()
{
vector <int> a[10];
 int n,e,i,j,s,k;
 cin>>n>>e;
 for(i=0;i<e;i++)
 {
     int x,y;
     cin>>x>>y;
     a[x].push_back(y);
     a[y].push_back(x);
 }
cin>>s;
stack<int >q;
bool v[10]={0};
q.push(s);
v[s]=1;
while(!q.empty())
{
    s=q.top();
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
    }
}
}

int main()
{
    while(1)
    {
	int ch;
	cout<<"\n......GRAPH.....\n Enter Your Choice \n 1.Adjacent Matrix\n 2.Adjacent List\n 3.BFS\n 4.DFS\n5.exit\n";
	 cin>>ch;
    if(ch==1)
    {
    cout<<"1.Adjacent Matrix\n";
    am();
    }
    else if(ch==2)
    {
    cout<<"2.Adjacent List\n";
   al();
    }
    else if(ch==3)
    {
    cout<<"3.BFS\n";
    bfs();
    }
    else if(ch==4)
    {
    cout<<"4.DFS\n";
    dfs();
    }
    else if(ch==5)
    {
    cout<<"exit\n";
    exit(0);
    }
    }
return 0;
}
