#include <iostream>

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
    BstNode* search(BstNode* root,int key);
    BstNode* minimum(BstNode* root);
    BstNode *deleteNode(BstNode *root,int key);
    void print(BstNode* root);
    void Inorder(BstNode *root);
cout << "enter no of element you want to insert " << endl;
cin >> n;
while(n--){
    cin >> input;
   root=insert(root,input);
}
Inorder(root);
//print(root);
cout << endl;

root=deleteNode(root,23);
if(root!=NULL)
//cout << root->left->left->data << endl;
cout << "inorder:" << endl;
Inorder(root);
//print(root);
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

void print(BstNode* root){
    if(root!=NULL){
        cout << root->data << " ";
print(root->left);
print(root->right);
    }
}

BstNode* minimum(BstNode* root){
if(root->left!=NULL){
        root=root->left;
    return minimum(root);
}
else
    return root;
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

BstNode *deleteNode(BstNode *root,int key){
    BstNode* minimum(BstNode* root);
    BstNode *temp,*temp2;
    if(root==NULL)
        return root;
    else if(root->data<key)
    root->right=deleteNode(root->right,key);
    else if(root->data>key)
    root->left=deleteNode(root->left,key);
else{
if(root->left==NULL && root->right==NULL){
    delete root;
    root=NULL;
}
else if(root->left == NULL) {
            temp = root;
			root = root->right;
			delete temp;
}
else if(root->right == NULL) {
			temp = root;
			root = root->left;
			delete temp;
}
else{
temp=minimum(root->right);
root->data=temp->data;
root->right=deleteNode(root->right,temp->data);
}
}
return root;
}
