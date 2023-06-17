#include<stdio.h>
#include<stdlib.h>

struct Node{
    int coef;
    int pow;
    struct Node* next;
};

struct Node *createNode(int coef, int pow){
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->coef=coef;
    newNode->pow= pow;
    newNode->next=NULL;
    
    return newNode;

}

struct Node * polyadd(struct Node* poly1, struct Node* poly2, struct Node *poly){
    
    while(poly1->next && poly2->next){
        if(poly1->pow > poly2->pow){
        poly->coef= poly1->coef;
        poly->pow= poly1->pow;
        poly1=poly1->next;
        
        }
        else if(poly1->pow < poly2->pow){
        poly->coef= poly2->coef;
        poly->pow= poly2->pow;
        poly2=poly2->next;
        
        }
        // if(poly1->pow == poly2->pow)
        else{
        poly->pow=poly1->pow;
        poly->coef= poly1->coef + poly2->coef;
        poly1=poly1->next;
        poly2=poly2->next;
        
        }
        
        poly->next= (struct Node*)malloc(sizeof(struct Node));
        poly=poly->next;
        poly->next = NULL;
        
        
    }
    while (poly1->next || poly2->next) {
        if (poly1->next) {
            poly->pow = poly1->pow;
            poly->coef = poly1->coef;
            poly1 = poly1->next;
        }
        if (poly2->next) {
            poly->pow = poly2->pow;
            poly->coef = poly2->coef;
            poly2 = poly2->next;
        }
        poly->next= (struct Node*)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
    return poly;
}


void display(struct Node *start){
    struct Node* ptr= start;
    while(ptr!=NULL){
        printf("%dx^%d ",ptr->coef, ptr->pow);
        ptr=ptr->next;
        if (ptr->coef >= 0) {
            if (ptr->next != NULL)
                printf("+");
    }
    printf("NULL\n");
}
}
int main(){
    struct Node* poly= (struct Node*)malloc(sizeof(struct Node));

    struct Node* head= createNode(10,3);
    struct Node* second= createNode(8,4);
    struct Node* third= createNode(6,4);

    struct Node* head2= createNode(5,3);
    struct Node* second2= createNode(8,2);
    struct Node* third2= createNode(3,4);

    head->next=second;
    second->next=third;
    third->next=NULL;

    head2->next=second2;
    second2->next=third2;
    third2->next=NULL;

    poly= polyadd(head,head2, poly);
    display(poly);

    return 0;
}