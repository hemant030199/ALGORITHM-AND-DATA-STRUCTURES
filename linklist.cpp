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
node *start = NULL ,*current = NULL ,*newnode = NULL ,*temp = NULL ;

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


void ial(){
    c++;
    getnode();
    if(start==NULL)
        start=newnode;
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    cout<<"One Node Inserted Succesfully\n";
}
void iap(){
    int pos;
    c++;
    getnode();
    cout<<"Enter the position \n";
    cin>>pos;
    if(start==NULL)
        start=newnode;
    else if(pos==0)
    {
        c++;
    if(start==NULL)
        start=newnode;
    else
    {
        newnode->next=start;
        start=newnode;
    }
    }
    else
    {
        temp=start;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newnode->next = temp->next;
        temp->next=newnode;
    }
    cout<<"One Node Inserted Succesfully\n";
}
void daf(){
    c--;
    if(start==NULL)
        cout<<"List Is Empty\n";
    else
    {
        if(start->next==NULL)
            start=NULL;
        else
        {
            start=start->next;
        }
    }
     cout<<"One Node Deleted Succesfully\n";
}
void dal(){
     c--;
     if(start==NULL)
        cout<<"List Is Empty\n";
    else if(start->next==NULL)
            start=NULL;
    else
        {
        temp=start;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
            temp->next=NULL;
        }
     cout<<"One Node Deleted Succesfully\n";
}
void dap(){
    int pos;
    c--;
    cout<<"Enter the position \n";
    cin>>pos;
    if(start==NULL)
        cout<<"List Is Empty\n";
    else if(pos==0)
    {
        c--;
        if(start->next==NULL)
            start=NULL;
        else
        {
            start=start->next;
        }
    }
    else
    {
        temp=start;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newnode->next = temp->next;
        temp->next=temp->next->next;
    }
    cout<<"One Node Deleted  Succesfully\n";
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
    int ch,chmm,chi,chd;
    do
    {
        cout<<"Main Menu\n 1. Insertion \n 2. Deletion \n 3. Traverse \n 4. Exit \n\t";
        cin>>chmm;
        switch(chmm)
        {
        case 1:
            cout<<"Insertion \n 1. At first \n 2. At last \n 3. At Position\n";
            cin>>chi;
            switch(chi)
            {
                case 1:
                        iaf();
                    break;
                case 2:
                        ial();
                    break;
                case 3:
                        iap();
                    break;
                default:
                    cout<<"Wrong Input\n";

            }
            break;
        case 2:
            cout<<"Deletion \n 1. At first \n 2. At last \n 3. At Position\n";
            cin>>chd;
            switch(chd)
            {
                case 1:
                        daf();
                    break;
                case 2:
                        dal();
                    break;
                case 3:
                        dap();
                    break;
                default:
                    cout<<"Wrong Input\n";
            }
            break;
        case 3:
                traverse();
            break;
        case 4:
                exit(0);
            break;
        default:
            cout<<"Wrong Input\n";
        }

        cout<<"If u want to continue press 1 :-";
        cin>>ch;
    }while(ch==1);
}
