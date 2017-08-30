#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   deque<int>dq;
   ll n,i;
   cin>>n;
   for(i=0;i<n;i++)
   {
       ll x;
       cin>>x;
       dq.push_back(x);
   }

    cout<<"size dq= "<<dq.size()<<endl;
    dq.erase(dq.begin());

    for(ll i=0;i<dq.size();i++)
    cout<<dq[i]<<" ";
    dq.clear();
 /*   deque<int>::iterator it1;

   for(it1=dq.begin();it1!=dq.end();it1++)
   {
       cout<<*it1<<" ";
   }

    cout<<endl;

  deque<int>::reverse_iterator it;

   for(it=dq.rbegin();it!=dq.rend();it++)
   {
       cout<<*it<<" ";
   }

 while(!dq.empty())               //queue elements only
   {
       cout<<dq.front()<<" ";
       dq.pop_front();
   }
   cout<<endl;

   while(!dq.empty())                 //front elements only
   {
       cout<<dq.front()<<" ";
       dq.pop_back();
   }
   cout<<endl;

   while(!dq.empty())                   //back elements only
   {
       cout<<dq.back()<<" ";
       dq.pop_front();
   }

   cout<<endl;
   while(!dq.empty())                       //stack
   {
       cout<<dq.back()<<" ";
       dq.pop_back();
   }
*/
    return 0;
}
