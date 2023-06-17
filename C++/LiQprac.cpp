#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node *front=NULL;
struct Node *rear=NULL;
struct Node
{
    int data;
    struct Node *next;
};

void enqueueR(int val){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    if(ptr==NULL){
        printf("Queue is Full\n");
    }
    else{
        ptr->data=val;
        ptr->next=NULL;
        if(front==NULL){
            front=rear=ptr;
        }
        else{
            rear->next=ptr;
            rear=ptr;
        }
    }
}
int dequeue(){
    int val=-1;
    struct Node *ptr;
    ptr=front;
    if(front==NULL){
        printf("Queue is Empty");
    }
    else{
        val=front->data;
        front=front->next;
        free(ptr);
    }
    return val;
}

void display(){
    if(front==NULL){
        printf("Queue is Empty");
    }
    else{
        struct Node *ptr=front;
        while(ptr->next != NULL){
            printf("%d--->",ptr->data);
            ptr=ptr->next;
        }
        printf("%d--->NULL\n",ptr->data);
    }
}

int main()
{

    int data, choice,val;
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
            val= dequeue();
            printf("%d is removed from queue \n",val);
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
