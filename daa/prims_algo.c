#include <stdio.h>
#define INF 9999
int mincost = 0, costmatrix[10][10], visited[10] = {0}, i, j, n, min;
void prims(int n)
{
    int k, ne = 1, v1, v2;
    visited[1] = 1;
    while (ne < n)
    {
        min = INF;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (costmatrix[i][j] != INF && visited[i] == 1 && visited[j] == 0)
                {
                    if (costmatrix[i][j] < min)
                    {
                        min = costmatrix[i][j];
                        v1 = i;
                        v2 = j;
                    }
                }
            }
        }
        //sleep(1);
        printf("edge %d =(%d-->%d)\n", ne++, v1, v2);
        visited[v1] = visited[v2] = 1;
        mincost = mincost + min;
    }
    printf("The minimum cost is %d\n",mincost); 
}
int main()
{
    printf("Enter the number of vertices:\n");
    scanf("%d",&n);
    printf("Enter the edge cost:\n");
    for ( i = 1; i <= n; i++)
    {
        for (j = 1; j <=n; j++)
        {
            scanf("%d",&costmatrix[i][j]);
            if ( costmatrix[i][j]==0)
            {
                costmatrix[i][j]=INF;
            }
            
        }
        
    }
    printf("The adjancey matrix is \n");
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n; j++)
        {
            printf("%d\t",costmatrix[i][j]);
        }
        
        printf("\n");
    }
    prims(n);
    return 0;
    
}
