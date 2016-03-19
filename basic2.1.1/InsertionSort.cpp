#include "InsertionSort.h"
#include <iostream>

using namespace std;

InsertionSort::InsertionSort()
{
    //ctor
}
void InsertionSort::insertionSort(int ar_size, int *  ar) {
int temp;
    for(int i=1;i<ar_size;i++){
    for(int j=i;j>0;j--){
        if(ar[j]<ar[j-1]){
         temp=ar[j];
            ar[j]=ar[j-1];
            ar[j-1]=temp;
        }
    }
         for(int k=0;k<ar_size;k++){
            cout << ar[k] << " ";
        }
        cout << endl;
}

}
