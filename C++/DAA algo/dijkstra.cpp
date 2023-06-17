#include <stdio.h>
#include <limits.h>

#define V 6

void printPath(int parent[], int v)
{
    if (v == -1)
        return;

    printPath(parent, parent[v]);
    printf("%c ", v + 65);
}

void printSolution(int dist[], int parent[])
{
    printf("Vertex\tDistance\tPath\n");
    for (int i = 0; i < V; i++)
    {
        printf("%c\t%d\t\t", i+ 65, dist[i]);
        printPath(parent, i);
        printf("\n");
    }
}

int minDistance(int dist[], bool sptSet[])
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
    {
        if (!sptSet[v] && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

void dijkstra(int graph[V][V], int src)
{
    int dist[V];
    bool sptSet[V];
    int parent[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
        sptSet[i] = false;
        parent[i] = -1;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minDistance(dist, sptSet);

        sptSet[u] = true;

        for (int v = 0; v < V; v++)
        {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }

    printSolution(dist, parent);
}

int main()
{
    int graph[V][V] = {{0, 7, 0, 8, 0, 0},
                      {7, 0, 6, 3, 0, 0},
                      {0, 6, 0, 4, 2, 5},
                      {8, 3, 4, 0, 3, 0},
                      {0, 0, 2, 3, 0, 2},
                      {0, 0, 5, 0, 2, 0}};

    dijkstra(graph, 0);

    return 0;
}
