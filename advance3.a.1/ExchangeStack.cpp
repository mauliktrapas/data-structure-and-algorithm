#include "ExchangeStack.h"
#include <iostream>
#include <stack>
using namespace std;

int temp1,temp2;
using namespace std;
    stack<int> stack_operator1;
    stack<int> stack_operator2;
    stack<int> stack_operator3;

ExchangeStack::ExchangeStack()
{
    //ctor
}

void ExchangeStack::input_stack(int element){
stack_operator1.push(element);
}

void ExchangeStack::element_stack(int element1,int element2){
int size_stack1,size_stack2,size_stack3;
while(!(stack_operator1.top()==element1 || stack_operator1.top()==element2))
{
  stack_operator2.push(stack_operator1.top());
  stack_operator1.pop();

}
    temp1=stack_operator1.top();
    stack_operator1.pop();

  while(!(stack_operator1.top()==element1 || stack_operator1.top()==element2))
   {
     stack_operator3.push(stack_operator1.top());
     stack_operator1.pop();
   }
   temp2=stack_operator1.top();
    stack_operator1.pop();
    stack_operator1.push(temp1);
    stack_operator2.push(temp2);
    size_stack3=stack_operator3.size();
   while(size_stack3--){
      stack_operator1.push(stack_operator3.top());
      stack_operator3.pop();
   }
   size_stack2=stack_operator2.size();
   while(size_stack2--){
    stack_operator1.push(stack_operator2.top());
    stack_operator2.pop();
   }

}

void ExchangeStack::print_stack(){
   int size_stack1= stack_operator1.size();
    for(int i=0;i<size_stack1;i++){
 cout << stack_operator1.top() << endl;
stack_operator1.pop();
}
}
