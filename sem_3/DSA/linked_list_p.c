#include<stdio.h> 
#include<stdlib.h> 
struct node{ 
  int data; 
  struct node *next; 
  struct node *prev; 
}; 
struct node *start=NULL; 
struct node *new_node,*temp,*n, *curr; 
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
void create() 
{ 
 char y='y'; 
 while(y=='y' || y=='Y') 
 { 
   new_node=(struct node*)malloc(1*sizeof(struct node)); 
   printf("\nEnter the value of the node: "); 
   scanf("%d",&new_node->data); 
   new_node->prev=NULL; 
   new_node->next=NULL; 
   if(start==NULL) 
     start=new_node; 
   else 
   { 
     temp=start; 
     while(temp->next!=NULL) 
       temp=temp->next; 
     temp->next=new_node; 
     new_node->prev=temp; 
  } 
  printf("\nDo you want to create another one?"); 
  scanf(" %c",&y); 
 } 
} 
void ins_beg() 
{ 
 int c; 
 c=count(); 
 if(c==0) 
   printf("\nNo linked list found."); 
 else 
 { 
   new_node=(struct node*)malloc(1*sizeof(struct node)); 
   printf("\nEnter the value of the node: "); 
   scanf("%d",&new_node->data); 
   new_node->prev=NULL; 
   new_node->next=start; 
   start->prev=new_node; 
   start=new_node; 
 } 
} 
void ins_end() 
{ 
 int c; 
 c=count(); 
 if(c==0) 
   printf("\nNo linked list found."); 
 else 
 { 
   temp=start; 
   while(temp->next!=NULL) 
    temp=temp->next; 
   new_node=(struct node*)malloc(1*sizeof(struct node)); 
   printf("\nEnter the value of the node: "); 
   scanf("%d",&new_node->data); 
   new_node->next=NULL; 
   new_node->prev=temp; 
   temp->next=new_node; 
 } 
} 
void ins_after_value() 
{ 
 int x,c; 
 c=count(); 
 if(c==0) 
   printf("\nNo linked list found."); 
 else 
 { 
   printf("\nEnter the data: "); 
   scanf("%d",&x); 
   temp=start; 
   while(temp!=NULL && temp->data!=x) 
     temp=temp->next; 
   if(temp==NULL) 
     printf("Element not present!"); 
   else if(temp->data==x) 
   { 
     new_node=(struct node*)malloc(1*sizeof(struct node)); 
     printf("\nEnter the value of the node: "); 
     scanf("%d",&new_node->data); 
     if(temp->next==NULL) 
     { 
       new_node->next=temp->next; 
       new_node->prev=temp; 
       temp->next=new_node; 
     } 
     else 
     { 
       temp->next->prev=new_node; 
       new_node->next=temp->next; 
       new_node->prev=temp; 
       temp->next=new_node; 
     } 
   }   
 } 
} 
void ins_at_pos() 
{ 
 int i,p,c; 
 c=count(); 
 printf("\nEnter the position:"); 
 scanf("%d",&p); 
 if(p==1) 
   ins_beg(); 
 else if(p==c+1) 
   ins_end(); 
 else if(p>c+1 || p<=0) 
   printf("Invalid choice!"); 
 else 
 { 
   new_node=(struct node*)malloc(1*sizeof(struct node)); 
   printf("\nEnter the value of node:"); 
   scanf("%d",&new_node->data); 
   temp=start; 
   for(i=1;i<p-1;i++);
    temp=temp->next; 
   temp->next->prev=new_node; 
   new_node->prev=temp; 
   new_node->next=temp->next; 
   temp->next=new_node; 
 } 
} 
void del_beg() 
{ 
 temp=start; 
 if(temp==NULL) 
   printf("\nNo element to delete."); 
 else if(temp->next==NULL) 
 { 
   printf("\nDeleted element: %d", temp->data); 
   start=NULL; 
   free(temp); 
 } 
 else 
 { 
   printf("\nDeleted element: %d", temp->data); 
    start=temp->next; 
   start->prev=NULL; 
   free(temp); 
 } 
} 
void del_end() 
{ 
 temp=start; 
 if(temp==NULL) 
   printf("\nNo element to delete."); 
 else if(temp->next==NULL) 
 { 
   printf("\nDeleted element: %d",temp->data); 
  start=NULL; 
   free(temp); 
 } 
 else 
 { 
   while(temp->next!=NULL) 
     temp=temp->next; 
   printf("\nDeleted element: %d",temp->data); 
  temp->prev->next=NULL; 
  free(temp); 
 } 
} 
void del_after_value() 
{ 
 int x; 
 printf("\nEnter the data: "); 
 scanf("%d",&x); 
 temp=start; 
 while(temp!=NULL && temp->data!=x) 
   temp=temp->next; 
 if(temp==NULL) 
   printf("Element not found!"); 
 else if(temp->next==NULL) 
   printf("No element to delete!"); 
 else 
 { 
   n=temp->next; 
   printf("\nDeleted element: %d",temp->next->data); 
   if(n->next==NULL) 
     temp->next=NULL; 
   else 
   { 
     n->next->prev=temp; 
     temp->next=n->next; 
   } 
  free(n); 
 } 
} 
void del_at_pos() 
{ 
 int i,p,c; 
 c=count(); 
 if(c==0) 
  printf("\nNo element to delete."); 
 else 
 { 
   printf("\nEnter the position: "); 
   scanf("%d",&p); 
   if(p>c || p<=0) 
     printf("Invalid position!"); 
   else if(p==1) 
     del_beg(); 
   else if(p==c) 
     del_end(); 
   else 
   { 
     temp=start; 
     for(i=1;i<p-1;i++);
       temp=temp->next; 
     printf("\nDeleted element: %d", temp->data); 
     temp->prev->next=temp->next; 
     temp->next->prev=temp->prev; 
     free(temp); 
   } 
 } 
} 
void display() 
{ 
 printf("NULL--->"); 
 temp=start; 
 while(temp!=NULL) 
 { 
   n=temp; 
   printf("%d--->",temp->data); 
   temp=temp->next; 
 } 
 printf("NULL"); 
 printf("\n"); 
 printf("NULL--->"); 
 while(n!=NULL) 
 { 
   printf("%d--->",n->data); 
   n=n->prev; 
 } 
 printf("NULL");   
} 
void reverse() 
{ 
 curr=start; 
 n=NULL; 
 while(curr!=NULL) 
 { 
   n=curr->prev; 
   curr->prev=curr->next; 
   curr->next=n; 
   curr=curr->prev; 
   if(n!=NULL) 
     start=n->prev; 
 } 
 printf("Reverse list is: \n"); 
 display(); 
} 
int main() 
{ 
 int ch; 
 printf("1.Creation\n2.Insertion at the begining\n3.Insertion at the end\n4.Insertion at a given position\n5.Insertion after a element\n6.Deletion at the begining\n7.Deletion at the end\n8.Deletion at a given position\n9.Deletion after a element\n10.Display\n11.Reverse a list\n12.Exit\n"); 
 while(1) 
 { 
   printf("\nEnter your choice: "); 
   scanf("%d",&ch); 
   switch(ch) 
  { 
     case 1: 
       create(); 
       break; 
     case 2: 
       ins_beg(); 
       break; 
     case 3: 
       ins_end(); 
       break; 
     case 4: 
       ins_at_pos(); 
       break; 
    case 5: 
       ins_after_value(); 
       break; 
     case 6: 
       del_beg(); 
       break; 
     case 7: 
       del_end(); 
       break; 
    case 8: 
      del_at_pos(); 
      break; 
    case 9: 
      del_after_value(); 
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
       printf("Invalid choice! Try agian."); 
  } 
 } 
 return 0; 
} 

