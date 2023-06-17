#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};
void LinkedTrav(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element is " << ptr->data << endl;
        ptr = ptr->Next;
    }
}
void Linkedscan(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cin >> ptr->data;
        ptr = ptr->Next;
    }
}
struct Node *insatstart(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->Next = head;
    ptr->data = data;
    return ptr;
}
struct Node *insatIndex(struct Node *head, int data, int Index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != Index - 1)
    {
        p = p->Next;
        i++;
    }
    ptr->data = data;
    ptr->Next = p->Next;

    p->Next = ptr;
    return head;
}
struct Node *InsatEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i;
    while (p->Next!=NULL)
    {
        p = p->Next;
        
    }
    ptr->data= data;
    p->Next = ptr;
    ptr->Next=NULL;

   
    return head;
}
struct Node *InsAfterNode(struct Node *head,struct Node *prevNode,int data)
{
   struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   ptr->data= data;
   ptr->Next=prevNode->Next;
   prevNode->Next=ptr;
   return head;
}
struct Node *DelatFirst(struct Node *head){
    struct Node *p;
    p=head;
    head=head->Next;
    free(p);
    return head;

}

struct Node *DelatBTW(struct Node *head,int Index){
    int i=0;
    struct Node *p;
    struct Node *q;
    p=head;
    while(i!= Index-1){
        p=p->Next;
        i++;
    }
    q=p->Next;
    p->Next=q->Next;
    free(q);
    return head;
}
struct Node *DelatLast(struct Node *head){
    struct Node *p= head;
    struct Node *q= head->Next;
    
    while(q->Next!=NULL){
        p=p->Next;
        q=q->Next;
    }
    // q=p->Next;
    p->Next=NULL;
    free(q);
    return head;
}

struct Node *DelVal(struct Node *head, int data){
struct Node *p=head;
struct Node *q=head->Next;
while(q->data!=data && q->Next!=NULL){
    
        p=p->Next;
        q=q->Next;
    
    }
    if(q->data==data){
       p->Next=q->Next;
       free(q);
    }
    else{
        cout<<"Data not found";
    }
    
    return head;

}
// void insLinked(struct Node *head, int data)
// {
//     struct Node *ptr=  (struct Node *)malloc(sizeof(struct Node));
//     int x;
//     cout << "Please Enter Your Choice for insertion " << endl;
//     cin >> x;
//     switch (x)
//     {
//     case 1:
//         ptr->Next = head;
//         ptr->data = data;
//         // return New;
//     case 2:
//         ptr->Next=New->Next;
//         New->Next= ptr;
//     case 3:
//         New->Next=ptr;
//         ptr->Next=NULL;
//     case 4:
//         ptr->Next=New->Next;
//         New->Next=ptr;
//     }
// }
void Display(struct Node *ptr)
{
    cout << ptr->data << endl;
    ptr = ptr->Next;
    cout << ptr->data << endl;
    ptr = ptr->Next;
    cout << ptr->data << endl;
}
int main()
{
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
    fourth->Next = NULL;

    // cout << head->data;
    // Linkedscan(head);
    // insLinked(second,New);
    LinkedTrav(head);
    // head = insatstart(head, 50);
    // head = insatIndex(head, 69, 3);
    // head = InsatEnd(head,50);
    // head= InsAfterNode(head,second,50);
    // head= DelatFirst(head);
    // head= DelatBTW(head,2);
    // head= DelatLast(head);
    head= DelVal(head,18);
    LinkedTrav(head);
    // Display(head);
    return 0;
}