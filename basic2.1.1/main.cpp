#include "InsertionSort.h"
#include "QuickSort.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "MergeSort.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "enter  " << "1 for insertion" << endl;
    cout << "2 for quicksort" << endl;
    cout << "3 for selectionsort" << endl;
    cout << "4 for bubblesort" << endl;
    cout << "5 for mergesort" << endl;
    int test;
    cin >> test;
         int _ar_size;
       cin >> _ar_size;
    int _ar[_ar_size];
    int _ar_i=0;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        cin >> _ar[_ar_i];
    }
int ar_size2=_ar_size;
    if(test==1){
    InsertionSort insertion_obj;
   insertion_obj.insertionSort(_ar_size, _ar);
    }

    else if(test==2){
QuickSort quick_obj;
  quick_obj.quickSort(_ar,0,_ar_size-1);

    }

    else if(test==3){
SelectionSort selection_obj;
  selection_obj.selectionSort(_ar,_ar_size);
    }

    else if(test==4){
BubbleSort bubble_obj;
  bubble_obj.bubbleSort(_ar,_ar_size);
    }

   else if(test==5){
MergeSort merge_obj;
  merge_obj.mergeSort(_ar,_ar_size);
    }
    for(int k=0;k<ar_size2;k++){
            cout << _ar[k] << " ";
}
    return 0;
}


