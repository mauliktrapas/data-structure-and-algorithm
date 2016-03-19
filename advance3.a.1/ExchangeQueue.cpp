#include "ExchangeQueue.h"
#include <iostream>
#include <queue>

using namespace std;
queue<int> queue_operator1;
queue<int> queue_operator2;
queue<int> queue_operator3;
int exchange_temp1,exchange_temp2;
ExchangeQueue::ExchangeQueue()
{
    //ctor
}

void ExchangeQueue::input_queue(int queue_element){
queue_operator1.push(queue_element);
}

void ExchangeQueue::queue_element_stack(int queue_element1,int queue_element2){
int size_queue1,size_queue2,size_queue3;
while(!(queue_operator1.front()==queue_element1 || queue_operator1.front()==queue_element2))
{
     queue_operator2.push(queue_operator1.front());
    queue_operator1.pop();
}
exchange_temp1=queue_operator1.front();
queue_operator1.pop();
  while(!(queue_operator1.front()==queue_element1 || queue_operator1.front()==queue_element2))
   {
     queue_operator3.push(queue_operator1.front());
     queue_operator1.pop();
   }
    exchange_temp2=queue_operator1.front();
    queue_operator1.pop();
    queue_operator2.push(exchange_temp2);
    queue_operator3.push(exchange_temp1);
    size_queue1=queue_operator1.size();
   while(size_queue1--){
      queue_operator3.push(queue_operator1.front());
      queue_operator1.pop();
   }
   size_queue2=queue_operator2.size();
   while(size_queue2--){
    queue_operator1.push(queue_operator2.front());
    queue_operator2.pop();
   }
    size_queue3=queue_operator3.size();
   while(size_queue3--){
    queue_operator1.push(queue_operator3.front());
    queue_operator3.pop();
   }

}

void ExchangeQueue::print_queue(){
   int size_queue1= queue_operator1.size();
    for(int i=0;i<size_queue1;i++){
 cout << queue_operator1.front() << endl;
queue_operator1.pop();
}
}
