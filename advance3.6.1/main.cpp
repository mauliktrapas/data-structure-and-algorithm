#include <iostream>
#include <vector>
using namespace std;
vector <int> ar;
int node=0,row_index;
int main()
{
    void max_heap(int last_index);
        int j=0,ar_size,count=1,temp,counter=0;
    cout << "enter no of element you want to insert" << endl;
    cin >> ar_size;
    for(int i=0;i<ar_size;i++){
            cin >> temp;
            ar.push_back(temp);
    }

    return 0;
}

void max_heap(int last_index){
if(ar[last_index]>left){
    if(ar[last_index]>right){
        node++;
        if(last_index-row_index<number){
            max_heap(last_index+1);
        }
        else{
            row_index=2*row_index+1;
            max_heap(row_index);
        }

    }
}
}
