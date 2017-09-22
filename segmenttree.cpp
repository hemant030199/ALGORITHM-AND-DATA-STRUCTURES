/*
  Written by :- Hemant Kumar Mangwani on 20/09/17

  *******************************************************************************
 ******************************* SEGMENT TREE*************************************
  *******************************************************************************

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max LLONG_MAX
ll seg[1000001],in[100001];
ll idx,val,qlow,qhigh;
void bt(ll low,ll high,ll pos)
{
    if(low==high)
    {
        seg[pos]=in[low];      //base condition
    }
    else
    {
     ll mid=(low+high)/2;
     bt( low   , mid  ,2*pos+1);
     bt( mid+1 , high ,2*pos+2);
     seg[pos]=seg[2*pos+1]+seg[2*pos+2];
    }
}


void update(ll low,ll high,ll pos)
{
    if(low==high)
    {
        seg[pos]=val;
        in[idx]=val;
    }
    else
    {
     ll mid=(low+high)/2;
     if(low<=idx&&idx<=mid)
     update( low   , mid  ,2*pos+1);
     else
     update( mid+1 , high ,2*pos+2);
     seg[pos]=seg[2*pos+1]+seg[2*pos+2];
    }

}


int query(ll low,ll high,ll pos)
{
  if(qlow<=low&&qhigh>=high)
  {
      return seg[pos];
  }
 if(qlow > high  || qhigh < low )
  {
      return 0;
  }
  else
  {
      ll mid = (low+high)/2;
      ll p1=query(low   , mid  , 2*pos+1);
      ll p2=query(mid+1 , high , 2*pos+2);
      return p1+p2;
  }
}


int main()
{
   ll n,q,i;
   cin>>n;
   ll s=sqrt(n);
   ll p=pow(2,s+1);
   cout<<"Size of tree is = "<<p-1<<endl;
   memset(seg,INT_MAX,p);
   for(i=0;i<n;i++)
   cin>>in[i];

   ll low=0,high=n-1,pos=0;
   bt(low,high,pos);
   for(i=0;i<n;i++)
   {
       cout<<in[i]<<" ";
   }
   cout<<endl;
   for(i=0;i<p;i++)
   {
      cout<<seg[i]<<" ";
   }
   cout<<endl;
   cin>>q;
   while(q--)
   {
       char c;
       ll l,r;
       cin>>c>>l>>r;
       if(c=='q')
       {
         qlow=l;
         qhigh=r;
         cout<<query(low,high,pos)<<endl;
       }
       else if(c=='u')
       {
         idx=l,val=r;
         update(low,high,pos);
       }
       else
          cout<<"Invalid Choice\n";
    for(i=0;i<n;i++)
   {
       cout<<in[i]<<" ";
   }
   cout<<endl;
   for(i=0;i<p;i++)
   {
      cout<<seg[i]<<" ";
   }
   cout<<endl;
   }
    return 0;
}
