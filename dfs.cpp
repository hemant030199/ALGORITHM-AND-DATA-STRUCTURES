#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  T
int bfs(int s,int n,vector<ll>a[100001])
{
    ll v[n]={0};
    stack<ll>q;
    v[s]=1;
    q.push(s);
    int i,j,k;
    while(!q.empty())
    {
        s=q.top();
        cout<<s<<" ";
        q.pop();

        for(j=0;j<a[s].size();j++)
        {
            k=a[s][j];
            if(v[k]==0)
            {
                v[k]=1;
                q.push(k);
            }
        }



    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll i,j,s,n,e;
    vector<ll>a[100001];
    cin>>n>>e;
    for(i=0;i<e;i++)
    {
        ll x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cin>>s;
    bfs(s,n,a);
    }
    return 0;
}
