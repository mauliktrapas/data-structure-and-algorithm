#include <iostream>
#include<queue>
using namespace std;

struct BstNode {
int data;
BstNode* left;
BstNode* right;
} ;
BstNode* root=NULL;

int main()
{
    int n,input;
  BstNode* insert(BstNode* root,int key);
  BstNode* rightRotate(BstNode *root,BstNode *node);
  BstNode *leftRotate(BstNode *root,BstNode *node);
  void Inorder(BstNode *root);
  void LevelOrder(BstNode *root);
  cout << "enter no of element you want to insert " << endl;
cin >> n;
while(n--){
    cin >> input;
   root=insert(root,input);
}

LevelOrder(root);
cout << endl;
cout << "right-rotate" << endl;
root=rightRotate(root,root->left->left);
LevelOrder(root);
cout << endl;
cout << "left-rotate" << endl;
root=leftRotate(root,root->right);
LevelOrder(root);
cout << endl;
//cout << root->data << " " << root->left->data << " "  << endl;
    return 0;
}

BstNode* insert(BstNode* root,int key){
if(root==NULL){
     BstNode* newNode =new BstNode;
    newNode->data=key;
   newNode->left=newNode->right=NULL;
    root=newNode;
}
    else{
            if(root->data>key){
            root->left=insert(root->left,key);
        }
    else
       root->right=insert(root->right,key);
    }
    return root;
}

void Inorder(BstNode *root) {
	if(root == NULL) return;

	Inorder(root->left);
	cout << root->data << "  ";
	Inorder(root->right);
}

BstNode *parent(BstNode *root,BstNode *node){
    if(root==node || root==NULL)
        return 0;
   else if(root->left==node || root->right==node)
        return root;
else if(root->data>node->data){
    return parent(root->left,node);
}
else if(root->data<node->data){
    return parent(root->right,node);
}
}

BstNode *rightRotate(BstNode *root,BstNode *node){
    BstNode *parent(BstNode *root,BstNode *node);
    BstNode *temp,*parent1;
    parent1=parent(root,node);
    if(parent1!=NULL){
    if(parent1->left==node){
        if(node->left!=NULL){
        parent1->left=node->left;
node->left=parent1->left->right;
parent1->left->right=node;
}
}
else{
        if(node->left!=NULL){
        parent1->right=node->left;
node->left=parent1->right->right;
parent1->right->right=node;
}
}
    }
else{
   temp=node->left;
    node->left=temp->right;
    temp->right=node;
    root=temp;
    cout << root->data <<" -- " <<endl;
}
return root;
}


BstNode *leftRotate(BstNode *root,BstNode *node){
    BstNode *parent(BstNode *root,BstNode *node);
    BstNode *temp,*parent1;
    parent1=parent(root,node);
if(node->right!=NULL){
        if(parent1==NULL){
             temp=node->right;
    node->right=temp->left;
    temp->left=node;
    root=temp;
    cout << root->data <<" -- " <<endl;
        }

    if(parent1->left==node){
        if(node->right!=NULL){
        parent1->left=node->right;
node->right=parent1->left->left;
parent1->left->left=node;
}
}
else{
        if(node->right!=NULL){
        parent1->right=node->right;
node->right=parent1->right->left;
parent1->right->left=node;
}
}
}
return root;
}


void LevelOrder(BstNode *root){
    if(root==NULL)
        return;
queue<BstNode *> Q;
Q.push(root);
while(!Q.empty()){
    if(Q.front()->left!=NULL)
        Q.push(Q.front()->left);
    if(Q.front()->right!=NULL)
        Q.push(Q.front()->right);
        cout << Q.front()->data << " ";
    Q.pop();
}
}
