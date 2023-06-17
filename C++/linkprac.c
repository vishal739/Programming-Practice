#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* createNode(int data){
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    
    return newNode;
}

struct Node* InsAtBeg(struct Node* head,  int data){
    struct Node* newNode= createNode(data);
    if(head->next==NULL){
        head= newNode;
        head->next= NULL;
    }
    else{
        newNode->next=head;
        head= newNode;

    }
    return head;
}

struct Node* InsAtBet(struct Node* head, int index, int data){
    struct Node* newNode= createNode(data);
    struct Node* ptr= head;
    int i=0;
    while(i!= index-1){
        ptr= ptr->next;
        i++;
    }
    newNode->next=ptr->next;
    ptr->next=newNode;
    return head;
}

void display(struct Node* head){
    struct Node* ptr=head;
    while(ptr!=NULL){
        printf("-->%d",ptr->data);
        ptr= ptr->next;
    }
    printf("-->NULL\n");
}

int main(){
    struct Node* head= createNode(10);
    struct Node* second= createNode(20);
    struct Node* third= createNode(30);
    struct Node* fourth= createNode(35);
    struct Node* fifth= createNode(40);


    head->next= second;
    second->next= third;
    third->next= fourth;
    fourth->next= fifth;
    fifth->next= NULL;

    // head= InsAtBeg(head, 5);
    head= InsAtBet(head, 3, 33);
    display(head);
    return 0;
}