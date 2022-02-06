#include<stdio.h> 
#include<stdlib.h> 
void array(int a[],int n) 
{ 
 int j; 
 for(j=0;j<n;j++) 
  scanf("%d",&a[j]); 
} 
void insertionsort(int *q,int n) 
{ 
 int i,j,temp; 
 for(i=1;i<n;i++) 
 { 
  temp=*(q+i); 
  j=i-1; 
  while(*(q+j)>temp && j>=0) 
  { 
    *(q+j+1)=*(q+j); 
    j--; 
  } 
  *(q+j+1)=temp; 
 } 
} 
void selectionsort(int a[],int n) 
{ 
 int i,j,p,temp; 
 for(i=0;i<n-1;i++) 
 { 
  p=i; 
  for(j=i+1;j<n;j++) 
  { 
    if(a[p]>a[j]) 
      p=j; 
    if(p!=i) 
    { 
      temp=a[i]; 
      a[i]=a[p]; 
      a[p]=temp; 
    } 
  } 
 } 
} 
void merge(int a[],int l,int mid,int h) 
{ 
 int p=l,k=mid+1,m=l,b[10]; 
 while(p<=mid && k<=h) 
 { 
  if(a[p]<a[k]) 
  { 
    b[m]=a[p]; 
    p++; 
    m++; 
  } 
  else 
  { 
    b[m]=a[k]; 
    m++; 
    k++; 
  } 
 } 
 while(p<=mid) 
 { 
  b[m]=a[p]; 
  m++; 
  p++; 
 } 
 while(k<=h) 
 { 
  b[m]=a[k]; 
  m++; 
  k++; 
 } 
 for(m=l;m<=h;m++) 
  a[m]=b[m]; 
} 
void mergesort(int *a,int l,int h) 
{ 
 int mid; 
 if(l<h) 
 { 
  mid=(h+l)/2; 
  mergesort(a,l,mid); 
  mergesort(a,mid+1,h); 
  merge(a,l,mid,h); 
 } 
} 
int partition(int a[],int p,int r) 
{ 
 int i,j,x,t; 
 x=a[p]; 
 i=p; 
 j=r; 
 while(i<j) 
 { 
  while(a[i]<=x) 
    i++; 
  while(a[j]>x) 
    j--; 
  if(i<j) 
  { 
    t=a[i]; 
    a[i]=a[j]; 
    a[j]=t; 
  } 
  else 
  { 
    t=a[p]; 
    a[p]=a[j]; 
    a[j]=t; 
    return j; 
  } 
 } 
} 
void quicksort(int a[],int p,int r) 
{ 
 int q; 
 if(p<r) 
 { 
  q=partition(a,p,r); 
  quicksort(a,p,q-1); 
  quicksort(a,q+1,r); 
 } 
} 
void display(int *b,int n) 
{ 
 int j; 
 printf("The array is :\n"); 
 for(j=0;j<n;j++) 
   printf("%d ",*(b+j)); 
 printf("\n"); 
} 
int main() 
{ 
 int a[10],n=0,ch,f=1; 
 printf("1.Insertion sort\n2.Selection sort\n3.Merge sort\n4.Quick sort\n5.Exit"); 
 while(1) 
 { 
  printf("\nEnter Your Choice:"); 
  scanf("%d",&ch); 
  if(ch<5 && ch>0) 
  { 
    printf("Enter the size of an array:"); 
    scanf("%d",&n); 
    array(a,n); 
  } 
  switch(ch) 
  { 
    case 1: 
      insertionsort(a,n); 
      break; 
    case 2: 
      selectionsort(a,n); 
      break; 
    case 3: 
      mergesort(a,0,n-1); 
      break; 
    case 4: 
      quicksort(a,0,n-1); 
      break; 
    case 5: 
      exit(0); 
    default: 
      printf("Invalid choice!"); 
      f=0; 
  } 
  if(f==1) 
    display(a,n);  
 } 
  return 0; 
}

