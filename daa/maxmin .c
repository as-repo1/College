#include<stdio.h>
int min,max;
int a[10];
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
printf("enter the size of the element:-\n");
scanf(" %d",&n);
printf("enter the values:-\n");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}

maxmin(0,n-1);
printf("the minimum value is %d",min);
printf("\nthe maximum value is %d",max);
return 0;
}
	
	

