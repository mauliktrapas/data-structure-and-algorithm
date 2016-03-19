#include <iostream>
#include "ExchangeStack.h"
#include "ExchangeSequence.h"
#include "ExchangeQueue.h"
#include "QueueSequence.h"
using namespace std;

int main()
{
       int element,element1,element2,element_size;
ExchangeStack element_obj;
    cout << "A" << endl;
    cout << "enter number of element you want to push in stack" << endl;
    cin >> element_size;
    for(int i=0;i<element_size;i++){
            cin >> element;
        element_obj.input_stack(element);
    }
    cout << "enter 2 elements that you want to exchange" << endl;
    cin >>element1 >> element2;
    element_obj.element_stack(element1,element2);
    cout << "your stack from last input element to first is:" << endl;
    element_obj.print_stack();

    int sequence,sequence1,sequence2,sequence_size;
ExchangeSequence sequence_obj;
    cout << "B" << endl;
    cout << "enter number of element you want to push in stack" << endl;
    cin >> sequence_size;
    for(int i=0;i<sequence_size;i++){
            cin >> sequence;
        sequence_obj.input_stack(sequence);
    }
    cout << "enter 2 elements for reverse sequence" << endl;
    cin >>sequence1 >> sequence2;
    sequence_obj.sequence_stack(sequence1,sequence2);
    cout << "your stack from last input element to first is:" << endl;
    sequence_obj.print_stack();

    int queue_element,queue_element1,queue_element2,queue_element_size;
ExchangeQueue queue_element_obj;
    cout << "C" << endl;
    cout << "enter number of element you want to push in queue" << endl;
    cin >> queue_element_size;
    for(int i=0;i<queue_element_size;i++){
            cin >> queue_element;
        queue_element_obj.input_queue(queue_element);
    }
    cout << "enter 2 elements that you want to exchange" << endl;
    cin >>queue_element1 >> queue_element2;
    queue_element_obj.queue_element_stack(queue_element1,queue_element2);
    cout << "your queue is from first input element to last is:" << endl;
    queue_element_obj.print_queue();

    int queue2_element,queue2_element1,queue2_element2,queue2_element_size;
QueueSequence queue2_element_obj;
    cout << "D" << endl;
    cout << "enter number of element you want to push in queue2" << endl;
    cin >> queue2_element_size;
    for(int i=0;i<queue2_element_size;i++){
            cin >> queue2_element;
        queue2_element_obj.input_queue2(queue2_element);
    }
    cout << "enter 2 elements that you want to exchange" << endl;
    cin >>queue2_element1 >> queue2_element2;
    queue2_element_obj.queue2_sequence(queue2_element1,queue2_element2);
    cout << "your queue2 is from first input element to last is:" << endl;
    queue2_element_obj.print_queue2();
    return 0;
}
