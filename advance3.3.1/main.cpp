#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector <int> ar;
int count=0;
int main()
{
    int min_heapify(vector<int>& ar,int i);
    int max_heapify(vector<int>& ar,int k);
    int isMinLevel(int i);
    int ar_size,input,temp;
    cout << "enter no of element you want to insert" << endl;
    cin >> ar_size;
    for(int j=0;j<ar_size;j++){
            cin >> temp;
            ar.push_back(temp);
    }
    for(int i=(ar_size-2)/2;i>=0;i--){
        if(isMinLevel(i))
            min_heapify(ar,i);
        else
            max_heapify(ar,i);
    }

    for(int i=0;i<ar_size;i++)
     cout << ar[i] << " ";
       return 0;
}

int min_heapify(vector<int>& ar,int i){
    int max_heapify(vector<int>& ar,int k);
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
           if(i!=0)
            max_heapify(ar,right);
        }
}
else{
        if(ar[i]>ar[left]){
            swap(ar[i],ar[i*2+1]);
           // cout << ar[i] <<endl;
           if(i!=0)
            max_heapify(ar,left);
        }
}
}

else if(count==1){
   if(ar[i]>ar[left]){
            swap(ar[i],ar[i*2+1]);
            // cout << ar[i] <<endl;
            if(i!=0)
            max_heapify(ar,left);
        }
}
        return 0;
}

int max_heapify(vector<int>& ar,int i){
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
  if(ar[left]<ar[right]){
    if(ar[i]<ar[right]){
            swap(ar[i],ar[i*2+2]);
           // cout << ar[i] <<endl;
if(i!=0)
            min_heapify(ar,right);
        }
}
else{
        if(ar[i]<ar[left]){
            swap(ar[i],ar[i*2+1]);
           // cout << ar[i] <<endl;
           if(i!=0)
            min_heapify(ar,left);
        }
}
}

else if(count==1){
   if(ar[i]<ar[left]){
            swap(ar[i],ar[i*2+1]);
            // cout << ar[i] <<endl;
            if(i!=0)
            min_heapify(ar,left);
        }
}
        return 0;
}

int isMinLevel(int i){
int k=log2(i+1);
if(k%2==1)
    return 0;
else
    return 1;
}

