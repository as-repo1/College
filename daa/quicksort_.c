#include<stdio.h>
int partition(int a[],int low,int high);
void quicksort(int a[],int i,int j);

int partition(int a[],int low,int high){
	int pivot=a[low];
	int i=low+1;
	int j=high;
	int temp;
	while(i<j){
		while(a[i]<=pivot){
			i++;	
		}
		while(a[j]>pivot){
			j--;
		}
		if(i<j){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
		temp=a[low];
		a[low]=a[j];
		a[j]=temp;	
		return j;	

}
void quicksort(int a[],int i,int j){
int partitionIndex;
if(i<j){
partitionIndex=partition(a,i,j);
quicksort(a,i,partitionIndex-1);
quicksort(a,partitionIndex+1,j);
}
}



int main(){
int n,a[10],i;
int low,high,k;
printf("enter the size of the element :- ");
scanf("%d",&n);
printf("enter the values :- \n");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
low=0;
high=n-1;
quicksort(a,low,high);
printf("after sorting the array :- \n");
for(i=0;i<n;i++){
	printf(" %d\t",a[i]);
}
return 0;
}
