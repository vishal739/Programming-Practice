#include<stdio.h>

void swap(float a[],int i, int j){
    float temp= a[i];
    a[i]=a[j];
    a[j]=temp;
}

void knapsack(int n,float weight[],float profit[],float capacity)
{
	float x[20],tp=0;
	int i,j,u;
	u=capacity;
	for(i=0;i<n;i++)
		x[i]=0.0;
	for(i=0;i<n;i++)
	{
		if(weight[i]>u)
			break;
		else
		{
			x[i]=1.0;
			tp=tp+profit[i];
			u=u-weight[i];
		}
	}
	if(i<=n)
		x[i]=u/weight[i];
	tp=tp+(x[i]*profit[i]);
	printf("The Vectors are: ");
	for(i=0;i<n;i++)
		printf("%.2f ",x[i]);
	printf("\nThe maximum Profit is: %.2f\n",tp);
}

int main()
{
	float weight[20],profit[20],capacity;
	int num,i,j;
	float ratio[20],temp;
	printf("Enter the No. of Object: ");
	scanf("%d",&num);
	printf("Enter the Weight and Profit Of %d object \n",num);
	for(i=0;i<num;i++)
		scanf("%f%f",&weight[i],&profit[i]);
	printf("Enter The Capacity of Knapsack: ");
	scanf("%f",&capacity);
	for(i=0;i<num;i++)
		ratio[i]=profit[i]/weight[i];
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(ratio[i]<ratio[j])
			{
                swap(ratio,i,j);
                swap(weight,i,j);
                swap(profit,i,j);
			}
		}
	}
	printf("Profit \t Weight\tRatio\n");
	for(i=0;i<num;i++)
		printf("%.2f \t %.2f \t %.2f\n",profit[i],weight[i],ratio[i]);
	knapsack(num,weight,profit,capacity);
}
