#include "BubbleSort.h"
#include <iostream>
using namespace std;

BubbleSort::BubbleSort()
{
    //ctor
}
void BubbleSort::bubbleSort(int* ar,int t){
    int j,temp;
for(int i=0;i<t;i++){
	for(j=0;j<(t-i-1);j++){
		if(ar[j]>ar[j+1]){
			temp=ar[j];
			ar[j]=ar[j+1];
			ar[j+1]=temp;
		}
	}
	for(int k=0;k<t;k++){
            cout << ar[k] << " ";
}
cout << "check" << endl;
}
}
