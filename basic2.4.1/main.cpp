#include <iostream>
#include "QuickSort.h"
using namespace std;

int main()
{
         int ar_size,index;
         cout << "enter array size" << endl;
    cin >> ar_size;
    int ar[ar_size];
    int ar_i=0;
    cout << "enter elements" << endl;
    for(ar_i = 0; ar_i < ar_size; ar_i++) {
        cin >> ar[ar_i];
    }
    cout << "enter index" << endl;
    cin >> index;
    QuickSort quick_obj;
  quick_obj.quickSort(ar,0,ar_size-1);
  if(index<ar_size){
     cout << ar[index] << endl;
  }
else
    cout << "element not found" << endl;
    return 0;
}
