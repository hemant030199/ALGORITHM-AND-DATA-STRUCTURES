/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/
#include<iostream>
using namespace std;
void insert(int[],int);
int main()
{
	int a[10],n,i,x,t;
	cin>>t;
	while(t--)
	{
    cin>>n;
	for( i=0;i<n;i++)
	cin>>a[i];
	insert(a,n);
	for(i=0;i<n;i++)
   cout<<a[i]<<" ";
   cout<<endl;
    }
	return 0;
}

void insert(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int temp=a[i];
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
