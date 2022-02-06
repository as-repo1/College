#include<stdio.h> 
int main() 
{ 
 int a[100],i,n,x; 
 printf("Enter the range:"); 
 scanf("%d",&n); 
 printf("Enter the elements\n"); 
 for(i=0;i<n;i++) 
   scanf("%d",&a[i]); 
 printf("Enter the element to be searched: "); 
 scanf("%d",&x); 
 for(i=0;i<n;i++) 
 { 
   if(a[i]==x) 
   { 
     printf("Element is in the position %d.",i+1); 
     break; 
  } 
 } 
 if(i==n) 
   printf("Element not found!"); 
 return 0;   
}  

