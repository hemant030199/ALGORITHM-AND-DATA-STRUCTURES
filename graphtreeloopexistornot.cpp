
/*
Program Written by :- Hemant Kumar Mangwani on 24/07/17
HAPPY CODING..... :)
*/




#include<bits/stdc++.h>
using namespace std;

int main()
{
vector <int> a[10];
 int n,e,i,j,s,k,flag=0;
 cin>>n>>e;
 for(i=0;i<e;i++)
 {
     int x,y;
     cin>>x>>y;
     a[x].push_back(y);
 }
cin>>s;
queue<int >q;
bool v[10]={0};
q.push(s);
v[s]=1;
while(!q.empty())
{
    s=q.front();
    cout<<s<<" ";
    q.pop();
    j=0;
    for(i=0;i<a[s].size();i++)
    {
        k=a[s][i];
        if(v[k]==0)
        {
        q.push(k);
        v[k]=1;
        }
        else flag=1;
    }
}
   if(flag==1)
   cout<<"\nEdge exist\n";
else
    cout<<"Edge not exist\n";
}
