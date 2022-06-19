#include<stdio.h>
#include<conio.h>
int binarysearch(int *,int ,int )
int i,a[10],n,l=0,h=n-1,m,d;
	printf("write the size of the array: ");
	scanf("%d",&n);
   	printf("write down the numbers you want to insert:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the value you want to search: ");
	scanf("%d",&d);
	int index=binarySearch(a,d,0,n-1);
	if(index==-1){
		printf("the element isn't found");
	}
	else{
		printf("the value is found at index %d",index+1);
	}
	return 0;
	}
	int binarySearch(int a[],int d,int l,int h){
		int m;
		while(l<=h){
			m=(l+h)/2;
		
		if(d==a[m]){
			return m;
		}
		else if(a[m]<d){
			l=m+1;
		}
		else{
			h=m-1;
		}
        }
	return -1;	
	}
			
			
	
		
	
	
	
	
	
	
