#include "MergeSort.h"
#include <iostream>
using namespace std;
int mid,i=0;
MergeSort::MergeSort()
{
    //ctor
}
void merge(int* left,int *right,int* ar);
int MergeSort::mergeSort(int* ar,int ar_size){
if(ar_size<2)
    return 0;
mid=ar_size/2;
int left[mid],right[ar_size-mid];
for(i=0;i<mid;i++){
left[i]=ar[i];
}
int left_size=i;
for(i=mid;i<ar_size;i++){
right[i-mid]=ar[i];
}
int right_size=(i-mid);
mergeSort(left,left_size);
mergeSort(right,right_size);
merge(left,right,ar,left_size,right_size,ar_size);
}

void MergeSort::merge(int* left,int *right,int* ar,int left_size,int right_size,int ar_size){
int i,j,k=j=i=0;
while(i<left_size && j<right_size){
    if(left[i]<=right[j]){
        ar[k]=left[i];
        i++;
    }
    else{
        ar[k]=right[j];
        j++;
    }
    k++;
}
while(i<left_size){
    ar[k]=left[i];
    i++;
    k++;
}
while(j<right_size){
    ar[k]=right[j];
    j++;
    k++;
}
}
