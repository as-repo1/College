#include<stdio.h> 
#include<stdlib.h> 
#define maxsize 3 
int queue[maxsize],f=-1,r=-1; 
void insert() 
{ 
 int x; 
 if(r==maxsize-1) 
   printf("\nQueue overflowed."); 
 else 
 { 
   if(f==-1 && r==-1) 
   { 
     f=0; 
     r=0; 
  } 
  else 
    r+=1; 
  printf("\nEnter a value: "); 
   scanf("%d",&x); 
  queue[r]=x; 
 } 
} 
int deletion() 
{ 
 int y; 
 if(f==-1 && r==-1) 
   printf("\nQueue underflowed."); 
 else 
 { 
   y=queue[f]; 
   if(f==r) 
   { 
     f=-1; 
     r=-1; 
  } 
  else 
    f+=1; 
  printf("\nDeleted element is %d",y); 
  return y; 
 } 
} 
void display() 
{ 
 int i; 
 if(f==-1 && r==-1) 
   printf("\nThe queue is empty."); 
 else 
 { 
   printf("\nThe queue is:"); 
   for(i=f;i<=r;i++) 
     printf(" %d",queue[i]); 
 } 
} 
int main() 
{ 
 int ch; 
 printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit"); 
 while(1) 
 { 
   printf("\nEnter your choice:"); 
   scanf("%d",&ch); 
   switch(ch) 
   { 
     case 1: 
     insert(); 
     break; 
     case 2: 
     deletion(); 
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

