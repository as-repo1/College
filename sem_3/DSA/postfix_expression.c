#include<stdio.h> 
#include<math.h> 
#include<ctype.h> 
#define maxsize 10 
int stck[maxsize],tos=-1; 
void push(int x) 
{ 
 if(tos==maxsize-1) 
   printf("\nStack overflowed."); 
 else 
 { 
   tos++; 
   stck[tos]=x; 
 } 
} 
int pop() 
{ 
 int y=-1; 
 if(tos==-1) 
   printf("\nStack underflowed."); 
 else 
 { 
   y=stck[tos]; 
   tos--; 
 } 
 return y; 
} 
int main() 
{ 
 int x,y,z,val,i=0; 
 char p[100]; 
 printf("Enter a postfix expression: "); 
 gets(p); 
 while(p[i]!='\0') 
 { 
   if(isalpha(p[i])) 
   { 
     printf("\nEnter the value of the oparand %c: ",p[i]); 
     scanf("%d",&val); 
     push(val); 
  } 
  else 
  { 
    x=pop(); 
    y=pop(); 
    switch(p[i]) 
    { 
      case '+': 
      z=y+x; 
      break; 
      case '-': 
      z=y-x; 
      break; 
      case '*': 
      z=y*x; 
      break; 
      case '/': 
      z=y/x; 
      break; 
      case '%': 
      z=y%x; 
      break; 
      case '^': 
      z=pow(y,x); 
      break; 
    } 
  push(z);   
  } 
  i++;   
 } 
 printf("\nThe evalueted result of postfix expression = %d", stck[tos]); 
 return 0; 
} 

