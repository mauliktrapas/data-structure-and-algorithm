#include <iostream>
using namespace std;

int main()
{
     int ar_size,element,count=0;
     cout << "enter array size" << endl;
    cin >> ar_size;
    int ar[ar_size];
    int ar_i=0;
    cout << "enter elements" << endl;
    for(ar_i = 0; ar_i < ar_size; ar_i++) {
        cin >> ar[ar_i];
    }
     cout << "enter element of which you want to find index" << endl;
    cin >> element;
    for(int i=0;i<ar_size;i++){
        if(ar[i]<element)
            count++;
    }
    cout << count << endl;
    return 0;
}
