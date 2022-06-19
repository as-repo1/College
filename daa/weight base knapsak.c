#include<stdio.h>

void knapsack(int n,float p[],float wts[],float cap){
	int i,j,m;
    float tp=0.0;
	float x[20];
	m=cap;
	for(i=0;i<n;i++)
	x[i]=0.0;
	for(i=0;i<n;i++){
		if(wts[i]>m){
			break;
		}
		else{
			x[i]=1.0;
			tp=tp+p[i];
			m=m-wts[i];	
		}
	}
	if(i<n){
		x[i]=(float)m/(float)wts[i];
		tp=tp+(x[i]*p[i]);
	}
	printf("\nthe result vectors are: ");
		for(i=0;i<n;i++){
	printf("%f\t",x[i]);
}
	printf("\nmax profit: %f ",tp);
}

void main(){
	float p[20],wts[20],cap,temp,ratio[20];
	int i,j,n;
	printf("enter the numbers of objects:");
	scanf("%d",&n);
	printf("enter the profit and weights:\n ");
	for(i=0;i<n;i++){
		scanf("%f %f",&p[i],&wts[i]);
	}
	printf("\nenter the capacity: ");
	scanf("%f",&cap);
	for(i=0;i<n;i++){
		ratio[i]=p[i]/wts[i];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(wts[i]>wts[j]){
			
				
				temp=p[j];
				p[j]=p[i];
				p[i]=temp;
				
				temp=wts[j];
				wts[j]=wts[i];
				wts[i]=temp;
				
			}
			
		}
			
	}
	 knapsack(n,p,wts,cap);
}

