#include <stdio.h>

struct edge {
    int v1;
    int v2;
    int wt;
};

struct edge Edges[9] = {{0,1,7},{0,3,8},{1,3,3},{1,2,6},{2,3,4},{3,4,3},{2,4,2},{2,5,5},{4,5,2}};

int parent[101],size[101],mst[101][3],currIndex=0;

void sortEdges(){
    for(int i=0;i<=9;i++){
        for(int j=0;j<i-1;j++){
            if(Edges[j].wt > Edges[j+1].wt){
                struct edge temp = Edges[j];
                Edges[j]=Edges[j+1];
                Edges[j+1]=temp;
            }
        }
    }
}

int findUParent(int u){
    if(u == parent[u]) return u;
    return parent[u] = findUParent(parent[u]);
}

//union is reserved keyword
void unionBySize(int u,int v){
    int pu=findUParent(u);
    int pv=findUParent(v);

    if(pu == pv) return; 

    if(size[pu] > size[pv]){
        parent[pv] = pu;
        size[pu] += size[pv];
    }else{
        parent[pu] = pv;
        size[pv] += size[pu];
    }
}
    // unionBySize(Edges[0].v1,Edges[0].v2);

void kruskal(){
    sortEdges();
    for(int i=0;i<9;i++){
        int pu=findUParent(Edges[i].v1);
        int pv=findUParent(Edges[i].v2);

        if(pu==pv) continue;
        else{
            mst[currIndex][0] = Edges[i].v1;
            mst[currIndex][1] = Edges[i].v2;
            mst[currIndex++][2] = Edges[i].wt;
            unionBySize(Edges[i].v1,Edges[i].v2);

        } 
    }
    for(int i=0;i<currIndex;i++){
        
		printf("%c -> %c wt: %d \n",mst[i][0]+65,mst[i][1]+65,mst[i][2]);
    }
    
}


int main(){
    for(int i=0;i<10;i++){
        parent[i]=i;
        size[i]=1;
    }
    kruskal();
    return 0;
}