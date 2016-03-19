#include <iostream>
#include<queue>
using namespace std;
struct BstNode {
int data;
BstNode* left;
BstNode* right;
} ;
int count=0;
BstNode* insert(BstNode* root,int key){
    BstNode* insert2(BstNode* root,int key);
if(root==NULL){
     BstNode* newNode =new BstNode;
    newNode->data=key;
   newNode->left=newNode->right=NULL;
    root=newNode;
}
    else{
            if(root->data>key){
            root->left=insert2(root->left,key);
        }
    else
       root->right=insert2(root->right,key);
    }
    return root;
}

BstNode* insert2(BstNode* root,int key){
if(root==NULL){
     BstNode* newNode =new BstNode;
    newNode->data=key;
   newNode->left=newNode->right=NULL;
    root=newNode;
}
    else{
            if(root->data<key){
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

BstNode* search(BstNode* root,int key){
    BstNode* search2(BstNode* root,int key);
if(root==NULL || root->data==key){
    return root;
}
else{
    if(root->data>key){
            return search2(root->left,key);
    }
    else{
                return search2(root->right,key);
    }
}
}
BstNode* search2(BstNode* root,int key){
if(root==NULL || root->data==key){
    return root;
}
else{
    if(root->data<key){
            return search(root->left,key);
    }
    else{
                return search(root->right,key);
    }
}
}

BstNode* minimum(BstNode* root){
    BstNode* minimum2(BstNode* root);
if(root->left!=NULL){
        root=root->left;
    return minimum2(root);
}
else{
     return root;
}
}

BstNode* minimum2(BstNode* root){
if(root->right!=NULL){
        root=root->right;
    return minimum(root);
}
else
    return root;
}

BstNode *parent(BstNode *root,BstNode *node){
    BstNode *parent2(BstNode *root,BstNode *node);
    if(root==node || root==NULL)
        return 0;
   else if(root->left==node || root->right==node)
        return root;
else if(root->data>node->data){
    return parent2(root->left,node);
}
else if(root->data<node->data){
    return parent2(root->right,node);
}
}

BstNode *parent2(BstNode *root,BstNode *node){
    if(root==node || root==NULL)
        return 0;
   else if(root->left==node || root->right==node)
        return root;
else if(root->data>node->data){
    return parent(root->right,node);
}
else if(root->data<node->data){
    return parent(root->left,node);
}
}

BstNode *successor1(BstNode *root,BstNode *node){
    if(node->right!=NULL && node->right->data>node->data){
            return minimum2(node->right);
    }
    if(node->left!=NULL && node->left->data>node->data){
            return minimum(node->left);
    }
    BstNode *parent1;
  parent1=parent(root,node);
cout << parent1->data << endl;
cout << node->data << endl;
          ///level 0
    if(node->left!=NULL && node->left->data<node->data){
        count=5;
    }
    ///level 1
        if(node->right!=NULL && node->right->data<node->data){
            count=10;
    }
    cout << count << endl;
    if(node->left==NULL && node->right==NULL){
        if(parent1->left==node && parent1->data<node->data)
            count=5;
        else
            count=10;
    }
    int count2=3;
    cout << count << endl;
    while(1){
        if(count==5 && parent1->right==node){
           count=10;
           node=parent1;
           parent1=parent(root,node);
           if(parent1==NULL){
            return parent(root,node);
           }
           count2=2;
        }
        else if(count2==2){
            break;
        }
        cout << count2 << " 222222 " << endl;
       if(count==10 && parent1->left==node){
            count=5;
            node=parent1;
            parent1=parent(root,node);
              if(parent1==NULL){
            return parent(root,node);
           }
            count2=2;
        }
        else if(count2==2){
                cout << node->data << "  hhiii " << endl;
        if(parent1->left!=node){
                cout << node->data << "  hhiii " << endl;
            return node;
        }
        else
            break;
        }
    }
return parent1;
}

BstNode* maximum(BstNode* root){
    BstNode* maximum2(BstNode* root);
if(root->right!=NULL){
        root=root->right;
    return maximum2(root);
}
else
    return root;
}
BstNode* maximum2(BstNode* root){
if(root->left!=NULL){
        root=root->left;
    return maximum(root);
}
else
    return root;
}

int main()
{
    int n,input;
    BstNode* root=NULL,*find_node,*successor,*max;
    cout << "enter no of element you want to insert " << endl;
cin >> n;
while(n--){
    cin >> input;
   root=insert(root,input);
}
LevelOrder(root);
/*
cin >> input;
find_node=search(root,input);
if(find_node!=NULL)
    cout << "found" << endl;
else
    cout << "not found " << endl;
*/
      successor=successor1(root,root->left->right->left);
  if(successor!=NULL)
  cout << successor->data << endl;
  else
    cout << "no successor" << endl;

max=maximum(root);
cout << max->data << "---" << endl;
    return 0;
}

