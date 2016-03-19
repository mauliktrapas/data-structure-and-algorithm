#include "SelectionSort.h"
#include <iostream>
using namespace std;
SelectionSort::SelectionSort()
{
    //ctor
}

void SelectionSort::selectionSort(int* ar,int ar_size){
int min,temp;
for(int j=0;j<(ar_size-1);j++){
    min=j;
    for(int k=j+1;k<ar_size;k++){
        if(ar[k]<ar[min]){
         min=k;
        }
    }
       temp=ar[min];
            ar[min]=ar[j];
            ar[j]=temp;
}
}
