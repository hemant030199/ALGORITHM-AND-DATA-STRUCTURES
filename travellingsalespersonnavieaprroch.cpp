#include<bits/stdc++.h>
using namespace std;

int main()
{
    int villages,i,j,s,minp;
    cin>>villages;
    int graph[villages][villages]={0};

    for(i=0;i<villages;i++)
    {
        for(j=0;j<villages;j++)
        {
            cin>>graph[i][j];
        }
    }
cout<<endl;
    for(i=0;i<villages;i++)
    {
        for(j=0;j<villages;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
    cin>>s;

    vector<int>v;
    for(i=0;i<villages;i++)
            if(i!=s)
                v.push_back(i);
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    minp=INT_MAX;

    do
    {
        int cw=0;
        int k=s;
        for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
        for(i=0;i<v.size();i++)
        {
            cw+=graph[k][v[i]];
            k=v[i];

        }
        cw+=graph[k][s];

        minp = min(minp,cw);

    }while(next_permutation(v.begin(),v.end()));

    cout<<minp<<endl;

    return 0;
}
