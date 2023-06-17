#include <iostream>
using namespace std;
// #define max 5
// int frontind=-1;
// int backind=-1;
// int q[max];
struct queue
{
    int size, r, f;
    int *arr;
};

void enQueue(struct queue *q, int data)
{
    if (q->f == q->size - 1)
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        q->r++;
        q->arr[q->r] = data;
    }
}
int deQueue(struct queue *q)
{
    int a = -1;
    if (q->f == q->r)
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
void showQueue(struct queue *q)

{
    for (int i = q->f+1; i <= q->r; i++)
    {
        cout << "Queue " << q->arr[i] << endl;

    }
}
int main()

{
    int data,choice;
    
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    while(true){
    cout<<"Enter Choice "<<endl;
    cout<<"1)Insert Queue "<<endl<<"2)Delete Queue "<<endl<<"3)Display Queue"<<endl<<"4) To exit"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Give value"<<endl;
        cin>>data;
         enQueue(&q, data);
        break;
    case 2:
        deQueue(&q);
        break;
    case 3:
        showQueue(&q);
        break;
    case 4:
        exit(0);
        break;
    // default:
    //     cout<<"Invalid Choice"<<endl;
    //     break;
    }
   
    
    // // cout << "deleted " << deQueue(&q)<<endl;
    // // cout << "deleted " << <<endl;
    // showQueue(&q);
    }
    return 0;
}