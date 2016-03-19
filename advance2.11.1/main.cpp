#include <iostream>

using namespace std;
int comparison=0,exchange=0;
class QuickSort{
public : void quickSort(int *ar,int p,int q){
if(p<q){
        int r=partition(ar,p,q);
    quickSort(ar,p,r-1);
    quickSort(ar,r+1,q);
}
    }

public : int partition(int *ar,int p,int q){
int partition_index=p;
int pivate=ar[q];
for(int l=partition_index;l<q;l++){
 if(ar[l]<=pivate){
    swap(ar[partition_index],ar[l]);
    partition_index++;
    exchange++;
 }
 comparison++;
}
swap(ar[partition_index],ar[q]);
exchange++;
    return partition_index;
}
};

int main()
{
        int ar_size;
       cin >> ar_size;
    int ar[ar_size];
    for(int ar_i = 0; ar_i < ar_size; ar_i++) {
        cin >> ar[ar_i];
    }
       QuickSort quick_obj;
  quick_obj.quickSort(ar,0,ar_size-1);
       for(int k=0;k<ar_size;k++){
            cout << ar[k] << " ";
}
cout << endl;
cout << "exchange " << exchange << "   comparison " << comparison << endl;
    return 0;
}
