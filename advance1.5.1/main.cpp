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
node *head;node *tail;node *link_list;node *link_list2;node *head2;node *tail2;
//int i=1;

int main(){
int element,input,delete_value,desired_key,counter=0;

node *create(node *p);
void print(node *p);
node *find(node *p,int find_key);
node *insert(node *p,int input);
node *delete_node(node *head,int delete_value);

printf("enter -1000 to terminate insertion of elements in linked list\n");
cout << "enter input in this way" << endl;
cout << "key node_value" << endl;
head=new node;
tail=create(head);
printf("your linked list is as\n");
print(head);
cout << "enter your desired elements key" << endl;
cin >> desired_key;
link_list=head;
head2=new node;
//print(head);
//cout << link_list->value << endl;
while(link_list!=NULL){
    if(link_list->key==desired_key && counter==1){
 link_list2->next=new node;
        link_list2=link_list2->next;
        //cout << "mistake" << endl;
        link_list2->value=link_list->value;
        link_list2->key=desired_key;
       // cout << link_list2->value<<"hi" << endl;
       //  cout << head2->value << "hii" <<endl;
       //  cout << head2->next->value <<"hii"<< endl;

    }
  /*  else if(link_list->key==desired_key && counter==3){
         // cout << head2->value << "hi" <<endl;
    head2->next=new node;
        link_list2=head2->next;
        link_list2->value=link_list->value;
    }*/
    else if(link_list->key==desired_key){
       // cout << link_list->next->value << "prime " << endl;
        head2->value=link_list->value;
        head2->key=desired_key;
        link_list2=head2;
      //  head2->next=NULL;
   /*   head2->next->value=122;
      cout << link_list->next->value << endl;
   cout << head2->value << endl;
cout << head2->next->value << endl;
cout << head2->next->next->value << endl;
cout << head2->next->next->next->value << endl;
cout << link_list->next->value << "prime " << endl;*/
        counter=1;


       // cout << link_list->next->value << "prime " << endl;
    }

link_list=link_list->next;

}
link_list2->next=NULL;
//cout << link_list2->value << endl;

//cout << head2->value << "print" << endl;
//cout << head2->next->value << endl;
cout << "new link list" << endl;
print(head2);
printf("enter element of which you want to find index\n");

scanf("%d",&element);
find(head2,element);
/*
printf("enter element you want to delete from linked list");
scanf("%d",&delete_value);
head=delete_node(head,delete_value);
print(head);
printf("enter element you want to insert in linked list");
scanf("%d",&input);
tail=insert(tail,input);
print(head);
*/

return 0;
}

node *create(node *list){
cin >> list->key;
scanf("%d",&list->value);
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
            cout << "your element index is" << endl;
	printf("%d  ",list->next->key);
	return list;
	}
		else if(list->value==element){
		    cout << "your element index is" << endl;
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
