#include<stdio.h>

int p[]={2,3,5,2,4};
int m[20][20]={0};
int s[20][20]={0};
int n=sizeof(p)/sizeof(p[0])-1;

void displayTable(int m[][20]){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      printf("%5d",m[i][j]);
    }
    printf("\n");
  }
}

void matrixChainOrder(){
  // for(int i=1;i<=n;i++){
  //   m[i][i]=0;
  // }
  for(int len=2;len<=n;len++){
    for(int i=1;i<=n-len+1;i++){
      int j=i+len-1;
      m[i][j]=9999;
      for(int k=i;k<=j-1;k++){
        int cost=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
        if(cost<m[i][j]){
          m[i][j]=cost;
          s[i][j]=k;
        }
      }
    }
  }
  printf("Displaying MTable\n");
  displayTable(m);
  printf("Displaying STable\n");
  displayTable(s);
}

void pop(int i, int j){
  if(i==j){
    printf("A%d ",i);
  }
  else{
    printf("(");
    pop(i,s[i][j]);
    pop(s[i][j]+1,j);
    printf(")");
  }
}


int main(){
  matrixChainOrder();
  pop(1,4);
  printf("\n");
  return 0;
}
