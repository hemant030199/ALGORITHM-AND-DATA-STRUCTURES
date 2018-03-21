#include<bits/stdc++.h>

using namespace std;

void iaf();
void ial();
void iap();
void daf();
void dal();
void dap();
void traverse();

struct node
{
    int data;
    node *next;
};
node *start = NULL ,*current = NULL ,*newnode = NULL ,*temp = NULL,*fa = NULL,*fb = NULL ;

int c=0;

void getnode()
{
    newnode = new node;
    newnode->next=NULL;
    cout<<"Enter the data of newnode :- ";
    cin>>newnode->data;
}


void iaf(){
    c++;
    getnode();
    if(start==NULL)
        start=newnode;
    else
    {
        newnode->next=start;
        start=newnode;
    }
    cout<<"One Node Inserted Succesfully\n";
}





void swap2no(int a,int b)
{
    temp=start;
    cout<<temp->data<<endl;
    while(temp->data!=a)
    {
        cout<<"in"<<endl;
        temp=temp->next;
    }
    fa=temp;

    temp=start;
     cout<<temp->data<<endl;
    while(temp->data!=b)
    {
        cout<<"out"<<endl;
        temp=temp->next;
    }
    fb=temp;

    temp=start;

    cout<<fa->data<<" "<<fb->data<<endl;
    temp->data = fb->data;
    cout<<temp->data<<endl;
    fb->data = fa->data;
    cout<<fa->data<<" "<<fb->data<<endl;
     cout<<temp->data<<endl;
    fa->data = temp->data;
    cout<<fa->data<<" "<<fb->data<<endl;
}

void traverse(){
    temp=start;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}


int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
        iaf();
    int a=10,b=40;
    traverse();
    swap2no(a,b);
    traverse();
    return 0;
}
