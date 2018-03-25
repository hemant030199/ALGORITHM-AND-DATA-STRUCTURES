#include<bits/stdc++.h>
using namespace std;

int ksp(int w,int p[],int wt[],int n)
{
    if(n==0||w==0)
        return 0;
    else if(wt[n-1]>w)
    {
        return ksp(w,p,wt,n-1);
    }
    else
    {
                return max(p[n-1]+ksp(w-wt[n-1],p,wt,n-1),ksp(w,p,wt,n-1));
    }
}

int main()
{
    int n,m,i,j,w;
    cin>>n;
    cin>>m;
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
w=m;
//cout<<n<<w<<endl;
cout<<ksp(w,p,wt,n)<<endl;

    return 0;
}
