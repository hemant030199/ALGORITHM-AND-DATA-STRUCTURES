#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
//structure of a binary tree
struct node
{
  node *left;
  ll key;
  node *right;
};

//building a newnode for insertion in tree

node* getnode(int item)
{
     node *newnode =  new node;
    newnode->key = item;
    newnode->left = newnode->right = NULL;
    return newnode;
}

//insertion in a binary search tree


node* insert(node* root, int key,ll c)
{
   //int ma;
    if (root == NULL) return getnode(key);


    if (key < root->key)
        root->left  = insert(root->left, key,c++);
    else if (key > root->key)
        root->right = insert(root->right, key,c++);


    return root;
}

int maxDepth(struct node* node)
{
   if (node==NULL)
       return 0;
   else
   {
       /* compute the depth of each subtree */
       int lDepth = maxDepth(node->left);
       int rDepth = maxDepth(node->right);

       /* use the larger one */
       if (lDepth > rDepth)
           return(lDepth+1);
       else return(rDepth+1);
   }
}

int main()
{

    long long r,n,v;
    struct node *root = NULL;
    cout<<"Enter the no of Node and root node of the tree\n";
    cin>>n>>r;
    root = insert(root, r,0);
    n--;
    while(n--)
    {
    cout<<"Enter element to be enterd in tree\n";
    cin>>v;
    root=insert(root, v,0);
    }
    cout<<maxDepth(root)<<"\n";
    return 0;
}
