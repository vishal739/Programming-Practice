#include <stdio.h>
#include <stdlib.h>
#define max 10

void bfs(int graph[][max], int visited[], int start)
{
    int queue[max], front = -1, rear = -1, i;
    queue[++rear] = start; 
    visited[start] = 1;
    while (rear != front)
    {
        start = queue[++front];
        if (start == 6)
        {
            printf("");
        }
        else
        {
            printf(" %c \t", start + 65);
        }

        for ( i = 0; i < max; i++)
        {
            if (graph[start][i] == 1 && visited[i] == 0)
            {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int visited[max] = {0};
    FILE *fp;
    fp = fopen("bfsg.txt", "r");
    if (fp == NULL)
    {
        printf("File not found \n");
        exit(1);
    }
    int n;
    fscanf(fp, "%d", &n);
    int graph[10][10];
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(fp, "%d", &graph[i][j]);
        }
    }
    fclose(fp);
    // printf("%d\n",n);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         printf("%d ",graph[i][j]);
    //     }
    //     printf("\n");
    // }
    bfs(graph, visited, 0);
    return 0;
}