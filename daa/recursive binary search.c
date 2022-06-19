#include<stdio.h>
int binarySearch(int [],int,int,int);
int main(){
	int i,a[10],n,l=0,h=n-1,m,d,ind;
	printf("Write the size of the array:\n ");
	scanf("%d",&n);
   	printf("Write down the numbers you want to insert:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the value you want to search: ");
	scanf("%d",&d);
	 ind=binarySearch(a,d,0,n-1);
	if(ind==-1){
		printf("The element isn't found");
	}
	else{
		printf("The value is found at index %d",ind+1);
	}
	return 0;
	}
	int binarySearch(int a[],int d,int l,int h){
		int m;
		
		if(l>h){
			return -1;
	    }
	    m=(l+h)/2;
		if(d==a[m]){
			return m;
		}
		else if(a[m]<d){
			return binarySearch(a,d,m+1,h);
			
		}
		else{
			return binarySearch(a,d,l,m-1);
			
		}
  
		
	}
			
			
		
	
	
	
	
	
	
