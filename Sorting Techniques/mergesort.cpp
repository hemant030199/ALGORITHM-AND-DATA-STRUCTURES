/*
*Program Written by :- Hemant Kumar Mangwani on 04/10/17
*/

#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
ll c=0;
 void merge(int A[ ] , int start, int mid, int end) {
 //stores the starting position of both parts in temporary variables.
int p = start ,q = mid+1;

int Arr[end-start+1] , k=0;

for(int i = start ;i <= end ;i++) {

    if(p > mid)      //checks if first part comes to an end or not .
       Arr[ k++ ] = A[ q++] ;

   else if ( q > end)   //checks if second part comes to an end or not
       Arr[ k++ ] = A[ p++ ];

   else if( A[ p ] < A[ q ])
   {//checks which part has smaller element.
      Arr[ k++ ] = A[ p++ ];
    c++;
   }
   else
   {
      Arr[ k++ ] = A[ q++];
   c++;
   }
 }
  for (int p=0 ; p< k ;p ++) {
   /* Now the real array has elements in sorted manner including both
        parts.*/
     A[ start++ ] = Arr[ p ] ;
  }
}

   void merge_sort (int A[ ] , int start , int end )
   {
           if( start < end ) {
           int mid = (start + end ) / 2 ;           // defines the current array in 2 parts .
           merge_sort (A, start , mid ) ;                 // sort the 1st part of array .
           merge_sort (A,mid+1 , end ) ;              // sort the 2nd part of array.

         // merge the both parts by comparing elements of both the parts.
          merge(A,start , mid , end );
   }
}
int main()
{
 speed;

   ll n,i,j;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
    cin>>a[i];
 ll start=0,end=n-1;

 merge_sort(a,start,end);

   for(i=0;i<n;i++)
    cout<<a[i]<<" ";
 cout<<endl<<c;

return 0;
}


