#include<stdio.h>
#include<stdlib.h>

int max(int a, int b){ return a>b?a:b;}

#define COUNT 10

typedef struct node{
    int data;
    struct node *right,*left;
}node;

node* create(){
    node* new=(node*)malloc(sizeof(node));
    int val;
    printf("Enter value(-1 for null) : ");
    scanf("%d",&val);
    if(val==-1) return NULL;
    new->data=val;
    printf("creating left node of %d\n",val);
    new->left=create();
    printf("creating right node of %d\n",val);
    new->right=create();
    return new;
}

int height(node* root){
    if(root==NULL) return 0;
    return max(1+height(root->right),1+height(root->left));
}

void print2DUtil(node* root, int space)
{
    // Base case
    if (root == NULL)
        return;
 
    // Increase distance between levels
    space += COUNT;
 
    // Process right child first
    print2DUtil(root->right, space);
 
    // Print current node after space
    // count
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);
 
    // Process left child
    print2DUtil(root->left, space);
}

int main()
{
    node* root=create();
    print2DUtil(root,0);
    printf("height of tree = %d", height(root));
    
    return 0;
}