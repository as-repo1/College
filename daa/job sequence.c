#include<stdio.h>
int jobseq(int n,int id[],int profit[],int deadline[]){
	int i,j,dmax,result[20],cnt=0,tp=0;
    dmax=deadline[0];
	for(i=1;i<n;i++){
	if(dmax<deadline[i]){
		dmax=deadline[i];	
	}
}
printf("the dmax is %d",dmax);
	for(i=1;i<=dmax;i++){
		result[i]=-1;
		}
	for(i=0;i<n;i++){
		for(j=deadline[i];j>0;j--){
			if(result[j]==-1){
				result[j]=i;
				cnt++;
				tp+=profit[i];
				break; 
			}
		}
		if(cnt==dmax){
			break;
		}
		//return tp;
	}
	printf("\nmax profit: %d",tp);
   for(i=1;i<=dmax;i++){
   	if(result[i]!=-1){
	printf("\nthe completed job ids: %d",id[result[i]]);
	}
   }
   return tp;
}
void main(){
	int id[20],profit[20],temp,deadline[20];
	int i,j,n;
	printf("enter the numbers of jobs:");
	scanf("%d",&n);
	printf("enter the id,deadline and profit:\n ");
	for(i=0;i<n;i++){
		scanf(" %d %d %d",&id[i],&deadline[i],&profit[i]);
	}
	for(i=1;i<n-1;i++){
		for(j=0;j<n-i;j++){
			if(profit[j]<profit[j+1]){
				temp=profit[j+1];
				profit[j+1]=profit[i];
				profit[i]=temp;
				
				temp=id[j+1];
				id[j+1]=id[i];
				id[i]=temp;
				
				temp=deadline[j];
				deadline[j+1]=deadline[i];
				deadline[i]=temp;	
			}	
		}		
	}
	jobseq(n,id,profit,deadline);

}
