#include <iostream>
#include<queue>
using namespace std;

struct BstNode {
int data;
BstNode* left;
BstNode* right;
} ;

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

int size(BstNode* root){
    if(root==NULL)
        return 0;
return size(root->left)+size(root->right)+1;
}

void Inversion(BstNode *root){
    int inversion=0,temp;
    if(root==NULL)
        return;
queue<BstNode *> Q;
Q.push(root);
while(!Q.empty()){
        temp=size(Q.front()->left);
    inversion+=temp;
    if(Q.front()->left!=NULL)
        Q.push(Q.front()->left);
    if(Q.front()->right!=NULL)
        Q.push(Q.front()->right);
        cout << Q.front()->data << " ";
    Q.pop();
}
cout << "inversion  " << inversion << endl;
}

int main()
{
    int n,input;
    BstNode* root=NULL;
    cout << "enter no of element you want to insert " << endl;
cin >> n;
while(n--){
    cin >> input;
   root=insert(root,input);
}
Inversion(root);
    return 0;
}
