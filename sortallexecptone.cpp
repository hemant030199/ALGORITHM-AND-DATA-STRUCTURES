#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i;
    cin>>n>>k;
    int a[n+1];
    for(i=0;i<n;i++)
        cin>>a[i];
    int save = a[k];
    sort(a,a+n);
    for(i=n-1;i>k;i--)
        a[i+1]=a[i];
    a[k]=save;

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
