#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
  int a[100],i,n,p1=0,p2=0,max,min,pos,x,ch; 
  printf("Enter the range: "); 
  scanf("%d", &n); 
  printf("Enter the elements\n"); 
  for(i=0;i<n;i++) 
    scanf("%d", &a[i]); 
  printf("1.Find Maxterm and Minterm\n2.Insert an element\n3.Remove an element\n4.Display your array\n5.Exit\n"); 
  while(1) 
  { 
    printf("\nEnter your choice: "); 
    scanf("%d", &ch); 
    switch(ch) 
    { 
      case 1: 
        max=a[0]; 
        min=a[0]; 
        for(i=0;i<n;i++) 
        { 
          if(max<a[i]) 
          { 
              max=a[i]; 
               p1=i; 
          } 
          if(min>a[i]) 
          { 
              min=a[i]; 
               p2=i;   
          } 
     
        } 
        printf("%d is maximum and %d is the position\n", max, p1+1); 
        printf("%d is minimum and %d is the position", min, p2+1); 
        break; 
      case 2: 
        printf("Enter your position to insert: "); 
        scanf("%d",&pos); 
        printf("Enter your element: "); 
        scanf("%d",&x); 
        if(pos<=n) 
        { 
          for(i=n-1;i>=pos-1;i--) 
            a[i+1]=a[i]; 
          a[pos-1]=x; 
          n=n+1; 
          printf("\nEntered value is %d", a[pos-1]); 
        } 
        else 
          printf("out of bound.\n"); 
        break; 
      case 3: 
        printf("Enter the position you want to delete: "); 
        scanf("%d",&pos); 
        if(pos<=n) 
        { 
          for(i=pos-1;i<n-1;i++) 
          { 
            a[i]=a[i+1]; 
          } 
          n=n-1; 
        } 
        else 
          printf("Out of bound.\n");   
        break;  
      case 4: 
        for(i=0;i<n;i++) 
        { 
          printf("%d\t", a[i]); 
        } 
        printf("\n");   
        break; 
      case 5: 
        exit(1); 
      default : 
        printf("Invalid Choice!"); 
    } 
  } 
  return 0; 
} 

