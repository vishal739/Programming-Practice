#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int x[3][3];
    printf("Enter values \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }   
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("%d \n",x[i][j]);
            cout<<x[i][j]<<endl;
        }
    }
    
   
    
    return 0;
}