#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
#define MAX 1000000001
int main()
{
    ll n,e,i,j,k;
    cin>>n>>e;
    ll dist[n][n];
    for(i=1;i<=n;i++)
        {
          for(j=1;j<=n;j++)
          {
              dist[i][j]=MAX;
          }
        }
    for(i=0;i<e;i++)
    {
        ll f,t,c;
        cin>>f>>t>>c;
        dist[f][t]=c;
    }
    for(i=1;i<=n;i++)
    {
        dist[i][i]=0;
    }
   for(k=1;k<=n;k++)
    {
       for(i=1;i<=n;i++)
        {
          for(j=1;j<=n;j++)
          {
            if(dist[i][j]>dist[i][k]+dist[k][j])
                dist[i][j]=dist[i][k]+dist[k][j];
          }
        }
    }

     for(i=1;i<=n;i++)
        {
          for(j=1;j<=n;j++)
          {
              cout<<dist[i][j]<<" ";
          }
          cout<<endl;
        }
    return 0;
}
