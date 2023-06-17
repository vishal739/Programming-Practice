#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *Next;
    struct Node *prev;
};
struct Node *clkdisplay(struct Node *head){
    struct Node *ptr=head;
   do
   {    printf("Data is %d \n",ptr->data);
        ptr=ptr->Next;
        
    } while(ptr != head);
}
struct Node *insATbeg(struct Node *head, int data){
    struct Node *ptr;
    struct Node *p=head->Next;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    while(p->Next != head){
        p=p->Next;
    }
    p->Next=ptr;
    ptr->Next=head;
    head=ptr;
    return head;
}

int main(){
int n;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *New;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    New = (struct Node *)malloc(sizeof(struct Node));

    // New->data = 60;
    head->data = 7;
    head->Next = second;
    second->data = 11;
    second->Next = third;
    third->data = 15;
    third->Next = fourth;
    fourth->data = 18;
    fourth->Next = head;
    clkdisplay(head);
    head= insATbeg(head,5);
    clkdisplay(head);
return 0;
}
