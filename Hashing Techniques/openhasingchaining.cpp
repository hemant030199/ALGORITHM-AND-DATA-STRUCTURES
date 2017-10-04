/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>ht[20];
ll htz=20;

ll hf(string s)
{
    ll sl=s.size();
    ll sum=0;
    for(ll i=0;i<sl;i++)
    {
        sum+=(ll)s[i];
    }
    return sum%20;
}

void insert(string s)
{
    ll index = hf(s);
    ht[index].push_back(s);
}

void search(string s)
{
     ll index = hf(s);
     cout<<index<<endl;
     for(ll i=0;i<ht[index].size();i++)
     {
         if(ht[index][i]==s)
         {
             cout<<s<<" is found"<<endl;
             return ;
         }
     }
  cout<<s<<" not found"<<endl;

}

int main()
{
    ll n;
    cin>>n;
    string s;
    for(ll i=0;i<n;i++)
    {
      cin>>s;
      insert(s);
    }

   for(ll i=0;i<20;i++)
   {
       cout<<i<<" -> ";
       for(ll j=0;j<ht[i].size();j++)
       {
           cout<<ht[i][j]<<" ->  ";
       }
       cout<<endl;
   }

   ll q;
   cin>>q;
     string s1;
    for(ll i=0;i<n;i++)
    {
      cin>>s1;
      search(s1);
    }


    return 0;
}
