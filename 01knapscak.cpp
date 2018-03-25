#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,w;
    cin>>n;
    cin>>m;
    int k[n+1][m+1];
    int wt[n+1]={0},p[n+1]={0};
    for(i=0;i<n;i++)
        cin>>p[i];
    for(i=0;i<n;i++)
        cin>>wt[i];
cout<<"\n";
    for(i=0;i<=n;i++)
        cout<<p[i]<<" ";
    cout<<"\n";

    for(i=0;i<=n;i++)
        cout<<wt[i]<<" ";
    cout<<"\n";

    for(i=0;i<=n;i++)
    {
        for(w=0;w<=m;w++)
        {
            k[i][w]=0;
        }
    }

    for(i=0;i<=n;i++)
    {
        for(w=0;w<=m;w++)
        {
            cout<<k[i][w]<<" ";
        }
        cout<<"\n";
    }

cout<<"\n";

    for(i=0;i<=n;i++)
    {
        //cout<<i<<endl;
        for(w=0;w<=m;w++)
        {
            if(i==0||w==0)
                k[i][w]=0;
            else if(w>=wt[i-1])
            {
              //  cout<<i<<" in "<<p[i-1]<<endl;
                k[i][w] = max( k[i-1][w],k[i-1][w-wt[i-1]]+p[i-1]);  //KING OG THE PROGRAM
            }
            else
                k[i][w] = k[i-1][w];
           // cout<<k[i][w]<<" ";
        }
        //cout<<endl;
    }

cout<<"\n";

    for(i=0;i<=n;i++)
    {
        for(w=0;w<=m;w++)
        {
            cout<<k[i][w]<<" ";
        }
        cout<<"\n";
    }

i=n,j=m;

cout<<"\n"<<k[i][j]<<endl;
int cost=0,l=0,o=0;
int save1[n]={0};
int save2[n]={0};
cout<<"\nSelection Of Objects \n"<<i<<" "<<j<<endl ;

    while(i>0&&j>0)
    {
        if(k[i][j]==k[i-1][j])
        {
            cout<<i<<" = 0"<<endl;
            i--;
        }
        else
        {
            cout<<i<<" = 1"<<endl;
            i--;
            j-=wt[i];
            cost+=p[i];
            save1[l++]=p[i];
            save2[o++]=wt[i];
        }
    }

    cout<<cost<<endl;
    for(i=0;i<=l;i++)
    {
        cout<<save1[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<=o;i++)
    {
        cout<<save2[i]<<" ";
    }
    return 0;
}
