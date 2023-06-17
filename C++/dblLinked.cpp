#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *Next;
    struct Node *prev;
};
struct Node *insDouble(struct Node *head, struct Node *ptr){
    int i=0;
    struct Node *p= head;
    struct Node *q= head->Next;
    while(p->Next!=ptr){
        p=p->Next;
        q=q->Next;
        
    }
    if(q->Next==NULL){
        p->Next=NULL;
    }
    else{
    ptr->prev=q->prev;
    p->Next=q->Next;}
    
    free(q);

    return head;
}
void Display(struct Node *ptr)
{
   while (ptr != NULL)
    {
        cout << "Element is " << ptr->data << endl;
        ptr = ptr->Next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

   head->data=10;
   head->prev=NULL;
   head->Next=second;
   second->data=20;
   second->prev=head;
   second->Next=third;
   third->data=30;
   third->prev=second;
   third->Next=fourth;
   fourth->data=40;
   fourth->prev=third;
   fourth->Next=NULL;
    Display(head);
    insDouble(head,second);
    Display(head);
    return 0;
}