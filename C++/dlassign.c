#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *insert(struct Node *start,int data){
    struct Node *new= (struct Node*)malloc(sizeof(struct Node));
    struct Node *ptr;
    // = (struct Node*)malloc(sizeof(struct Node));
    new->data=data;
    new->next= start;
    ptr= start;
    while(ptr->next!=start){
        ptr=ptr->next;
        
    }
    // printf("%d",ptr->data);
    ptr->next=new;
    start->prev= new;
    start = new;
    //  printf("\n%d\n",start->data);
    return start;
}

struct Node *DelEnd(struct Node* start){
    struct Node *ptr=start;
    struct Node *q =start->next;
    while(q->next!=start){
        ptr=ptr->next;
        q=q->next;
        
    }
    ptr->next=start;
    start->prev=ptr;
    // printf("%d %d",ptr->data,q->data);
    free(q);


}
struct Node *clkdisplay(struct Node *head){
    struct Node *ptr =head;
   do
   {    printf("Data is %d \n",ptr->data);
        ptr=ptr->next;
        
    } while(ptr != head);
}
int main(){
    struct Node *start= (struct Node*)malloc(sizeof(struct Node));
    struct Node *second= (struct Node*)malloc(sizeof(struct Node));
    struct Node *third= (struct Node*)malloc(sizeof(struct Node));

    start->prev=third;
    start->next=second;
    second->prev=start;
    second->next=third;
    third->prev=second;
    third->next=start;
    start->data=10;
    second->data=20;
    third->data=30;
    
 start= insert(start,5);
//  printf("%d",start->data);
// DelEnd(start);
// DelEnd(start);
 clkdisplay(start);
    
    return 0;
}
