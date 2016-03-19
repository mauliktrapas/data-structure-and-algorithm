#include <iostream>
#include <stack>
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
    void preorder(BstNode *root);
    void IterativePreorder(BstNode *root);
    void inorder(BstNode *root);
    void InorderIter(BstNode *root);
    void postorder(BstNode *root);
     void PostorderIter(BstNode *root);
    void print(BstNode* root);
    void LevelOrder(BstNode *root);
    void zigzag(BstNode *root);
cout << "enter no of element you want to insert " << endl;
cin >> n;
while(n--){
    cin >> input;
   root=insert(root,input);
}

print(root);
cout << "\n";
cout << "preorder:  ";
preorder(root);
cout << "\n";
cout << "iterative  ";
IterativePreorder(root);
cout << endl;
cout << "levelorder:" << endl;
LevelOrder(root);
cout << endl;
cout << "inorder:  ";
inorder(root);
cout << endl;
InorderIter(root);
cout << "postorder:  ";
postorder(root);
cout << endl;
PostorderIter(root);
cout << "zigzag   ";
zigzag(root);

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

void preorder(BstNode *root){
if(root!=NULL){
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
}

void IterativePreorder(BstNode *root){
    stack<BstNode *>nodeStack;
    BstNode *temp;
    nodeStack.push(root);
    while(!nodeStack.empty()){
        temp=nodeStack.top();
        nodeStack.pop();
        cout << temp->data << " ";
    if(temp->right)
    nodeStack.push(temp->right);
    if(temp->left)
    nodeStack.push(temp->left);
    }
}

void inorder(BstNode *root){
if(root!=NULL){
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
}
void InorderIter(BstNode *root){
        if(root== NULL)return;
        BstNode *temp=root;
        stack<BstNode *>nodeStack;
        while(!nodeStack.empty()||temp!=NULL){
            if(temp!=NULL){
                nodeStack.push(temp);
                temp=temp->left;
            }
            else{
                BstNode *t=nodeStack.top();
                nodeStack.pop();
                cout << t->data << " ";
                temp=t->right;
            }
        }
        cout << endl;
}
/*
void InorderIter(BstNode *root){
    BstNode *temp;
if(root==NULL) return;
stack<BstNode *>nodeStack;
while(root!=NULL){
        nodeStack.push(root);
    nodeStack.push(root->right);
    root=root->left;
}
temp=nodeStack.top();
nodeStack.pop();
if(temp->)
}
*/
void postorder(BstNode *root){
if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
}
 void PostorderIter(BstNode *root){
        if(root== NULL)return;
        BstNode *temp=root;
        stack<BstNode *>nodeStack;
        while(!nodeStack.empty()||temp!=NULL){
            while(temp!=NULL){
                if(temp->right!=NULL)
                    nodeStack.push(temp->right);
                    nodeStack.push(temp);
                    temp=temp->left;
                }
                     temp=nodeStack.top();
                     nodeStack.pop();
        if(temp->right!=NULL && !nodeStack.empty() && temp->right==nodeStack.top()){
                        BstNode *extra = nodeStack.top();
                        nodeStack.pop();
                        nodeStack.push(temp);
                        temp=extra;
                    }
        else{
                cout << temp->data << " ";
                temp=NULL;
                    }
            }
        cout << endl;
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

void zigzag(BstNode *root){
stack<BstNode *>even;
stack<BstNode *>odd;
odd.push(root);
while(!odd.empty() || !even.empty()){
        while(!odd.empty()){
    if(odd.top()->left!=NULL)
 even.push(odd.top()->left);
         if(odd.top()->right!=NULL)
 even.push(odd.top()->right);
 cout << odd.top()->data << " ";
 odd.pop();
        }
while(!even.empty()){
        if(even.top()->right!=NULL)
 odd.push(even.top()->right);
             if(even.top()->left!=NULL)
 odd.push(even.top()->left);
 cout << even.top()->data << " ";
 even.pop();
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
