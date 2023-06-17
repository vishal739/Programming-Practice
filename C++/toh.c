#include<stdio.h>

void toh(int n, char A, char B, char C){
    if(n==1){
        printf("Move the %c to %c \n", A , C);
        return;

    }
    toh(n-1, A, C, B);
    printf("%c to %c \n", A, C);
    toh(n-1, B, A, C);


}

int main()
{
	int no_of_disks ;
	printf("Enter number of disks: ");
	scanf("%d", &no_of_disks);
	toh(no_of_disks, 'A','B','C'); 
	return 0;
}