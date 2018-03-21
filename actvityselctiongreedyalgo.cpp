 #include<bits/stdc++.h>
 using namespace std;

 struct act
 {
    int s,f;
 };

bool bysec(act s1, act s2)
{
    return (s1.f < s2.f);
}
 int main()
 {
    int n,i;
    cin>>n;
    int s[n]={0},f[n]={0},save[n]={0};
    int sc=0,fc=0;
    act arr[n];
    for(i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[i].s=a;
        arr[i].f=b;
    }
    sort(arr,arr+n,bysec);
    int c=0;
    save[c++]=0;
    int j=0;
            s[sc++]=arr[j].s;
            f[fc++]=arr[j].f;
    for(i=1;i<n;i++)
    {
        if(arr[i].s>=arr[j].f)
        {
            s[sc++]=arr[i].s;
            f[fc++]=arr[i].f;
            save[c++]=i;
            j=i;
        }
    }

    for(i=0;i<c;i++)
    {

        cout<<s[i]<<" "<<f[i]<<" "<<save[i]<<" "<<endl;
    }

    cout<<endl;
    return 0;
 }
