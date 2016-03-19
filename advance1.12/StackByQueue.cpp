#include "StackByQueue.h"
#include "queue1.h"
#include <iostream>

using namespace std;
int counterr=0;
queue1 queue1_obj;
queue1 queue2_obj;

int even=0;
StackByQueue::StackByQueue()
{
    //ctor

}

void StackByQueue::push(int input){
    if(even==0){
queue1_obj.enque(input);
counterr++;
}
else{
  queue2_obj.enque(input);
counterr++;
}
}
int StackByQueue::pop(){
    if(even==0){
               for(int j=0;j<(counterr-1);j++){
queue2_obj.enque(queue1_obj.deque());
               }
even=1;
counterr--;
return queue1_obj.deque();
}
    else{
   for(int j=0;j<(counterr-1);j++)
queue1_obj.enque(queue2_obj.deque());
even=0;
counterr--;
return queue2_obj.deque();
    }
}

void StackByQueue::print_StackByQueue(){
    if(even==0)
queue1_obj.print_queue();
else
  queue2_obj.print_queue();
};
