#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
};

int max(int a, int b);

int height(struct node *N)
{
    if (N == NULL)
        return 0;
    return N->height;
}

int max(int a, int b)
{
    return (a > b)? a : b;
}


struct node* newNode(int key)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;
    return(node);
}

struct node *rightRotate(struct node *y)
{
    struct node *x = y->left;
    struct node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right))+1;
    x->height = max(height(x->left), height(x->right))+1;

    return x;
}

struct node *leftRotate(struct node *x)
{
    struct node *y = x->right;
    struct node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right))+1;
    y->height = max(height(y->left), height(y->right))+1;

    return y;
}

int getBalance(struct node *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return(newNode(key));

    if (key < node->key)
        node->left  = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    node->height = max(height(node->left), height(node->right)) + 1;

    return node;
}

struct node* Rotate(struct node *node){
    if(node==NULL)
        return node;
    if(node->left!=NULL)
       node->left= Rotate(node->left);
    if(node->right!=NULL)
        node->right=Rotate(node->right);
    if(node->left!=NULL && node->right!=NULL){
int balance = getBalance(node);

    if (balance > 1 && height(node->right) < height(node->left))
        return rightRotate(node);

    if (balance < -1 && height(node->right) > height(node->left))
        return leftRotate(node);

    if (balance > 1 && height(node->right) > height(node->left))
    {
        node->left =  leftRotate(node->left);
        return rightRotate(node);
    }
printf("%d   ",node->key);

    if (balance < -1 && height(node->right) < height(node->left))
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    node->height = max(height(node->left), height(node->right)) + 1;
    }
    return node;
}

void preOrder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}

struct node * minValueNode(struct node* node)
{
    struct node* current = node;

    while (current->left != NULL)
        current = current->left;

    return current;
}


int main()
{
struct node *root = NULL;
  root = insert(root, 55);
  root = insert(root, 45);
  root = insert(root, 74);
  root = insert(root, 35);
  root = insert(root, 18);
  root = insert(root, 40);
printf("%d",root->height);
  printf("Pre order traversal \n");
  preOrder(root);
  root=Rotate(root);
printf("%d",root->height);
    printf("\nPre order traversal \n");
    preOrder(root);
    printf("\n");
    printf("%d   ",root->key);
    printf("%d  ",root->left->key);
   // printf("%d  ",root->left->right->key);
    printf("%d  ",root->right->key);
    printf("%d  ",root->right->left->key);
    printf("%d  ",root->right->left->left->key);
    printf("%d  ",root->right->right->key);


  return 0;
}
