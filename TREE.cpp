/*

*****************************TREE********************************
some references:-

https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/tutorial/
http://www.geeksforgeeks.org/binary-tree-set-1-introduction/

Written by :- Hemant Kumar Mangwani

Here we are simple doing that firstly we are taking input
n=no of nodes
k=root node
then till n-- > 0 we go
then we take a string as a input that is where we want to add the node
and
v=value of new node , which will be inserted at the enter string position
now we call getnode and paas v;
we get a newnode which we have to attach with the root node

if string is only of 1 length then
go to the defined position LEFT or RIGHT
if it is LEFT ('L') add the current node to the
left of the root node;
if it is RIGHT ('R') add the current node to the
right of the root node;

if string is more than 1  then
go to the defined position LEFT->no of times defined by string length or RIGHT->no of times defined by string length
and finally after completing loop work it comes out and now we got the location
were we have to add
if it is LEFT ('L') add the current node to the
left of the root node;
if it is RIGHT ('R') add the current node to the
right of the root node;

and finally display it
1.Inorder
2.preorder
3.postorder

And finally we completed stuff related to a binary tree

Happy Coding.. :)

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long  int
struct node
{
   node *left;
   ll value;
   node *right;
};

node* getnode(ll x)
{
    node *newnode;
    newnode = new node;
    newnode->value=x;
    newnode->left=newnode->right=NULL;
}

void inorder(struct node *root)
{
   if(root != NULL)
   {
      inorder(root->left);
      printf("%d\t",root->value);
      inorder(root->right);
   }
}

void preorder(struct node *root)
{
   if(root != NULL)
   {
      printf("%d\t",root->value);
      preorder(root->left);
      preorder(root->right);
   }
}

void postorder(struct node *root)
{
   if(root != NULL)
    {
      postorder(root->left);
      postorder(root->right);
      printf("%d\t",root->value);
   }
}

// k=rootnode , n=number of nodes

int main()
{
    ll n,k,v;
    cin>>n>>k;
    node *curr=NULL , *temp=NULL, *root=NULL;
    curr=getnode(k);
    root=getnode(k);
    temp=root;
    while(n--)
    {
        string s;
        cin>>s>>v;
        curr=getnode(v);
        ll sl=s.size(),i;
        for(i=0;i<sl-1;i++)
        {
        if(s[i]=='L')
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
        }

        if(s[sl-1]=='L')
        {
            root->left=curr;
        }
        else
        {
            root->right=curr;
        }
        root=temp;
    }

 inorder(root);
 cout<<"\n";
 preorder(root);
  cout<<"\n";
 postorder(root);
  cout<<"\n";
   cout<<"Happy Coding\n";
    return 0;
}
