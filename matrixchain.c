#include<stdio.h>
int visited[10],cost[10][10],min,mincost=0,n;
int main(){
int i,j,ne=1,u,v;
printf("Enter the size of matrix");
scanf("%d",&n);
printf("Enter the cost ");
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        scanf("%d",&cost[i][j]);
        if(cost[i][j]==0){
            cost[i][j]=999;
        }
    }
}
visited[1]=1;
while (ne<n)
{
    for(i=1,min=999;i<=n;i++){
    for(j=1;j<=n;j++){
        if(cost[i][j]<min){
            if(visited[i]!=0){
                min=cost[i][j];
                u=i;
                v=j;
            }
        }
    }

    }
    if(visited[u]==0 || visited[v]==0){
        printf("edge %d(%d,%d) cost %d\n",ne++,u,v,min);
        mincost+=min;
        visited[v]=1;
    }
 cost[u][v]=cost[v][u]=999;

}
printf("mimimum cost %d",mincost);
return 0;
}
