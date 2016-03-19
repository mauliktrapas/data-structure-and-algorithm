#include <iostream>
#include "stack1.h"
#include "queue1.h"
#include "QueueByStack.h"
#include "StackByQueue.h"
using namespace std;

int main()
{

    stack1 stack1_obj;
    queue1 queue1_obj;
    QueueByStack queue_obj;
    StackByQueue stack_obj;

    int k,input,push_element,pop_element;
    cout << "enter no of element you want to push " << endl;
    cin >> k;
    if(k>0){
    cout << "enter integers" << endl;

    for(int j=0;j<k;j++){
      cin >> input;
      stack1_obj.push(input);
    }

    stack1_obj.print_stack();
    }
       else{
        cout << "you cannot enter integer" << endl;
        cout << "your stack is empty" << endl;
       }
if(k>0){
    cout << "enter no of element you want to pop " << endl;

    cin >> k;
      for(int j=0;j<k;j++){
       stack1_obj.pop();
    }
     stack1_obj.print_stack();
}
else{
    cout << "you cannot pop element from stack" << endl;
    cout << "stack is empty" << endl;
}

cout << "enter no of element you want to push in queue " << endl;
    cin >> k;
    if(k>0){
    cout << "enter integers" << endl;
    for(int j=0;j<k;j++){
      cin >> input;

       queue1_obj.enque(input);
    }

    queue1_obj.print_queue();

  cout << "enter no of element you want to dequeue " << endl;
    cin >> k;
      for(int j=0;j<k;j++){
       queue1_obj.deque();
    }
     queue1_obj.print_queue();
    }
     cout << "enter no of element you want to push in queue formed by stack " << endl;
     cin >> push_element;
     if(push_element>0){
     cout << "enter elements" << endl;
       for(int j=0;j<push_element;j++){
      cin >> input;
      queue_obj.enque(input);
    }
queue_obj.print_QueueByStack();

   /*  else{
        cout << "queue is empty" << endl;
     }*/
  cout << "enter no of element you want to dequeue" << endl;
    cin >> pop_element;
    if(push_element>pop_element){
      for(int j=0;j<pop_element;j++){
       queue_obj.deque();
    }
     queue_obj.print_QueueByStack();
    }
    else{
        cout << "queue is empty" << endl;
    }
     }
          cout << "enter no of element you want to push in stack formed by queue " << endl;
     cin >> push_element;
     if(push_element>0){
     cout << "enter elements" << endl;
       for(int j=0;j<push_element;j++){
      cin >> input;
      stack_obj.push(input);
    }
    stack_obj.print_StackByQueue();

     /*else{
        cout << "stack is empty" << endl;
     }*/

      cout << "enter no of element you want to pop " << endl;
    cin >> pop_element;
    if(push_element>pop_element){
      for(int j=0;j<pop_element;j++){
       stack_obj.pop();
    }
     stack_obj.print_StackByQueue();
    }
    else{
        cout << "stack is empty" << endl;
    }

}
    return 0;
}






