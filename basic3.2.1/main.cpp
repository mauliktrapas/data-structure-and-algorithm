#include <iostream>
#include <vector>
using namespace std;
vector <int> ar;
int count=0;
int main()
{
    int heapify(vector<int>& ar,int i);
    int leaf_upward(vector<int>& ar,int i);
    int ar_size,input,temp;
    cout << "enter no of element you want to insert" << endl;
    cin >> ar_size;
    for(int i=0;i<ar_size;i++){
            cin >> temp;
            ar.push_back(temp);
    }
    cout << "press 1 for root down method" << endl;
    cout << "      2 for leaf upward method" << endl;
    cin >> temp;
    if(temp==1){
        for(int i=(ar_size-2)/2;i>=0;i--)
     heapify(ar,i);
    }
   else{
    for(int i=1;i<ar_size;i++)
        leaf_upward(ar,i);
   }
    for(int i=0;i<ar_size;i++)
     cout << ar[i] << " ";
    return 0;
}

int heapify(vector<int>& ar,int i){
  //  for(int k=0;k<ar.size();k++)
   //  cout << ar[k] << " ";
    count=0;
int left=2*i+1,right=2*i+2;
if(right<ar.size()){
        count=2;
}
else if(left<ar.size()){
    count=1;
}
if(count==2){
  if(ar[left]>ar[right]){
    if(ar[i]>ar[right]){
            swap(ar[i],ar[i*2+2]);
           // cout << ar[i] <<endl;
            heapify(ar,right);
        }
}
else{
        if(ar[i]>ar[left]){
            swap(ar[i],ar[i*2+1]);
           // cout << ar[i] <<endl;
            heapify(ar,left);
        }
}
}

else if(count==1){
   if(ar[i]>ar[left]){
            swap(ar[i],ar[i*2+1]);
            // cout << ar[i] <<endl;
            heapify(ar,i*2+1);
        }
}
        return 0;
}

int leaf_upward(vector<int>& ar,int i){
if(i>0 || count==0){
        count++;

        if(ar[i]<ar[(i-1)/2]){
            swap(ar[i],ar[(i-1)/2]);
            leaf_upward(ar,((i-1)/2));
        }
          else if(ar[i]==ar[(i-1)/2]){
             leaf_upward(ar,(i-1)/2);
        }
}
        return 0;
}
