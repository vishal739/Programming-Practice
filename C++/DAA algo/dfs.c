#include<stdio.h>
#include<stdlib.h>
#define max 6

void dfs(int graph[][max], int visited[], int start) {
    int stack[max], top = -1, i;
    printf("%c  ", start + 65);
    stack[++top] = start;
    visited[start] = 1;
    while (top != -1) {
        start = stack[top--];
        for (i = 0; i < max; i++) {
            if (graph[start][i] == 1 && visited[i] == 0) {
                stack[++top] = i;
                
                printf("%c  ", i + 65);
                visited[i] = 1;
            }
        }
    }
}

void readGraph(int graph[][max]){
    int n;
    FILE *fp;
    fp=fopen("bfsg.txt","r");
    if(fp==NULL){
        printf("file open failed\n");
        return;
    }
    fscanf(fp,"%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            fscanf(fp,"%d",&graph[i][j]);
        }
    }
    fclose(fp);
}

int main() {
    int visited[max] = {0};
    int graph[6][6];
    
    readGraph(graph);
    // int graph[6][6]={0, 1, 1, 0, 0, 0,
    //                 1, 0, 0, 1, 1, 0,
    //                 1, 0, 0, 0, 1, 0,
    //                 0, 1, 0, 0, 1, 1,
    //                 0, 1, 1, 1, 0, 1,
    //                 0, 0, 0, 1, 1, 0,
        
    // };

    dfs(graph, visited, 0);
    return 0;
}
