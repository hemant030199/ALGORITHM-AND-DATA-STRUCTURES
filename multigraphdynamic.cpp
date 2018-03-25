#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,stages,min,e;
    cin>>n>>e>>stages;
    int cost[n+1]={0},d[n+1]={0},path[n+1]={0},k;
    int c[n+1][n+1];
    int i,j,val=-1;
for(i=1;i<n;i++)
    {
        for(j=1;j<n+1;j++)
        {
            c[i][j]=-1;
        }
        cout<<endl;
    }
    for(i=0;i<e;i++)
    {

            int x,y,w;
            cin>>x>>y>>w;
            c[x][y]=w;

    }

cout<<endl<<endl;

    for(i=1;i<n;i++)
    {
        for(j=1;j<n+1;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<endl<<endl;

    for(i=n-1;i>=1;i--)
    {
        min = INT_MAX;
        for(k=i+1;k<=n;k++)
        {
            if(c[i][k]!=val&&c[i][k]+cost[k]<min)
            {
                min = c[i][k]+cost[k];
                d[i]=k;
            }
            cost[i] = min;
        }
    }

    path[1]= 1,path[stages]=n;

    for(i=2;i<stages;i++)
    {
        path[i] = d[path[i-1]];
    }
cout<<endl<<endl;
for(i=0;i<=n;i++)
    cout<<cost[i]<<" ";
cout<<endl<<endl;
for(i=0;i<=n;i++)
    cout<<d[i]<<" ";
cout<<endl<<endl;
for(i=0;i<=n;i++)
    cout<<path[i]<<" ";
cout<<endl<<endl;
cout<<cost[1]<<endl;
    return 0;
}
