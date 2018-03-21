#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int n,i,rs;

     cin>>n;
     int a[n]={0};
     for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        cout<<"rs= ";
     cin>>rs;
     i=n-1;
     int j=0,k=0;
     int s[n]={0};
     int p[10001]={0};
     for(i=n-1;i>=0;i--)
     {
             int t=0;
             t = rs/a[i];
           //  cout<<a[i]<<" "<<rs<<" "<<t<<endl;
             rs=rs-t*a[i];
             for(j=0;j<t;j++)
                cout<<a[i]<<" ";
     }
     i=0,k=0;
     while(s[i]!=0)
     {
        for(j=0;j<s[i];j++)
                p[k++]=s[i];
        i++;
     }



     cout<<endl;

     return 0;
 }
