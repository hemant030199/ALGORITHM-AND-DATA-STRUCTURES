#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int n,i,rs,c=1;

     cin>>n;
     int a[n]={0};
     for(i=0;i<n;i++)
        cin>>a[i];
        cout<<"rs= ";
     cin>>rs;
     i=n-1;
     int j=0,ans=0;
     int s[n]={0};
     while(rs>0)
     {
         if(a[i]<=rs)
         {
             int t=0;
             t = rs/a[i];
             cout<<a[i]<<" "<<rs<<" "<<t<<endl;
             rs=rs-t*a[i];
             ans+=t;
         }
         i--;
     }
     cout<<ans;
     cout<<endl;
     return 0;
 }
