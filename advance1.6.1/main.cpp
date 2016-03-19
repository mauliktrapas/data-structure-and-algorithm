#include <iostream>
#include <stdio.h>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct linked_list{
int value;
int key;
struct linked_list *next;
struct linked_list *prev;
};
typedef struct linked_list node;
node *head;node *tail;node *link_list;node *link_list2;node *head2;node *tail2;
node *key_element;node *curr;node *temp2;node *temp1;
//int i=1;

int main(){
int element,input,delete_value,desired_key,counter=0,element1,element2,counter2=1,counter3=1;

node *create(node *p);
void print(node *p);
void print_reverse(node *list);
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
/*
cout << tail->prev->value << endl;
cout << tail->prev->prev->value << endl;
cout << tail->prev->prev->prev->value << endl;
cout << tail->prev->prev->prev->prev->value << endl;
*/
//print_reverse(tail);
cout<< "enter two element to reverse countigous subsequence" << endl;
cin >> element1 >> element2;
key_element=find(head,element1);
if(key_element!=NULL){
curr=key_element->next;
temp1=key_element->next;
node *temp11;
//cout << key_element->value << "key" << endl;;
while(curr->value!=element2){
        if(counter2==1){
     curr->prev=curr->next;
     counter2=2;
//cout << curr->value << "whats" << endl;
     curr=curr->prev;
     //cout << curr->value << "whats" << endl;
        }
        else{
       //  cout << curr->value << "whats" << endl;
          temp11=curr->prev;
          curr->prev=curr->next;
          curr->next=temp11;
          curr=curr->prev;
       // cout << curr->value << "whats" << endl;
        }
}
if(curr->value!=tail->value){
//cout << curr->next->value << "whats" << endl;
temp1->next=curr->next;
//cout << temp1->next->value << "whats" << endl;

curr->next->prev=temp1;
//cout << curr->next->prev->value << "whats" << endl;
curr->next=curr->prev;
//cout << curr->next->value << "whats" << endl;
curr->prev=key_element;
key_element->next=curr;
}
else{
  //      cout << curr->value << "whats" << endl;
    curr->next=curr->prev;
     curr->prev=key_element;
    key_element->next=curr;
    tail=temp1;
    temp1->next=NULL;
//cout << temp1->value << "whats" << endl;
}/*
cout << curr->prev->value << "whats" << endl;
cout << head->value << endl;
cout << head->next->value << endl;
cout << head->next->next->value << endl;
cout << head->next->next->next->value << endl;
cout << head->next->next->next->next->value << endl;
*/
print(head);
}
else{
curr=head;
node *temp11;node *temp22;
while(curr->value!=element2){
        if(counter3==1){
     curr->prev=curr->next;
     counter3=2;
//cout << curr->value << "whats" << endl;
     curr=curr->prev;
   //  cout << curr->value << "whats" << endl;
        }
        else{
        // cout << curr->value << "whats" << endl;
          temp11=curr->prev;
          curr->prev=curr->next;
          curr->next=temp11;
          curr=curr->prev;
       // cout << curr->value << "whats" << endl;
        }
}
if(curr->value!=tail->value){
//cout << curr->next->value << "whats" << endl;
temp22=head;
temp22->next=curr->next;
curr->next->prev=temp22;
curr->next=curr->prev;

curr->prev=NULL;
head=curr;


}
else{

    curr->next=curr->prev;
     temp22=head;
     head=tail;
     tail=temp22;
    temp22->next=NULL;

}


print(head);
}
/*
key_element->next=curr;
node* tte;
tte=new node;
tte->value=25;
tte->next=new node;
tte->next->value=55;
node *pp;
pp=tte;
key_element->next=pp;
cout<< pp->value << "pp value" <<endl;
cout<< pp->next->value << "pp value" <<endl;
//cout << link_list->next->value << "prime " << endl;
cout << "enter your desired elements key" << endl;
cin >> desired_key;
link_list=head;
tail=new node;
print(head);
//cout << link_list->value << endl;
while(link_list!=NULL){
    if(link_list->key==desired_key && counter==1){
 link_list2->next=new node;
        link_list2=link_list2->next;
        cout << "mistake" << endl;
        link_list2->value=link_list->value;
        cout << link_list2->value<<"hi" << endl;
         cout << head2->value << "hii" <<endl;
         cout << head2->next->value <<"hii"<< endl;

    }
    else if(link_list->key==desired_key && counter==3){
          cout << head2->value << "hi" <<endl;
    head2->next=new node;
        link_list2=head2->next;
        link_list2->value=link_list->value;
    }
    else if(link_list->key==desired_key){
       // cout << link_list->next->value << "prime " << endl;
        head2->value=link_list->value;
      //  head2->next=NULL;
   /*   head2->next->value=122;
      cout << link_list->next->value << endl;
   cout << head2->value << endl;
*/
     /*   counter=3;


       // cout << link_list->next->value << "prime " << endl;
    }

link_list=link_list->next;

}
link_list2->next=NULL;
//cout << link_list2->value << endl;

//cout << head2->value << "print" << endl;
//cout << head2->next->value << endl;
cout << "tthis" << endl;
print(head2);
print(head);
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
		list->next->prev=list;
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

void print_reverse(node *list){
	if(list!=NULL){
	printf("%d  ",list->value);
	if(list->prev!=NULL)
	print_reverse(list->prev);
	else
            return;
	}
}


node *find(node *list,int element){
	if(list->next->value==element){
	return list;
	}
		else if(list->value==element){
		return 0;
		}
		else if(list->next->next==NULL){
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
