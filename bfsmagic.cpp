#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  T
ll a[101][101];
int bfs(int s,int n)
{
    int v[n]={0},j,f,r,q[n];
    v[s]=1;
    f = r = -1;
    q[++r]=s;
    cout<<"1c\n"<<f<<r<<"\n";
    while(f!=r)
    {
        s=q[++f];
        cout<<s<<" ";
        for(j=0;j<n;j++)
        {
            if(a[s][j]==true&&v[j]==false)
            {
                //cout<<"in";
                q[++r]=j;
                v[j]=1;
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

    cin>>n>>e;
    for(i=0;i<e;i++)
    {
        ll x,y;
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cin>>s;
    bfs(s,n);
    }
    return 0;
}
