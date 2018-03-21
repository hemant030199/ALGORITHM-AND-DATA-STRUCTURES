#include<bits/stdc++.h>
using namespace std;
struct compare
{
  bool operator()(const int& l, const int& r)
  {
      return l > r;
  }
};

int main()
{
    int n,i;
    cin>>n;
    priority_queue<int,vector<int>, compare>pq;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
int save[n]={0};
int k=0;
    while(!pq.empty())
    {
        int t1,t2,t3;
        t1=pq.top();
        pq.pop();
        t2=pq.top();
        pq.pop();
        t3=t1+t2;
        save[k++]=t3;
        pq.push(t3);
    }

    for(i=0;i<k-1;i++)
        cout<<save[i]<<" ";
    int ans=0;
    for(i=0;i<k-1;i++)
        ans+=save[i];
    cout<<endl<<"Final Answer is "<<ans<<endl;

    /*while(!pq.empty())
    {
        int y = pq.top();
        pq.pop();
        cout<<y<<" ";
    }
    */

    return 0;
}
