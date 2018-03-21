 #include<bits/stdc++.h>
 using namespace std;

 struct act
 {
    int v,w;
 };

bool bysec(act s1, act s2)
{
    double r1= (double)s1.v/s1.w;
    double r2 = (double)s2.v/s2.w;
    return ( r1 > r2);
}
 int main()
 {
    int n,i,wt;
    cin>>n>>wt;

    int s[n]={0},f[n]={0},save[n]={0};
    int sc=0,fc=0;
    double c=0.0;
    act arr[n];

    for(i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[i].v=a;
        arr[i].w=b;
    }

    sort(arr,arr+n,bysec);

    for(i=0;i<n;i++)
    {
       cout<<arr[i].v<<" "<<arr[i].w<<endl;
    }

    i=0;
     while(arr[i].w<=wt)
     {
       if(arr[i].w<=wt)
       {
           wt-=arr[i].w;
           c+=arr[i].v;
           cout<<c<<endl;
       }
       i++;
    }

           c+=arr[i].v*(double)wt/arr[i].w;
           wt=0;
           cout<<"c  "<<c<<endl;

        cout<<c<<endl;


    cout<<endl;
    return 0;
 }
