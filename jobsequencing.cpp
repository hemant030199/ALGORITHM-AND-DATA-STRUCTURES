#include<bits/stdc++.h>
using namespace std;

struct job
{
    string id;
    int p;
    int d;
};

bool bysec(job x,job y)
{
        return (x.p>y.p);
}

int main()
{
    int n,i,j;
    cin>>n;
    job a[n];
    for(i=0;i<n;i++)
        cin>>a[i].id>>a[i].d>>a[i].p;

    sort(a,a+n,bysec);

    cout<<endl;

    for(i=0;i<n;i++)
        cout<<a[i].id<<" "<<a[i].d<<" "<<a[i].p<<endl;
    cout<<endl;

    int slot[n]={0};
    int res[n]={0};

    for(i=0;i<n;i++)
        slot[i]=false;

    for(i=0;i<n;i++)
    {
        for(j=min(n,a[i].d)-1;j>=0;j--)
        {
            if(slot[j]==false)
            {
                res[j]=i;
                slot[j]=true;
                break;
            }
        }
    }
    int ans=0;
    for(i=0;i<n;i++)
        if(slot[i])
            ans+=a[res[i]].p;

     for(i=0;i<n;i++)
    {
        if(slot[i])
            cout<<res[i]<<" "<<a[res[i]].p<<" "<<endl;
    }
    cout<<endl;

     for(i=0;i<n;i++)
    {
        if(slot[i])
            cout<<a[res[i]].id<<" ";
    }
    cout<<endl;
    cout<<"Final Answer is "<<ans<<endl;
    return 0;
}
