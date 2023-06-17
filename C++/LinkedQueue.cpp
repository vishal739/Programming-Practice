#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node *front = NULL;
struct Node *rear = NULL;
struct Node
{
    int data;
    struct Node *Next;
};

void enqueue(int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Full");
    }
    else
    {
        ptr->data = val;
        ptr->Next = NULL;
        if (front == NULL)
        {
            front = rear = ptr;
        }
        else
        {
            rear->Next = ptr;
            rear = ptr;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct Node *ptr;
    if (front == NULL)
    {
        printf("Queue empty");
    }
    else
    {
        val = front->data;
        ptr = front;

        front = front->Next;
        printf("%d is removed from queue \n", val);
        free(ptr);
    }
    return val;
}
void display()
{

    if (front == NULL)
        printf("\nQueue is Empty!!!\n");
    else
    {
        struct Node *ptr = front;
        while (ptr->Next != NULL)
        {
            printf("%d-->", ptr->data);
            ptr = ptr->Next;
        }
        printf("%d-->NULL\n", ptr->data);
    }
}
int main()
{

    int data, choice;

    // printf("Dequeuing element %d\n", dequeue());
    // enqueue(34);
    // enqueue(4);
    // enqueue(7);
    // enqueue(17);
    // display();
    // printf("Dequeuing element %d\n", dequeue());
    // printf("Dequeuing element %d\n", dequeue());
    // printf("Dequeuing element %d\n", dequeue());
    // printf("Dequeuing element %d\n", dequeue());
    while (true)
    {
        cout << "Enter Choice " << endl;
        cout << "1)Insert Queue " << endl
             << "2)Delete Queue " << endl
             << "3)Display Queue" << endl
             << "4) To exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Give value" << endl;
            cin >> data;
            //  enQueue(&q, data);
            enqueue(data);
            break;
        case 2:
            // deQueue(&q);
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
}