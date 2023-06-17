#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createnode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
// struct Node *display(struct Node *ptr){

//     struct Node p=(struct Node *)malloc(sizeof(struct Node));
//     p=ptr;
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d",p.;

// }
// }

void preorder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d-->", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct Node *root)
{
    if (root != NULL)
    {

        inorder(root->left);
        printf("%d-->", root->data);
        inorder(root->right);
    }
}
void postorder(struct Node *root)
{
    if (root != NULL)
    {

        postorder(root->left);

        postorder(root->right);
        printf("%d-->", root->data);
    }
}

int isBST(struct Node *root)
{
    static struct Node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

// struct Node *SearchBST(struct Node *root, int key)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     if (root->data == key)
//     {
//         return root;
//     }
//     else if (root->data > key)
//     {
//         return SearchBST(root->left, key);
//     }
//     else
//     {
//         return SearchBST(root->right, key);
//     }
// }

struct Node *search(struct Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

struct Node *Insert(struct Node *root, int value)
{
    struct Node *prev;

    while (root != NULL)
    {
        prev = root;
        if (root->data == value)
        {
            printf("%d is already present in BST", value);
            return root;
        }
        else if (value < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct Node *v = createnode(value);
    if (value < prev->data)
    {
        prev->left = v;
    }
    else
    {
        prev->right = v;
    }
}

struct Node *InOrderPredecessor(struct Node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct Node *DelTree(struct Node *root, int key)
{
    struct Node *ipre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    // Searching the node
    if (key < root->data)
    {
        root->left = DelTree(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = DelTree(root->right, key);
    }
    //Deleting the Node
    else
    {
        ipre = InOrderPredecessor(root);
        root->data = ipre->data;
        root->left = DelTree(root->left, key);
    }
    return root;
}
int main()
{
    struct Node *p = createnode(10);
    struct Node *p1 = createnode(8);
    struct Node *p2 = createnode(12);
    struct Node *p3 = createnode(6);
    struct Node *p4 = createnode(9);
    struct Node *p5 = createnode(11);
    struct Node *p6 = createnode(15);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;

    // postorder(p);
    // if (isBST(p))
    // {
    //     printf("This is a bst");
    // }
    // else
    // {
    //     printf("This is not a bst");
    // }

    // struct Node *n = search(p, 12);
    // if(n!=NULL){
    // printf("%d", *n);}
    // else{
    //     printf("Element not found");
    // }

    Insert(p, 4);
    inorder(p);
    printf("\n");
    DelTree(p,12);
    inorder(p);
    return 0;
}