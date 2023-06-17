#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node *newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->data= data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

void insert(struct Node* root, int data){
    struct Node* newNode= createNode(data);
    struct Node* prev= NULL;
    while(root!=NULL){
    prev= root;
    if(root->data==data){
        return;
    }
    else if(data < root->data)
        root= root->left;
    else
        root= root->right;
    }
    // new node insertion
    if(data < prev->data){
        prev->left= newNode;
    }
    else{
        prev->right= newNode;
    }
}

// struct Node* insert(struct Node* root, int val){
//     if(root==NULL){
//         return createNode(val);
//     }
//     if(val==root->data){
//         return root;
//     }
//     else if(val < root->data){
//         root->left= insert(root->left,val);
//     }
//     else{
//         root->right= insert(root->right,val);
//     }
//     return root;
// }

struct Node* search(struct Node* root, int data){
    if(root==NULL){
        return NULL;
    }
    if(data < root->data){
         printf("%d-->", root->data);
        return search(root->left, data);
    }
    else if(data > root->data){
        printf("%d-->", root->data);
        return search(root->right, data);
    }
    else if(root->data == data){
        printf("Element found \n");
    }
    else{
        printf("element not found \n");
    }
    

}

void inorder(struct Node* root){
    if(root!=NULL){
   
    
    inorder(root->left);
    printf("%d-->", root->data);
    inorder(root->right);
    }
}


int main(){
    struct Node* root= createNode(15);
    struct Node* second= createNode(10);
    struct Node* third= createNode(20);

    root->left= second;
    root->right= third;

    insert(root, 8);
    inorder(root);
    // search(root, 8);


    return 0;
}

