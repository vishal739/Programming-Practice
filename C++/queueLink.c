#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
};


struct Node* InsertAtEnd(struct Node *rear, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    if (rear == NULL)
    {
        newNode->Next = NULL;
        rear = newNode;
    }
    else
    {
        rear->Next = newNode;
        newNode->Next = NULL;
        rear = newNode;
    }
    return rear;
}

struct Node* DelatBeg(struct Node *front)
{
    struct Node *ptr;
    if (front == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        ptr = front;
        front = front->Next;
        printf("\n%d is removed from queue\n",ptr->data);
        free(ptr);
    }
    return front;
}

void display(struct Node *front)
{
    struct Node *ptr = front;
    while (ptr != NULL)
    {
        printf("%d-->", ptr->data);
        ptr = ptr->Next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *front= (struct Node *)malloc(sizeof(struct Node));
    struct Node *second= (struct Node *)malloc(sizeof(struct Node));
    struct Node *rear= (struct Node *)malloc(sizeof(struct Node));

    front->data= 10;
    second->data=20;
    rear->data=30;

    front->Next = second;
    second->Next = rear;
    rear->Next = NULL;

    rear= InsertAtEnd(rear,40);
    rear= InsertAtEnd(rear,50);
    rear= InsertAtEnd(rear,60);
    display(front);
    front= DelatBeg(front);
    display(front);
    return 0;
}