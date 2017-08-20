#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
#define MAX 1000000001
int main()
{
   vector <int> v [2000 + 10];
    int dis [1000 + 10];
     ll n,e;
     cin>>n>>e;


    for(int i = 0; i < e + 2; i++){

        v[i].clear();
        dis[i] = MAX;
    }

   for(int i = 0; i < e; i++){
   ll from , next , weight;
        scanf("%d%d%d", &from , &next , &weight);

        v[i].push_back(from);
        v[i].push_back(next);
        v[i].push_back(weight);
   }

   //  for(int i = 0; i < e; i++){
   //      cout<<"i= "<<i<<endl;
   //     for(int j = 0; j < 3; j++){
   //   cout<<  v[i][j]<<" ";
  //    }
  //    cout<<endl;
  //   }

    dis[1] = 0;
    for(int i = 0; i <= n - 1; i++){
        int j = 0;
        while(v[j].size() != 0){

            if(dis[ v[j][0]  ] + v[j][2] < dis[ v[j][1] ] ){
                dis[ v[j][1] ] = dis[ v[j][0]  ] + v[j][2];
            }
            j++;
        }
    }
   for(int i = 1; i <= n ; i++)
    cout<<dis[i]<<"  ";


return 0;
}
