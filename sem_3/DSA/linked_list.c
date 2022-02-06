#include<stdio.h> 
#include<stdlib.h> 
struct node{ 
   int data; 
   struct node *next; 
}; 
struct node *start=NULL; 
struct node *new_node,*temp,*prev_node,*curr_node,*n,*t; 
int count() 
{ 
 int c=0; 
 temp=start; 
 while(temp!=NULL) 
 { 
   c++; 
   temp=temp->next; 
 } 
 return c; 
} 
void insert_begining() 
{ 
 if(start==NULL) 
   printf("\nNo linked list found."); 
 else 
 { 
   printf("\nInsert a node at the begining of the list\n"); 
   new_node=(struct node*)malloc(1*sizeof(struct node)); 
   printf("\nEnter the value of node:"); 
   scanf("%d",&new_node->data); 
   new_node->next=start; 
   start=new_node; 
 } 
} 
void insert_end() 
{ 
 if(start==NULL) 
   printf("\nNo linked list found."); 
 else 
 { 
   printf("\nInsert a node at the end of the list\n"); 
   new_node=(struct node*)malloc(1*sizeof(struct node)); 
   printf("\nEnter the value of node:"); 
   scanf("%d",&new_node->data); 
   new_node->next=NULL; 
   temp=start; 
   while(temp->next!=NULL) 
    temp=temp->next; 
   temp->next=new_node; 
 } 
} 
void insert_at_position() 
{ 
 int i,p,c; 
 c=count(); 
 printf("\nEnter the position:"); 
 scanf("%d",&p); 
 printf("\nInsert a node after any position of the list\n"); 
 if(p==1) 
   insert_begining(); 
 else if(p==c) 
   insert_end(); 
 else if(p>c) 
   printf("Invalid choice!"); 
 else 
 { 
   new_node=(struct node*)malloc(1*sizeof(struct node)); 
   printf("\nEnter the value of node:"); 
   scanf("%d",&new_node->data); 
   temp=start; 
   for(i=1;i<p;i++) 
     temp=temp->next; 
   new_node->next=temp->next; 
   temp->next=new_node; 
 } 
} 
void insert_after_element() 
{ 
 int x; 
 printf("\nEnter the data: "); 
 scanf("%d",&x); 
 temp=start; 
 while(temp!=NULL && temp->data!=x) 
   temp=temp->next; 
 if(temp==NULL) 
   printf("\nElement not found!"); 
 else if(temp->data==x) 
 { 
   printf("\nInsert a node after any data of the list\n"); 
   new_node=(struct node*)malloc(1*sizeof(struct node)); 
   printf("\nEnter the value of node:"); 
   scanf("%d",&new_node->data); 
   new_node->next=temp->next; 
   temp->next=new_node; 
 } 
} 
void create() 
{ 
 char x='y'; 
 while(x=='y'|| x=='Y') 
 { 
   new_node=(struct node*)malloc(1*sizeof(struct node)); 
   printf("\nEnter the value of node:"); 
   scanf("%d",&new_node->data); 
   new_node->next=NULL; 
   if(start==NULL) 
    start=new_node; 
   else 
   { 
      temp=start; 
     while(temp->next!=NULL) 
      temp=temp->next; 
     temp->next=new_node; 
   } 
  printf("\nDo you want to create another node?"); 
  scanf(" %c",&x); 
 } 
} 
void display() 
{ 
 temp=start; 
 while(temp!=NULL) 
 { 
   printf("%d--->",temp->data); 
   temp=temp->next; 
 } 
 printf("NULL"); 
} 
void del_beg() 
{ 
 if(start==NULL) 
   printf("\nNo element to delete."); 
 else 
 { 
   temp=start; 
   printf("\nDeleted element:%d",temp->data); 
   start=temp->next; 
   free(temp); 
 } 
} 
void del_end() 
{ 
 if(start==NULL) 
   printf("\nNo element to delete."); 
 else if(start->next==NULL) 
 { 
   printf("\nDeleted element:%d",start->data); 
   start=NULL; 
 } 
 else 
 { 
   temp=start; 
   while(temp->next->next!=NULL) 
     temp=temp->next; 
   printf("\nDeleted element:%d",temp->next->data); 
   free(temp->next); 
   temp->next=NULL; 
 } 
} 
void del_at_position() 
{ 
 int i,p,c; 
 c=count(); 
 printf("\nEnter the position:"); 
 scanf("%d",&p); 
 if(p==1) 
   del_beg(); 
 else if(p==c) 
   del_end(); 
 else if(p>c) 
   printf("Invalid choice!"); 
 else 
 { 
  temp=start; 
   for(i=1;i<p-1;i++) 
     temp=temp->next; 
   printf("\nDeleted element:%d",temp->next->data); 
   t=temp->next; 
  temp->next=t->next; 
   free(t); 
 } 
} 
void del_after_element() 
{ 
 int x; 
 printf("\nEnter the data: "); 
 scanf("%d",&x); 
 temp=start; 
 while(temp!=NULL && temp->data!=x) 
   temp=temp->next; 
 if(temp==NULL) 
   printf("\nElement not found!"); 
 else if(temp->next==NULL) 
   printf("No element to delete!"); 
 else 
 { 
   printf("\nDeleted element:%d",temp->next->data); 
   t=temp->next; 
  temp->next=t->next; 
   free(t); 
 } 
} 
void reverse() 
{ 
 prev_node=NULL; 
 curr_node=start; 
 n=NULL; 
 while(curr_node!=NULL) 
 { 
   n=curr_node->next; 
   curr_node->next=prev_node; 
   prev_node=curr_node; 
   curr_node=n; 
 } 
 start=prev_node; 
 printf("\nReverse list is: "); 
 display(); 
} 
int main() 
{ 
 int ch; 
 printf("1.Creation\n2.Insertion at the begining\n3.Insertion at the end\n4.Insertion at a given position\n5.Insertion after a element\n6.Deletion at the begining\n7.Deletion at the end\n8.Deletion at a given position\n9.Deletion after a element\n10.Display\n11.Reverse a list\n12.Exit\n"); 
 while(1) 
 { 
   printf("\nEnter your choice:"); 
   scanf("%d",&ch); 
   switch(ch){ 
     case 1: 
       create(); 
       break; 
    case 2: 
      insert_begining(); 
      break; 
    case 3: 
      insert_end(); 
      break; 
    case 4: 
      insert_at_position(); 
      break; 
    case 5: 
      insert_after_element(); 
      break; 
    case 6: 
      del_beg(); 
      break; 
    case 7: 
      del_end(); 
      break; 
    case 8: 
      del_at_position(); 
      break; 
    case 9: 
      del_after_element(); 
      break; 
    case 10: 
       display(); 
       break; 
     case 11: 
       reverse(); 
       break; 
     case 12: 
       exit(1); 
    default: 
       printf("Out of choice! Try agian."); 
  } 
 } 
 return 0; 
}

