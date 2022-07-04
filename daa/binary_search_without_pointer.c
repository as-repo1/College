#include<stdio.h>
int binarySearch(int a[],int n,int key){
  int l=0,u=n-1,mid;
  while(l<=u){
    mid=(l+u)/2;
    if(a[mid]==key)
    return mid;
    else if(a[mid]==key)
    return mid;
    else if(a[mid]<key)
    l=mid+l;
    else
    u=mid-1;
  }
  return -1;
}
int main(){
  int n,a[10],i,key,x;
  printf("enter the array size : ");
  scanf("%d",&n);
  printf("enter array elements is assending order : \n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("which value you want to search : ");
  scanf("%d",&key);
  x=binarySearch(a,n,key);
  if(x==-1)
  printf("element not found\n");
  else
  printf("element found at %d\n",x+1);
  return 0;
}

