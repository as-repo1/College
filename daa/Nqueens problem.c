#include<stdio.h>
#include<math.h>
int x[100];
int place(int k,int i){
		int j;
	for(j=1;j<=k-1;j++){
		if((x[j]==i)||(abs(x[j]-i))==(abs(j-k))){
			return 0;
		}	
	}
	return 1;
}
int Nqueens(int k,int n){
	int i,j,c,r;
	int idx;
	for(i=1;i<=n;i++){
		if(place(k,i)){
			x[k]=i;
			if(k==n){
			 for(idx=1;idx<=n;idx++)
			  {
				printf("%d\t",x[idx]);
			  }
			  printf("\n");
			  printf("CHESSBOARD\n");
			  for(r=1;r<=n;r++){
			  	for(c=1;c<=n;c++){
			  		if(x[r]==c){
			  			printf("Q[%d]\t",r);
			  		  }
			  		else{
					printf(" X\t");
				      }
			  	}
			  	printf("\n");
			  }
			printf("\n");
			}
			else{
				Nqueens(k+1,n);
			}    	
		}
    }
}
int main(){
	int n,k;
	printf("enter the dimension of the chessboard: \n");
	scanf("%d",&n);
	Nqueens(1,n);
	return 0;
}
