#include<stdio.h>
#include<stdlib.h>
int ch,a[100],i,n,x,tos=-1; 
void push() 
{ 
 if(tos==n-1) 
   printf("\nStack overflowed."); 
 else 
 { 
   printf("Enter a value: "); 
   scanf("%d",&x); 
   tos++; 
   a[tos]=x; 
 } 
} 
void pop() 
{ 
 if(tos<=-1) 
   printf("\nStack underflowed."); 
 else 
 { 
   printf("Deleted element is %d",a[tos]); 
   tos--; 
 } 
} 
void display() 
{ 
 if(tos>=0) 
 { 
   printf("\nThe elements are:\n"); 
   for(i=tos;i>=0;i--) 
     printf("%d\n",a[i]); 
 } 
 else 
  printf("\nThe stack is empty."); 
} 
int main() 
{ 
 printf("Enter the range: "); 
 scanf("%d", &n); 
 printf("1.Push\n2.Pop\n3.Display\n4.Exit\n"); 
 while(1) 
 { 
   printf("\nEnter your choice:"); 
   scanf("%d",&ch); 
   switch(ch) 
   { 
     case 1: 
       push(); 
       break; 
     case 2: 
       pop(); 
       break; 
     case 3: 
       display(); 
      break; 
     case 4: 
      exit(1); 
    default: 
      printf("Invalid Choice!"); 
   } 
 } 
 return 0; 
} 

