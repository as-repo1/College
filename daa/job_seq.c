#include<stdio.h>
int d[10],p[10],n,dmax,time[10];
char id[10];
void sort(){
	int i,j,k;
	char t;
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			if(p[i] < p[j+1]){
				
				k=p[j];
				p[j]=p[j+1];
				p[j+1]=k;
				
				t=id[j];
				id[j]=id[j+1];
				id[j+1]=t;
				
				k=d[j];
				d[j]=d[j+1];
				d[j+1]=k;
			}
		}
	}
	int jobseq(){
		int i,j,k,sum=0,c=0;
		dmax=d[0]
		for(i=0;i<n;i++){
			if(dmax < d[i]){
				dmax=d[i];
			}
		}
		printf("the max dedline of jobs: /n");
		
	}
}
