#include "QueueByStack.h"
#include "stack1.h"
#include <iostream>
using namespace std;

stack1 stacks_obj;
stack1 stacks1_obj;
int temp1;
int counter=1,counter1=1;

QueueByStack::QueueByStack()
{
    //ctor
}

void QueueByStack::enque(int input){
stacks_obj.push(input);
temp1=0;
counter++;
}

void QueueByStack::deque(){
stacks1_obj.pop();
temp1=1;
counter1++;
}

void QueueByStack::print_QueueByStack(){

 if(temp1==0){
stacks_obj.print_stack();
     while(--counter)
stacks1_obj.push(stacks_obj.pop());
 }
else{
stacks1_obj.print_stack();
}
}
