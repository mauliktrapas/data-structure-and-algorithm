#include <iostream>
#include <stdio.h>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct linked_list{
int value;
int key;
struct linked_list *next;
};
typedef struct linked_list node;

int i=1;
int counter_prev=1,key_value=1;

int main(){
int element,input,delete_value;
node *head;
node *tail;
node *create(node *p);
void print(node *p);
node *find(node *p,int find_key);
void reverse(node *head,node *tail);
node *insert(node *p,int input);
node *delete_node(node *head,int delete_value);
void right_key(node *p);
printf("enter -1000 to terminate insertion of elements in linked list\n");
head=new node;//(node*)malloc(sizeof(node));
tail=create(head);
printf("your linked list is as\n");
print(head);

reverse(head,tail);
node *temp;
temp=new node;
temp=tail;
tail=head;
head=temp;
cout << "your reverse linklist is as:" << endl;
print(head);
right_key(head);
/*
cout << head->key << endl;
cout << head->next->value << endl;
cout << head->next->next->key << endl;
cout << tail->value << endl;*/
printf("enter element of which you want to find index\n");
scanf("%d",&element);
find(head,element);

printf("enter element you want to delete from linked list");
scanf("%d",&delete_value);
head=delete_node(head,delete_value);
print(head);
printf("enter element you want to insert in linked list");
scanf("%d",&input);
tail=insert(tail,input);
print(head);


return 0;
}

node *create(node *list){
scanf("%d",&list->value);
list->key=i++;
	if(list->value==-1000){
	list->next=NULL;
	return list;
	}
		else{
		list->next=(node*)malloc(sizeof(node));
		return create(list->next);
		}
}


void print(node *list){
	if(list!=NULL){
	printf("%d  ",list->value);
	if(list->next!=NULL)
	print(list->next);
	else
            return;
	}
}



node *find(node *list,int element){
	if(list->next->value==element){
    cout << "this is index   "<<endl;
	printf("%d  \n",list->next->key);
	return list;
	}
		else if(list->value==element){
		    cout << "this is index   "<<endl;
		printf("%d \n",list->key);
		return 0;
		}
		else if(list->next->next==NULL){
                printf("element not found");
            return 0;
		}
			else{
			return find(list->next,element);
			}
}



node *delete_node(node *head,int delete_value){
node *temp;
	if(head->value==delete_value){
	temp=head->next;
	free(head);
	head=temp;
	return head;
	}
		else{
		node *find_element=find(head,delete_value);
		temp=find_element->next->next;
		free(find_element->next);
		find_element->next=temp;
		return head;
		}
}
node *insert(node *tail,int input){

    node *temp;
temp=(node*)malloc(sizeof(node));
temp->value=input;

temp->key=tail->key+1;
tail->next=temp;
tail->next->next=NULL;

printf("   ");

return tail->next;
}

node *prev_node(node *head,int index){
counter_prev++;
if(counter_prev==index)
    return head;
else
     prev_node(head->next,index);

}

void reverse(node *head,node *tail){
node *temp;
node *curr;
temp=new node;
//cout << head->value << endl;
//cout << tail->key << endl;
counter_prev=1;
curr=prev_node(head,tail->key);
//cout << curr->value << endl;
temp=tail;
temp->next=curr;
curr->next=NULL;
tail=temp;
//cout << tail->next->value << endl;
if(curr==head)
    return;
else
    reverse(head,curr);
}

void right_key(node *head){
while(head!=NULL){
    head->key=key_value++;
    head=head->next;
}
}
