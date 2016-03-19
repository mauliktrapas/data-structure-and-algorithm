#include <iostream>

using namespace std;

int main()
{
    int index,heap_size,k;
    cout << "enter k's value, heap size and node index " << endl;
    cin >> k >> heap_size >> index;
    if(index!=0 && index<heap_size){
        int parent=(index-1)/k;
        cout << parent << "parent" << endl;
    }
    cout << "children" << endl;
    for(int i=1;i<=k;i++){
        if(k*index+i<heap_size){
            cout << k*index+i << " ";
        }
        else
            break;
    }

    return 0;
}
