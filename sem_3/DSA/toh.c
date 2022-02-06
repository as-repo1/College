#include<stdio.h> 
void toh(int n, char a, char b,char c) 
{ 
 if(n>0) 
 { 
   toh(n-1,a,c,b); 
   printf("\nMove %d disk from %c to %c", n,a,c); 
   toh(n-1,b,a,c); 
 } 
} 
int main() 
{ 
 int n; 
 printf("Enter the no. of disks: "); 
 scanf("%d", &n); 
 toh(n,'A','B','C'); 
 return 0;   
} 

