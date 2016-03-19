#include "QueueSequence.h"
#include <iostream>
#include <queue>
using namespace std;
queue<int> queue2_operator1;
queue<int> queue2_operator2;
queue<int> queue2_operator3;
int exchange_temp3,exchange_temp4;
QueueSequence::QueueSequence()
{
    //ctor
}

void QueueSequence::input_queue2(int queue2_element){
queue2_operator1.push(queue2_element);
}

void QueueSequence::queue2_sequence(int queue2_element1,int queue2_element2){
int step1_counter=0,swap=0,step2_counter,step3_counter,manage_queue2;
step3_counter=queue2_operator1.size();
while(!(queue2_operator1.front()==queue2_element1 || queue2_operator1.front()==queue2_element2))
{
      exchange_temp3=queue2_operator1.front();
      queue2_operator1.pop();
     queue2_operator1.push(exchange_temp3);
    step1_counter++;
}
exchange_temp3=queue2_operator1.front();
queue2_operator1.pop();
queue2_operator2.push(exchange_temp3);
swap=1;
  while(!(queue2_operator1.front()==queue2_element1 || queue2_operator1.front()==queue2_element2))
   {
       if(swap==1){
     queue2_operator3.push(queue2_operator1.front());
     queue2_operator1.pop();
     while(!queue2_operator2.empty()){
        queue2_operator3.push(queue2_operator2.front());
         queue2_operator2.pop();
     }
     swap=0;
       }
            else{
     queue2_operator2.push(queue2_operator1.front());
     queue2_operator1.pop();
     while(!queue2_operator3.empty()){
        queue2_operator2.push(queue2_operator3.front());
         queue2_operator3.pop();
     }
     swap=1;
       }
 }
    if(swap==1){
        queue2_operator3.push(queue2_operator1.front());
         queue2_operator1.pop();
            while(!queue2_operator2.empty()){
        queue2_operator3.push(queue2_operator2.front());
         queue2_operator2.pop();
     }
     step2_counter=queue2_operator3.size();
     while(!queue2_operator3.empty()){
              queue2_operator1.push(queue2_operator3.front());
         queue2_operator3.pop();
     }
    }
    else{
        queue2_operator2.push(queue2_operator1.front());
         queue2_operator1.pop();
          while(!queue2_operator3.empty()){
        queue2_operator2.push(queue2_operator3.front());
         queue2_operator3.pop();
     }
     step2_counter=queue2_operator2.size();
       while(!queue2_operator2.empty()){
              queue2_operator1.push(queue2_operator2.front());
         queue2_operator2.pop();
     }
    }
    manage_queue2=step3_counter-(step2_counter+step1_counter);
    while(manage_queue2--)
{
      exchange_temp3=queue2_operator1.front();
      queue2_operator1.pop();
     queue2_operator1.push(exchange_temp3);
}
}

void QueueSequence::print_queue2(){
   int size_queue1= queue2_operator1.size();
    for(int i=0;i<size_queue1;i++){
 cout << queue2_operator1.front() << endl;
queue2_operator1.pop();
}
}
