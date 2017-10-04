/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
string ht[21]={""};
ll htz=21;

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
   // cout<<"i"<<endl;
    ll index = hf(s);
   // cout<<index<<endl;
    while(ht[index]!="")
        index=(index+1)%htz;
    ht[index]=s;
}

void search(string s)
{
  //  cout<<"s"<<endl;
     ll index = hf(s);
  //   cout<<index<<endl;
   while(ht[index]!=""&&ht[index]!=s)
    index=(index+1)%htz;

  if(ht[index]==s)
    cout<<s<<" is found"<<endl;
  else
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
    cout<<i<<" "<<ht[i]<<endl;


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
