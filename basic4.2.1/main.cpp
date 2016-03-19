#include <iostream>

using namespace std;

struct BstNode {
int data;
BstNode* left;
BstNode* right;
} ;
BstNode* root=NULL;
int count=0,left_size,right_size;
int main()
{
    int n,input,heigh;

    //BstNode *find_node,*max_node,*min_node,*successor;
    BstNode* insert(BstNode* root,int key);
    int depth(BstNode *root,BstNode *node);
    int height(BstNode* root);
    int size(BstNode* root);
   /* BstNode* search(BstNode* root,int key);
    BstNode* minimum(BstNode* root);
    BstNode* maximum(BstNode* root);
    BstNode *successor1(BstNode *root,BstNode *node);*/
    void print(BstNode* root);
cout << "enter no of element you want to insert " << endl;
cin >> n;
while(n--){
    cin >> input;
   root=insert(root,input);
}

print(root);
cout << endl;
heigh=height(root->left);
cout << heigh << endl;

cout << depth(root,root->left) << endl;
cout << size(root) << endl;
/*
min_node=minimum(root);
cout << min_node->data << " - min value" <<  endl;

max_node=maximum(root);
cout << max_node->data << " - max value" <<  endl;

cin >> input;
find_node=search(root,input);
if(find_node!=NULL)
    cout << "found" << endl;
else
    cout << "not found " << endl;

  successor=successor1(root,root->right->left);
  if(successor!=NULL)
  cout << successor->data << endl;
  else
    cout << "no successor" << endl;
  cout << root->data << "  +++ root   ";*/
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

BstNode* search(BstNode* root,int key){
if(root==NULL || root->data==key){
    return root;
}
else{
    if(root->data>key){
            return search(root->left,key);
    }
    else{
                return search(root->right,key);
    }
}
}

void print(BstNode* root){
    if(root!=NULL){
        cout << root->data << " ";
print(root->left);
print(root->right);
    }
}
/*
BstNode* minimum(BstNode* root){
if(root->left!=NULL){
        root=root->left;
    return minimum(root);
}
else
    return root;
}

BstNode* maximum(BstNode* root){
if(root->right!=NULL){
        root=root->right;
    return maximum(root);
}
else
    return root;
}

BstNode *successor1(BstNode *root,BstNode *node){
    BstNode *successor2(BstNode *root,BstNode *node);
    if(node->right!=NULL){
              if(node->data==node->right->data)
        return successor1(root,node->right);
    else{
        if(node->right!=NULL)
            return minimum(node->right);
    }
    }
    return successor2(root,node);
}
BstNode *successor2(BstNode *root,BstNode *node){
BstNode *parent(BstNode *root,BstNode *node);
BstNode *parent1;
  parent1=parent(root,node);
  if(parent1!=NULL){
     if(node->data==parent1->data)
    return successor2(root,parent1);
  }
    while(parent1!=NULL && parent1->right==node){
       node=parent1;
       parent1=parent(root,parent1);
  }
    return 0;
    }
*/

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
