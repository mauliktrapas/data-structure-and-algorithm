#include "ExchangeSequence.h"
#include <iostream>
#include <stack>

int temp3,temp4;
using namespace std;
    stack<int> stack_sequence_operator1;
    stack<int> stack_sequence_operator2;
    stack<int> stack_sequence_operator3;
ExchangeSequence::ExchangeSequence()
{
    //ctor
}
void ExchangeSequence::input_stack(int sequence){
stack_sequence_operator1.push(sequence);
}

void ExchangeSequence::sequence_stack(int sequence1,int sequence2){
int size_stack1,size_stack2,size_stack3;
while(!(stack_sequence_operator1.top()==sequence1 || stack_sequence_operator1.top()==sequence2))
{
  stack_sequence_operator2.push(stack_sequence_operator1.top());
  stack_sequence_operator1.pop();

}
    temp3=stack_sequence_operator1.top();
    stack_sequence_operator1.pop();

  while(!(stack_sequence_operator1.top()==sequence1 || stack_sequence_operator1.top()==sequence2))
   {
     stack_sequence_operator3.push(stack_sequence_operator1.top());
     stack_sequence_operator1.pop();
   }
   temp4=stack_sequence_operator1.top();
    stack_sequence_operator1.pop();
    stack_sequence_operator1.push(temp3);
    stack_sequence_operator2.push(temp4);
    size_stack3=stack_sequence_operator3.size();
   while(size_stack3--){
      stack_sequence_operator2.push(stack_sequence_operator3.top());
      stack_sequence_operator3.pop();
   }
   size_stack2=stack_sequence_operator2.size();
   while(size_stack2--){
    stack_sequence_operator1.push(stack_sequence_operator2.top());
    stack_sequence_operator2.pop();
   }

}

void ExchangeSequence::print_stack(){
   int size_stack1= stack_sequence_operator1.size();
    for(int i=0;i<size_stack1;i++){
 cout << stack_sequence_operator1.top() << endl;
stack_sequence_operator1.pop();
}
}
