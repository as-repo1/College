#include<stdio.h>
#define MAX=10
int min,max,a[MAX]; 
	void maxmin(int i,int j){  
	int mid,max1,min1;
		if(i==j){
			min=max=a[i];
		}
		else if(i==j-1){
			if(a[i]<a[j]){
				max=a[j];
				min=a[i];
			}
			else{
				max=a[i];
				min=a[j];
			}
		}	
		else{
			mid=(i+j)/2;
		maxmin(i,mid);
		max1=max;
			min1=min;
		maxmin(mid+1,j);
		if(max1>max){
			max=max1;
			if(min1<min){
				min=min1;	
			}
		}	
	}
}
	int main(){
	int i,n;
	printf("Enter the size of the element:- ");
	scanf("%d",&n);
	printf("Enter the values:- \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	maxmin(0,n-1);
	printf("The minimum number is %d \n",min);
	printf("The maximum number is %d",max);
	return 0;
}
	
	

