#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000001

ll seg[4*MAX];
ll in[MAX];
ll lazy[4*MAX];

void buildtree(ll low ,ll high, ll pos)
{
    if(low==high)
    {
        seg[pos]=in[low];
    }
    else
    {
        ll mid=(low+high)/2;
        buildtree( low   , mid  , 2*pos+1);
        buildtree( mid+1 , high , 2*pos+2);
       seg[pos]=min(seg[2*pos+1],seg[2*pos+2]);
    }
}

void update(ll qlow,ll qhigh,ll val,ll low,ll high,ll pos)
{
    if(high<low)            //out of limit
        return ;
    if(lazy[pos]!=0)             //if in lazy tree there exist any number to be updated
    {
        seg[pos]+=lazy[pos];
        if(low!=high)
        {
            lazy[2*pos+1]+=lazy[pos];
            lazy[2*pos+2]+=lazy[pos];
        }
        lazy[pos]=0;
    }

    if(qlow>high||qhigh<low)            // no overlap
        return ;
    if(qlow<=low&&qhigh>=high)         // total overlap
    {
        cout<<pos<<" "<<low<<" "<<high<<endl;
        seg[pos]+=val;
        if(low!=high)
        {
            lazy[2*pos+1]+=val;
            lazy[2*pos+2]+=val;
        }
    }
    else
    {
      ll mid=(low+high)/2 ;
      update(qlow,high,val,low,mid,2*pos+1);
      update(qlow,high,val,mid+1,high,2*pos+2);
     seg[pos] =min(seg[2*pos + 1], seg[2*pos + 2]);
    }
}

int query(ll qlow, ll qhigh,ll low, ll high ,ll pos)
{
 if(low>high)
    return MAX;
  if(lazy[pos]!=0)             //if in lazy tree there exist any number to be updated
    {
        seg[pos]+=lazy[pos];
        if(low!=high)
        {
            lazy[2*pos+1]+=lazy[pos];
            lazy[2*pos+2]+=lazy[pos];
        }
        lazy[pos]=0;
    }

    if(qlow>high||qhigh<low)            // no overlap
        return MAX;
    if(qlow<=low&&qhigh>=high)         // total overlap
    {
        return seg[pos];
    }
    else
    {
      ll mid=(low+high)/2 ;
     ll p1=query(qlow,high,low,mid,2*pos+1);
     ll p2=query(qlow,high,mid+1,high,2*pos+2);
     return min(p1,p2);
    }
}

int main()
{
    ll n,low,high,pos,i,q;
    cout<<"Enter number of elements in array = ";
    cin>>n>>q;

    ll s=sqrt(n);
    ll p=pow(2,s+1);

    memset(seg,INT_MAX,p);

    for(i=0;i<n;i++)
        cin>>in[i];

    low=0,high=n-1,pos=0;
    buildtree(low,high,pos);

    for(i=0;i<p;i++)
    cout<<seg[i]<<" ";
    cout<<endl;

    while(q--)
    {
        char c;
        ll qlow,qhigh;
        cin>>c>>qlow>>qhigh;
        if(c=='q')
        cout<<query(qlow,qhigh,low,high,pos)<<endl;
        else if(c=='u')
        {
            ll val;
            cin>>val;
            update(qlow,qhigh,val,low,high,pos);
        }
        else
            cout<<"****Invalid choice**** "<<endl;

    for(i=0;i<n;i++)
        cout<<in[i]<<" ";
      cout<<endl;

    for(i=0;i<p;i++)
        cout<<seg[i]<<" ";
      cout<<endl;

    }
    return 0;
}
