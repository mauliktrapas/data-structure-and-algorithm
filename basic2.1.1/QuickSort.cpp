#include "QuickSort.h"
#include <iostream>
using namespace std;

QuickSort::QuickSort()
{
    //ctor
}

void QuickSort::quickSort(int *ar,int p,int q){
if(p<q){
        int r=partition(ar,p,q);
    quickSort(ar,p,r-1);
    quickSort(ar,r+1,q);
}
    }

int QuickSort::partition(int *ar,int p,int q){
int partition_index=p;
int pivate=ar[q];
for(int l=partition_index;l<q;l++){
 if(ar[l]<=pivate){
    swap(ar[partition_index],ar[l]);
    partition_index++;
 }
}
swap(ar[partition_index],ar[q]);
    return partition_index;
}

/*

void QuickSort::change(int *ar,int ar_size){
int temp;
    for(int i=1;i<ar_size;i++){
    for(int j=i;j>0;j--){
        if(ar[j]<ar[j-1]){
         temp=ar[j];
            ar[j]=ar[j-1];
            ar[j-1]=temp;
        }
    }
    }

}
*/
