#include <iostream>
#include<queue>
using namespace std;

struct BstNode {
int data;
BstNode *left;
BstNode *right;
BstNode *parent;
} ;
BstNode* root=NULL;
int count=0,counter=0,count2,left_size,right_size;

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
            root->left->parent=root;
        }
    else{
       root->right=insert(root->right,key);
       root->right->parent=root;
    }
    }
    return root;
}

int height(BstNode* root){
    if(root==NULL)
        return -1;
return max(height(root->left),height(root->right))+1;
}

int size(BstNode* root){
    if(root==NULL)
        return 0;
return size(root->left)+size(root->right)+1;
}
/*
int depth(BstNode *root,BstNode *node){
    if(root==node || root==NULL)
        return count;
else if(root->data>node->data){
        count++;
    return depth(root->left,node);
}
else if(root->data<node->data){
    count++;
    return depth(root->right,node);
}
}
*/
int depth(BstNode *node){
    if(node==NULL){
        return -1;
    }
    else{
        return depth(node->parent)+1;
    }
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

int find_tree2(BstNode *root,int i,int j){
    cout << root->data << " **  " << endl;
if(root->data>=i && root->data<=j){
        counter++;
   return find_tree2(root->left,i,j);
   return find_tree2(root->right,i,j);
}
else if(root!=NULL)
return counter;

}

BstNode *find_tree(BstNode *root,int i,int j){
    cout << root->data << " ^^  " << endl;
    count2=find_tree2(root,i,j);
    if(count2!=j-i){
           if(root->left!=NULL){
                counter=0;
      find_tree(root->left,i,j);
      }
    if(root->right!=NULL){
            counter=0;
    find_tree(root->right,i,j);
      }
    }
    else if(count2==j-i)
        return root;
}

int main()
{
    int n,input,heigh,i,j;
    BstNode* insert(BstNode* root,int key);
    int depth(BstNode *node);
    int height(BstNode* root);
    int size(BstNode* root);
    void print(BstNode* root);
cout << "enter no of element you want to insert " << endl;
cin >> n;
while(n--){
    cin >> input;
   root=insert(root,input);
}
LevelOrder(root);
cout << endl;

heigh=height(root->left);
cout << heigh << endl;

cout << depth(root->left) << endl;
cout << size(root) << endl;
cout << endl;
cin >> i >> j;
root=find_tree(root,i,j);
LevelOrder(root);
    return 0;
}
