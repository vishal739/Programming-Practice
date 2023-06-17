#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* InsertATBeg(struct Node *top,int data)
{
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    first->data = data;
    if (top == NULL)
    {
        first->next = NULL;
    }
    else
    {
        first->next = top;
    }
    top = first;
    return top;
}

struct Node * DelatBeg(struct Node *top)
{
    struct Node *ptr;
    if (top == NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        ptr = top;
        top = top->next;
         printf("\nDeleted %d\n",ptr->data);
        free(ptr);
       }
    return top;
}

void display(struct Node *top)
{ 
    struct Node *ptr = top;
    printf("Display Stack\n");
    if (top == NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        
        while (ptr != NULL)
        {
            printf(" %d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    struct Node *top= (struct Node *)malloc(sizeof(struct Node));
    struct Node *second= (struct Node *)malloc(sizeof(struct Node));
    struct Node *third= (struct Node *)malloc(sizeof(struct Node));

    top->data = 11;
    second->data = 22;
    third->data = 33;
    top->next = second;
    second->next = third;
    third->next= NULL;

    top= InsertATBeg(top,10);
    top= InsertATBeg(top,5);
    display(top);
    
    top=  DelatBeg(top);
    display(top);

    return 0;
}