#include<stdio.h>
int fibonacci(int a,int b,int n) 
{ 
 if(n>0) 
 { 
   printf(" %d",a); 
   return fibonacci(b,a+b,n-1); 
 } 
} 
int main() 
{ 
 int n; 
 printf("Enter a number: "); 
 scanf("%d",&n); 
 fibonacci(0,1,n); 
 return 0; 
} 

