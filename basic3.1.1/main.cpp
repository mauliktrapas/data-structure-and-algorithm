#include <iostream>

using namespace std;
int count=0;
int main()
{
    void finder(int* ar,int input,int ar_size);
    int heapify(int* ar,int i);
    int ar_size,input;
    cout << "enter no of element you want to insert" << endl;
    cin >> ar_size;
    int ar[ar_size];
    cin >> ar[0];

    for(int i=1;i<ar_size;i++){
            cin >> ar[i];
       heapify(ar,i);
    }

    cin >> input;
    cout << ar[input] << "node" << endl;
    finder(ar,input,ar_size);
    return 0;
}

int heapify(int* ar,int i){

if(i>0 || count==0){
        count++;

        if(ar[i]<ar[(i-1)/2]){
            swap(ar[i],ar[(i-1)/2]);
            heapify(ar,((i-1)/2));
        }
          else if(ar[i]==ar[(i-1)/2]){
             heapify(ar,(i-1)/2);
        }
}
        return 0;
}

void finder(int* ar,int input,int ar_size){
    if((input-1)/2>=0){
cout << ar[((input-1)/2)] << " parent  " << (input-1)/2 << "  parent-index  " << endl;
}
if((ar_size-3)/2 >= input ){
  cout << ar[(2*input)+1] << " child  " << (2*input)+1 << "   child-index " << ar[(2*input)+2] <<  " child " << (2*input)+2 << "child-index" << endl;
}
else if(ar_size/2 > input)
cout << ar[(2*input)+1] << "  child   " << (2*input)+1 << "  child-index  " << endl;

}
