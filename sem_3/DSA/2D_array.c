#include<stdio.h> 
int main() 
{ 
 int a[50][50],b[1250][3],i,j,m,n,nonzero=0,zero=0,x,s; 
 printf("Enter two range: "); 
 scanf("%d %d",&m,&n); 
 printf("Enter the elements:\n"); 
 for(i=0;i<m;i++) 
 { 
   for(j=0;j<n;j++) 
   { 
     scanf(" %d", &a[i][j]); 
     if(a[i][j]!=0) 
       nonzero++; 
     else 
       zero++; 
  }   
 } 
 printf("Entered matrix is:\n"); 
 for(i=0;i<m;i++) 
 { 
   for(j=0;j<n;j++) 
     printf(" %d", a[i][j]); 
   printf("\n"); 
 }   
 x=nonzero+1; 
 b[0][0]=m; 
 b[0][1]=n; 
 b[0][2]=nonzero; 
 s=1; 
 for(i=0;i<m;i++) 
 { 
   for(j=0;j<n;j++) 
   { 
     if(a[i][j]!=0) 
     { 
       b[s][0]=i; 
       b[s][1]=j; 
       b[s][2]=a[i][j]; 
       s++; 
    } 
  } 
 } 
 printf("Sparse matrix using 3 tuple method:\n"); 
 for(i=0;i<x;i++) 
 { 
   for(j=0;j<3;j++) 
     printf(" %d",b[i][j]); 
   printf("\n"); 
 } 
 return 0; 
} 

