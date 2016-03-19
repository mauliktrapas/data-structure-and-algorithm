#include <iostream>

using namespace std;
void SearchMin(int* ar,int lower,int upper);
    int main(){
       int ar_size;
       cout << "enter no of element you want to insert" << endl;
       cin >> ar_size;
    int ar[ar_size];
    int ar_i=0;
    for(ar_i = 0; ar_i < ar_size; ar_i++) {
        cin >> ar[ar_i];
    }
SearchMin(ar,0,ar_size-1);
return 0;
}

void SearchMin(int* ar,int lower,int upper){
    int mid,min=ar[0],max;
while(1){
mid=(lower+upper)/2;
if(ar[lower]<=ar[upper]){
        min=ar[lower];
        if(lower!=0)
        max=ar[lower-1];
        else
            max=ar[upper];
cout << min << endl;
cout << max << endl;
break;
}

else if(ar[lower]>ar[upper]){
if(ar[mid]>ar[upper]){
lower=mid+1;
min=ar[upper];
}
else{
upper=ar[mid];
min=mid;
}
}
}
}
