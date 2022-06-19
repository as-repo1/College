#include<stdio.h>
int count=1;
void merge(int A[],int low,int mid,int high,int n){
	int B[n];
	int i,j,k;
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high){
		if(A[i]<A[j]){
			B[k++]=A[i++];
			
		}
		else{
			B[k++]=A[j++];
			
		}
	}
		while(i<=mid){
			B[k++]=A[i++];
			
		}
		while(j<=high){
			B[k++]=A[j++];
		}
		printf("the auxillary steps are %d:->",count);
		for(k=low;k<=high;k++){
		printf("%d\t",B[k]);
		}
		printf("\n");
		for(k=low;k<=high;k++){
			A[k]=B[k];
		}
		count++;
		} 
	
	void mergeSort(int A[],int low,int high,int n){
		int mid;
		if(low<high){
			mid=(low+high)/2;
			mergeSort(A,low,mid,n);
			mergeSort(A,mid+1,high,n);
			merge(A,low,mid,high,n);
		}	
	}	


int main(){
int i,n;
int low,high,k,A[10];
printf("enter the size of the element:-\n");
scanf(" %d",&n);
printf("enter the values:-\n");
for(i=0;i<n;i++){
	scanf("%d",&A[i]);
}
low=0;
high=n-1;
mergeSort(A,low,high,n);
printf("after sorting the array:-\n");
for(k=0;k<n;k++){
	printf("%d\t",A[k]);
}
printf("\n");
return 0;
}
