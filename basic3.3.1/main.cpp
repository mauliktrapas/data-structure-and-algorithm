#include <iostream>
#include <vector>
using namespace std;
vector <int> ar;
int count=0,ar_size;
int main()
{
    int heapify(vector<int>& ar,int i);
    int input,temp;
    cout << "enter no of element you want to insert" << endl;
    cin >> ar_size;
    for(int i=0;i<ar_size;i++){
            cin >> temp;
            ar.push_back(temp);
    }
    for(int i=(ar_size-2)/2;i>=0;i--)
     heapify(ar,i);

//for(int i=0;i<ar_size;i++)
  //   cout << ar[i] << " ";

     for(int i=(ar.size()-1);i>0;i--){
        swap(ar[0],ar[i]);
        ar_size--;
        heapify(ar,0);
     }

   for(int i=(ar.size()-1);i>=0;i--)
     cout << ar[i] << " ";
    return 0;
}

int heapify(vector<int>& ar,int i){

count=0;
int left=2*i+1,right=2*i+2;
if(right<ar_size){
        count=2;
}
else if(left<ar_size){
    count=1;
}
if(count==2){
  if(ar[left]>ar[right]){
    if(ar[i]>ar[right]){
            swap(ar[i],ar[right]);

            heapify(ar,right);
        }
}
else{
        if(ar[i]>ar[left]){
            swap(ar[i],ar[left]);

            heapify(ar,left);
        }
}

}

else if(count==1){
   if(ar[i]>ar[left]){
            swap(ar[i],ar[left]);

            heapify(ar,left);
        }
}
        return 0;
}

