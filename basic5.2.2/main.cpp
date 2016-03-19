#include <iostream>
#include<queue>
using namespace std;

struct Node {
int data;
Node* left;
Node* right;
int height;
} ;

int Height(Node *node){
if(node==NULL)
    return -1;
return max(Height(node->left),Height(node->right))+1;
}

Node *LeftRotate(Node *node){
return 0;
}

Node *RightRotate(Node *node){
Node *T2=node->left->right;
Node *temp=node->left;
node->left->right=node;
node->left=T2;
return temp;
}

void LevelOrder(Node *root){
    if(root==NULL)
        return;
queue<Node *> Q;
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

int main()
{
    Node* root=NULL;
        int n,input;
  Node* insert(Node* root,int key);
      cout << "enter no of element you want to insert " << endl;
cin >> n;
while(n--){
    cin >> input;
   root=insert(root,input);
}
LevelOrder(root);
    return 0;
}

Node* insert(Node* root,int key){
if(root==NULL){
     Node* newNode =new Node;
    newNode->data=key;
   newNode->left=newNode->right=NULL;
    root=newNode;
    root->height=0;
}
    else{
            if(root->data>key){
            root->left=insert(root->left,key);
            root->left->height=Height(root->left);
        }
    else{
            root->right=insert(root->right,key);
            root->right->height=Height(root->right);
    }
    }

    if((root->left->height-root->right->height)>1 || (root->left->height-root->right->height)<-1){
        cout << "dfghdlk" ;

        if(root->left->height>root->right->height){
            root=RightRotate(root);
            root->right->height=Height(root->right);
        }
        else
            root=LeftRotate(root);
    }

    return root;
}



