#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[10000],Size[10000];

//initilization of the elements int the nodes and size
void init(int n)
{
   for(int i=0;i<n;i++)
   {
       arr[i]=i;
       Size[i]=1;
   }
}

int root(int i)
{
    while(arr[i]!=i)
    {
        arr[i]=arr[arr[i]];
        i=arr[i];
    }
    return i;
}

void unions(int a, int b)
{
int root_a = root(a);
int root_b = root(b);
if(root_a==root_b)
return;
if(Size[root_a]<Size[root_b])
{
arr[root_a] = arr[root_b];
Size[root_b] += Size[root_a];
Size[root_a] = 0;
}
else
{
arr[root_b] = arr[root_a];
Size[root_a] += Size[root_b];
Size[root_b] = 0;
}
}

bool find(int a,int b)
{
    if(root(a)==root(b))
        return true;
    else
        return false;
}

void printans(int n)
{
    int a1[1001];
    copy_n ( arr, n, a1 );


    for(int i=0;i<n;i++)
    {
        if(a1[i]>0&&a1[i]<1001)
        {
            cout<<a1[i]<<" ";
        }
    }
}

int main()
{
    ll n,e;
    cout<<"\nEnter no of node\n";
    cin>>n;
    init(n);

    cout<<"\nNo of edges\n";
    cin>>e;

    while(e--)
    {
        int a,b;
        cout<<"\nEnter the edges b/w a and b";
        cin>>a>>b;
        unions(a,b);
        printans(n);
        cout<<"\n";
    }

    //enter no of queries
    cout<<"\nenter no of queries=\n";
    ll q;
    cin>>q;

    while(q--)
    {
        bool ans;
        int a,b;
        cout<<"\mFind the edge b/w= ";
        cin>>a>>b;
        ans=find(a,b);
        if(ans==1)
            cout<<"\nWe can't add this edge by this edge will produced  cycle  \n";
        else
            cout<<"\nWe can add this edge by this edge will not produced cycle\n";
    }

    //this will print the no of nodes have sizze more then 1
    printans(n);

    return 0;
}
