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
node *head;
node *tail;
int i=1;


int main(){
int element,input,delete_value;

node *create(node *p);
void print(node *p);
node *find(node *p,int find_key);

node *insert(node *p,int input);

node *delete_node(node *head,int delete_value);

printf("enter -1000 to terminate insertion of elements in linked list\n");
head=new node;//(node*)malloc(sizeof(node));
tail=create(head);
printf("your linked list is as\n");
print(head);
printf("enter element of which you want to find index\n");

scanf("%d",&element);
node *finded_int=find(head,element);

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
	printf("%d  ",list->next->key);
	return list;
	}
		else if(list->value==element){
		printf("%d  ",list->key);
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
