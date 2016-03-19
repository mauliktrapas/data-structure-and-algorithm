#include <iostream>

using namespace std;
    int main(){
       int ar_size,count=1,i,mid,mid2,mid3,max;
       cout << "enter no of element you want to insert" << endl;
       cin >> ar_size;
    int ar[ar_size];
    int ar_i=0;
    for(ar_i = 0; ar_i < ar_size; ar_i++) {
        cin >> ar[ar_i];
    }

    for(i=0;i<(ar_size-i-1);i++){
     if(ar[i]>ar[i+1]){
     swap(ar[i],ar[i+1]);
     }
     swap(ar[i+1],ar[ar_size-1-i]);
     count++;
    }

    mid=(ar_size-1)/2;
    mid2=mid3=mid;
    while(mid!=0 && mid3!=(ar_size-2)){
            if(mid!=0){
    for(int j=0;j<(mid-j);j++){
        if(ar[j]>ar[j+1]){
     swap(ar[j],ar[j+1]);
     }
     swap(ar[j+1],ar[mid-j]);
    }
            }
    mid=mid/2;
if(mid3!=(ar_size-2)){
for(int j=(ar_size-1);j>(mid3+j);j--){
        if(ar[j]<ar[j-1]){
     swap(ar[j],ar[j-1]);
     }
     swap(ar[j-1],ar[mid2-j]);
    }
}
    mid3=((ar_size-1)+mid3)/2;
    }
    max=ar[ar_size-1];
    if(ar_size>1){
    if(ar[ar_size-2]>max)
        max=ar[ar_size-2];
    }
    if(ar_size>1){
    if(ar[ar_size-3]>max)
        max=ar[ar_size-3];
    }
    if(mid>1){
    if(ar[mid2-2]>max)
        max=ar[mid2-2];
    }
    cout << "min" << ar[0] << endl;
    cout << "max" << max << endl;
     for(ar_i = 0; ar_i < ar_size; ar_i++) {
        cout << ar[ar_i] << endl;
    }
    cout << i << endl;
return 0;
}
