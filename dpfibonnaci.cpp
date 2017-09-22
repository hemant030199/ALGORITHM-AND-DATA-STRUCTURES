#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
#define mod 10000000007
ll fib[10000005];

int main()
{
speed;
T
{
  ll n,i;
  cin>>n;
  if(fib[n]==0)
  {
     for(i=1;i<=n;i++)
     {
       if(i==1) fib[i]=1;
       else if(i==2) fib[i]=2;
       else
        fib[i]=((fib[i-1]%mod)+(fib[i-2]%mod))%mod;
     }
     for(i=1;i<=n;i++)
     {
      cout<<fib[i]%mod<<" ";
     }
      cout<<endl;
 }
  else
  {
   cout<<fib[n]<<endl;
  }


}
return 0;
}

