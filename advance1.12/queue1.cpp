#include "queue1.h"
#include <iostream>
using namespace std;

int queue[100];
int l=0;
int temp;

queue1::queue1()
{
    //ctor
}

void queue1::enque(int input){
queue[l++]=input;
}


int queue1::deque(){
    temp=queue[0];
    if(l<0){
cout << "you cannot deque more" << endl;
    }
    else{
        for(int t=0;t<(l-1);t++){
    queue[t]=queue[t+1];
}
l--;
    }
    return temp;
}

void queue1::print_queue(){

    if(l>=0){
              cout << "your queue is" << endl;
for(int j=0;j<l;j++){
    cout << queue[j] << endl;
}
    }
    else{
        cout << "queue is empty" << endl;
    }
}
