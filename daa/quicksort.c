#include<stdio.h>
int partition(int A[],int low,int high);
void quicksort(int A[],int i,int j);

int partition(int A[],int low,int high){
	int pivot=A[low];
	int i=low+1;
	int j=high;
	int temp;
	while(i<j){
		while(A[i]<=pivot){
			i++;	
		}
		while(A[j]>pivot){
			j--;
		}
		if(i<j){
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		}
	}
		temp=A[low];
		A[low]=A[j];
		A[j]=temp;	
		return j;	

}
void quicksort(int A[],int i,int j){
int partitionIndex;
if(i<j){
partitionIndex=partition(A,i,j);
quicksort(A,i,partitionIndex-1);
quicksort(A,partitionIndex+1,j);
}
}



int main(){
int n,A[10],i;
int low,high,k;
printf("enter the size of the element\n:-");
scanf("%d",&n);
printf("enter the values:-\n");
for(i=0;i<n;i++){
	scanf("%d",&A[i]);
}
low=0;
high=n-1;
quicksort(A,low,high);
printf("after sorting the array:-\n");
for(i=0;i<n;i++){
	printf(" %d\t",A[i]);
}
return 0;
}
