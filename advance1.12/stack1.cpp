#include "stack1.h"
#include <iostream>

using namespace std;

int stack[100];
int i=0;

stack1::stack1()
{
    //ctor
}

void stack1::push(int input){
stack[i++]=input;
}

int stack1::pop(){
if(i<=0){
    cout << "you cannot pop more" << endl;
    return 0;
}
else{
    i--;
    return stack[i];
}
}

void stack1::print_stack(){
    cout << "your stack is" << endl;
if(i>=0){
for(int j=0;j<i;j++){
    cout << stack[j] << endl;
}
}
else
    cout << "stack is empty" << endl;
}
