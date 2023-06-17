#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node *front;
struct Node *rear;
struct Node
{
    int data;
    struct Node *Next;
};

void enqueueRear(int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Queue is full\n");
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

void enqueuefront(int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Queue is Full \n");
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
            ptr->Next = front;
            front = ptr;
        }
    }
}

int dequeuefront()
{
    int val = -1;
    if (front == NULL)
    {
        printf("Queue is empty \n");
    }
    else
    {
        struct Node *ptr = front;
        front = front->Next;
        val = ptr->data;
    }
    return val;
}

int dequeuerear()
{
    int val = -1;
    if (front == NULL)
    {
        printf("Queue is empty \n");
    }
    else
    {   val = rear->data;
        struct Node *ptr = front;
        struct Node *p;
        while (ptr->Next != rear)
        {
            ptr = ptr->Next;
        }
        p = rear;
        rear = ptr;
        rear->Next=NULL;
        
        free(p);
    }
    return val;
}
void display(){
    struct Node *ptr;
    if(front==NULL){
        printf("Queue is Empty \n");
    }
    else{
        ptr=front;
        while(ptr->Next !=NULL){
            printf("%d--->",ptr->data);
            ptr=ptr->Next;
        }
        printf("%d--->NULL",ptr->data);
    }
}
int main()
{
    int choice, data, val;
        while (true)
        {
            cout << "Enter Choice " << endl;
            cout << "1)Insert Queue rear" << endl
                 << "2)Insert Queue front" << endl
                 << "3)Delete Queue front" << endl
                 << "4)Delete Queue rear" << endl
                 << "5)Display Queue" << endl
                 << "6) To exit" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Give value" << endl;
                cin >> data;
                
                enqueueRear(data);
                break;
            case 2:
                cout << "Give value" << endl;
                cin >> data;
                //  enQueue(&q, data);
                enqueuefront(data);
                break;
            case 3:
                // deQueue(&q);
                val = dequeuefront();
                printf("%d is removed from queue \n", val);
                break;
            case 4:
                // deQueue(&q);
                val = dequeuerear();
                printf("%d is removed from queue \n", val);
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
                break;
            }
        }
    
    return 0;
}
