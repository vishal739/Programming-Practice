#include<stdio.h>
#include<conio.h>

int fact(int x){
    int f;
    printf("recurs %d \n ",x);
    if(x==0 || x==1){
    return 1;}
    else{
    f= x*fact(x-1);
    return f;}

}
int main()
{   
    int a;
    printf("Give the Value of a ");
    scanf("%d",&a);
    
    printf("%d",fact(a));
    // printf("The area is %d ",a*a);

    // do
    // {   
    //     printf("Counting is %d ",i);
    //     i++;
    // } while (i<a);
    
    return 0;
}
