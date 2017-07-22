#include<bits/stdc++.h>
using namespace std;
int lsearch(int key,int a[],int n)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==key){
		 return i;
		 flag=1;
		} 
	}
	if(flag==0) return -1;
}

void Insert(int a[],int pos,int elem,int n)
{
	for(int i=n-1;i>=pos;i--)
	   a[i+1]=a[i];
	a[pos]=elem;
}

int Delete(int a[],int pos,int n)
{
	if(pos>n)
	 cout<<"Invalid pos\n";
    else
    {
	for(int i=pos;i<n;i++)
	   a[i]=a[i+1];
	 return 1;  
}
}

void traverse(int a[],int n)
{
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}

int main()
{
	int i,n,ans,key,elem,pos;
	cout<<"\n n:-";
	cin>>n;
	int a[n];
	cout<<"\narray:-"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	int t;
while(1)
{
	cout<<"\nEnter your choice \n 1.Seach\n 2.Insert\n3.Delete\n4.Traverse\n5.Exit";
	cin>>t;
	switch(t)
	{
	case 1:
	cout<<"\n KEY:-";
	cin>>key;
	ans=lsearch(key,a,n);
    if(ans==-1) cout<<"\n Element Not found"<<endl;
    else cout<<"\n Element found on "<<ans+1<<endl;
    traverse(a,n);
    break;
    case 2:
    cout<<"\n Pos:-";
	cin>>pos;
	pos--;
	cout<<"\n Element:-";
	cin>>elem;
	n++;
	Insert(a,pos,elem,n);
    traverse(a,n);
    break;
     case 3:
    cout<<"\n Pos:-";
	cin>>pos;
	pos--;
ans=Delete(a,pos,n);
if(ans==1)
n--;
    traverse(a,n);
    break;
    case 4: 
        traverse(a,n);
        break;
    case 5:
    	 exit(0);
	}
}
	return 0;
}
