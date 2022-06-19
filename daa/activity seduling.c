#include<stdio.h>
void actvsel(int n,int s[],int ex[]){
int i,j,pe,result[20],cnt=0,tp=0;

	for(i=1;i<n;i++){
	
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
	}
	printf("\nmax profit: %d\n",tp);
   for(i=1;i<=dmax;i++){
   	if(result[i]!=-1){
	printf("the completed job ids: %d\n",id[result[i]]);
	}
   }
}
void main(){
	int st[20],endt[20],temp;
	int i,j,n;
	printf("enter the numbers of object:");
	scanf("%d",&n);
	printf("enter the start time and end time:\n ");
	for(i=0;i<n;i++){
		scanf("%d %d",&s[i],&endt[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n-i;j++){
			if(endt[i]<endt[j]){
				temp=endt[j];
				endt[j]=endt[i];
				endt[i]=temp;
				
				temp=st[j];
				st[j]=st[i];
				st[i]=temp;	
			}	
		}		
	}
	actvsel(n,st,endt);
}
