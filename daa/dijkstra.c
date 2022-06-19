#include<stdio.h>
#define INF 99999;
int graph[100][100],pre[10];

int main(){
	int n,i,j,src;
	printf("Enter the no of vertices\n");
	scanf("%d",&n);
	printf("Enter the inputs of the Graph\n");
	for( i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&graph[i][j]);
			if(graph[i][j]==0){
				graph[i][j]=INF;
			}
		}
	}
	printf("Enter the src vertex\n");
	scanf("%d",&src);
	
	dijkstra(n,src);	
}
void path(int src,int des){
	if(pre[des]==src){
		printf("The path is %d src-> %d des ",src,des);
		return;
	}
	path(src,pre[des]);
	path(pre[des],des);
}
void dijkstra(int n,int v){
	int vis[10],dis[10],i,w,u,min,des;
	for(i=1;i<=n;i++){
		vis[i]=0;
		pre[i]=1;
		dis[i]=graph[v][i];
	}
	dis[v]=0;
	vis[v]=1;
	pre[v]=0;
	for(i=2;i<=n;i++){
		min=INF;
		for(w=1;w<=n;w++){
			if(dis[w]<min && vis[w]!=1){
				min=dis[w];
				u=w;
			}
		}
		vis[u]=1;
		for(w=1;w<=n;w++){
			if(dis[u]+graph[u][w]<dis[w] && vis[w]!=1){
				dis[w]=dis[u]+graph[u][w];
				pre[w]=u;
			}
		}
	}
	printf("The dis Array required is \n");
	for(i=1;i<=n;i++){
		printf("%d -> %d = %d and the parent edge is %d\n",v,i,dis[i],pre[i]);
	}
	printf("\n");
    printf("enter the destinaion/n");
    scanf("%d",&des);
	path(v,des);
}

