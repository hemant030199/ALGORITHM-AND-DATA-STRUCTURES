/*
THERORETICAL REFERENCE

http://www.geeksforgeeks.org/longest-path-between-any-pair-of-vertices/

SIMPLE PROGRAM OF FINDING THE DIAMETER OF A TREE
OR
PROGRAM TO FIND Longest path between any pair of vertices


 Question https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/agitated-chandan/description/
THE LOGIC

solution to the question
-------------------------------------------------
logic we need to find the maximum distance between two nodes i.e we have to find the diameter of tree
note** about the diameter of the tree
1>the diameter of the tree ends at leaf nodes
2> there can be more than one diameter of the tree and all of them are qual in value.
3>the path that constitutes the diameter of the tree may or may not include the root node
so,
we select any node at random and using bfs find the farthest node from the selected node which offcourse will be a leaf node lets call this farthest node A,
now we apply bfs to A and find the farthest node from A which again is a leaf node lets call it B
so we got a distance from a leaf node A to another leaf node B that is maximum which gives the diameter of tree which in this case is the farthest distance(diameter) and the required answer
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
//vector < pair <int,int> > v
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector < pair <int,int> > v[n+1];
for(int i=0;i<n-1;i++){
int a,b,d;
cin>>a>>b>>d;
v[a].push_back(make_pair(b,d));
v[b].push_back(make_pair(a,d));
}
int dist[n+1];//for distance
bool vis[n+1];//for keeping track of visited nodes
memset(dist,0,sizeof(dist));//setting the dist array to 0
memset(vis,false,sizeof(vis));//setting the vis array to false so none is visited intially
dist[1]=0;//here i assumed to move to move from node 1 to leaf node to find A as explained
vis[1]=true;//setting true as we started from 1
//bfs code on 1 begins----------------------------
queue <int> q; //apply bfs on node 1
q.push(1);
while(q.empty()==false){
int node=q.front();
cout<<"s="<<node<<endl;
q.pop();
for(int i=0;i<v[node].size();i++){
if(vis[v[node][i].first]==false){
vis[v[node][i].first]=true;
dist[v[node][i].first]=dist[node]+v[node][i].second;
cout<<"d1="<<dist[v[node][i].first]<<endl;
q.push(v[node][i].first);
}
}
}
//bfs code on 1 endes-------------------------------------
int pos=max_element(dist+1,dist+n+1)-dist;//here we find the node corresponding to which we have got maximum distance
cout<<"p="<<pos<<endl;
memset(dist,0,sizeof(dist));//again setting the dist array to 0

memset(vis,false,sizeof(vis));//again setting vis to false
dist[pos]=0;//here we start from node A whose value is tored in pos to find node B
// q.clear();
vis[pos]=true;
//bfs code on A begins---
q.push(pos);
while(q.empty()==false){
int node=q.front();
cout<<"s1="<<node<<endl;
q.pop();
for(int i=0;i<v[node].size();i++){
if(vis[v[node][i].first]==false){
vis[v[node][i].first]=true;
dist[v[node][i].first]=dist[node]+v[node][i].second;
cout<<"d2="<<dist[v[node][i].first]<<endl;
q.push(v[node][i].first);
}
}
}
//bfs code on a ends
int ds=*max_element(dist+1,dist+n+1);//finding the maxm distance
cout<<"p1="<<ds<<endl;
//apply cost conditions
int cost;
if(ds<100)
cost=0;
else if(ds>100&&ds<=1000)
cost=100;
else if(ds>1000&&ds<=10000)
cost=1000;
else
cost=10000;

cout<<cost<<" "<<ds<<endl;

}
}


/*


SAMPLE INPUT

1
5
1 2 4
3 2 3
2 5 2
4 1 1

SAMPLE OUTPUT

0 8
*/

