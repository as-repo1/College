#include<stdio.h> 
int main() 
{ 
 int a[100],i,n,lb,ub,mid,x; 
 printf("Enter the no of elements:"); 
 scanf("%d",&n); 
 printf("Enter the elements in ascending order\n"); 
 for(i=0;i<n;i++) 
   scanf("%d",&a[i]); 
 printf("Enter the element to be searched: "); 
 scanf("%d",&x); 
 lb=0; 
 ub=(n-1); 
 while(lb<=ub) 
 { 
   mid=((lb+ub)/2); 
   if(a[mid]==x) 
   { 
     printf("Element is in the position %d.",mid+1); 
     break; 
  } 
   else if(a[mid]>x) 
     ub=mid-1; 
   else 
     lb=mid+1; 
 } 
 if(lb>ub) 
   printf("Element not found!"); 
 return 0; 
} 

