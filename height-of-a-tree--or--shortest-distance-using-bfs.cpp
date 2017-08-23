  #include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
#define MAX 1000000001
int main()
{
 //speed;
vector <int> a[10];
ll dis[100]={0};
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
dis[s]=0;
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
        dis[k]=dis[s]+1;
        }
    }
}
cout<<endl;
for(i=0;i<n;i++)
cout<<"i= "<<i<<" "<<dis[i]<<" ";
}
