#include<stdio.h> 
#include<stdlib.h> 
#define max 3 
int cq[max],f=-1,r=-1; 
void insert() 
{ 
 int x; 
 if((f==0 && r==max-1) || (f==r+1)) 
   printf("\nQueue overflowed."); 
 else 
 { 
   printf("Enter your element to be inserted: "); 
   scanf("%d",&x); 
   if(f==-1 && r==-1) 
   { 
     f=0; 
     r=0; 
   } 
   else if(r==max-1) 
     r=0; 
   else 
     r+=1; 
   cq[r]=x; 
 }   
} 
void deletion() 
{ 
 int y; 
 if(f==-1 && r==-1) 
   printf("\nQueue underflowed."); 
 else 
 { 
   y=cq[f]; 
   if(f==r) 
   { 
     f=-1; 
     r=-1; 
  } 
  else if(f==max-1) 
    f==0; 
  else 
    f+=1; 
  printf("Deleted element is:%d",y); 
 } 
} 
void display() 
{ 
 int i; 
 if(f==-1 && r==-1) 
   printf("\nThe queue is empty."); 
 else 
 { 
    printf("The circular queue is: "); 
   if(f<=r) 
   { 
     for(i=f;i<=r;i++) 
       printf(" %d",cq[i]); 
   } 
   else 
   { 
    for(i=f;i<=max-1;i++) 
      printf(" %d",cq[i]); 
    for(i=0;i<=r;i++) 
      printf(" %d",cq[i]); 
   } 
 } 
} 
int main() 
{ 
 int ch; 
 printf("1.Insertion\n2.Deletion\n3.Dispaly\n4.Exit\n"); 
 while(1) 
 { 
   printf("\nEnter your choice: "); 
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

