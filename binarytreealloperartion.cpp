/*
**********************************BINARY SEARCH TREE****************************************
Some References:-
https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/tutorial/
http://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/
https://gist.github.com/mycodeschool/9465a188248b624afdbf
Written by :- Hemant Kumar Mangwani

*/


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

node* insert(node* root, int key)
{

    if (root == NULL) return getnode(key);


    if (key < root->key)
        root->left  = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);


    return root;
}




struct node * minValueNode(struct node* node)
{
    struct node* current = node;

    while (current->left != NULL)
        current = current->left;

    return current;
}


struct node* deleteNode(struct node* root, int key)
{
   if(root==NULL) return root;
   else if(root->key>key)
   {
       root->left=deleteNode(root->left,key);
   }
   else if(root->key<key)
   {
       root->left=deleteNode(root->left,key);
   }
   else
   {
    //1.case = only one child
   if(root->left==NULL&&root->right==NULL)
   {
       delete root ;
       root=NULL;
   }//case2.= have 2 child nodes
   else if(root->left!=NULL)
   {

       node* temp=root;
       root=root->left;
       delete temp;
   }
   else if(root->right!=NULL)
   {
       node *temp = root;
       root=root->right;
       delete temp;
   }//case3= have 3 child nodes
   else
   {
      node *temp=minValueNode(root->right);
      root->key=temp->key;
      root->right=deleteNode(root->right,temp->key);
   }
   }
   return root;
}

//preorder

void preorder(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}


//inorder

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
         printf("%d ", root->key);
        inorder(root->right);
    }
}

//postorder

void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
}

//search element in the tree

node* search(node* root,ll key)
{
    if(root==NULL||root->key==key )
    {
        return root;
    }
    if(root->key > key)
    {
        return search(root->left,key);
    }
    else if(root->key < key)
    {
        return search(root->right,key);
    }
}



int main()
{
    cout<<"********************************BINARY SEARCH TREE********************************\n";
    cout<<"1.Insertion  2.Deletion 3.Searching 4.Traversing\n\n";
while(1)
{
    long long r,n,v;
    struct node *root = NULL;
    cout<<"Enter the no of Node and root node of the tree\n";
    cin>>n>>r;
    root = insert(root, r);
    n--;
    while(n--)
    {
    cout<<"Enter element to be enterd in tree\n";
    cin>>v;
    root=insert(root, v);
    }
   cout<<"root->key = "<<root->key<<" \n";

   inorder(root);
   cout<<"\n";
   preorder(root);
    cout<<"\n";
   postorder(root);

   cout<<"\nNo of elements to be deleted\n";
    ll q;
    cin>>q;
    while(q--)
    {
        cout<<"\nElement to de delted \n";
         ll nd;
         cin>>nd;
         root = deleteNode(root, nd);
            printf("Inorder traversal of the modified tree \n");
            inorder(root);
    }

   inorder(root);
   cout<<"\n";
   preorder(root);
    cout<<"\n";
   postorder(root);
    cout<<"\n";

    cout<<"search= "<<"\n";

           node *ptr;

            cin>>v;
            ptr=search(root,v);
        if(ptr==NULL)
               cout<<"key "<<v<<" not found in the tree ";
           else
               cout<<"key "<<v<<" found in the tree ";

                cout<<"\nFor end the program press 1 \n";
 ll d;
 cin>>d;
 if(d==1) exit(0);
}
return 0;
}

