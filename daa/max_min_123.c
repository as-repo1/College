#include<stdio.h>
int a[10]; 
	void maxmin(int i,int j,int *max,int *min){  
	int mid,max1,min1,k;
		if(i==j){
			*max=a[i];
			*min=a[j];
		}
		else if(i==j-1){
			if(a[i]<a[j]){
				*max=a[j];
				*min=a[i];
			}
			else{
				*max=a[i];
				*min=a[j];
			}
		}	
		else{
			mid=(i+j)/2;
		maxmin(i,mid,max,min);
		max1=*max;
		min1=*min;
		printf("\n");
		for (k=i ;k<=mid;k++)
			printf("%d\t",a[k]);
		printf("\n");
		printf("max=%d, min=%d\n",max1,min1);
		maxmin(mid+1,j,max,min);
		printf("\n");
		for (k=mid+1;k<=j;k++)
			printf("%d\t",a[k]);
			printf("\n");
			printf("max=%d, min=%d\n",*max,*min);
		
		if(max1>*max){
			*max=max1;
			if(min1<*min){
				*min=min1;	
			}
		}	
	}
}
	int main(){
	int i,n,x,y;
	printf("Enter the size of the element:- ");
	scanf("%d",&n);
	printf("Enter the values:- \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	maxmin(0,n-1,&x,&y);
	printf("The minimum number is %d \n",x);
	printf("The maximum number is %d",y);
	return 0;
}
	
	

