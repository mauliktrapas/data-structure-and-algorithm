#include <iostream>
#include <vector>
using namespace std;
vector <int> ar;
int count=0,ar_size;
int main()
{
     int input,temp_input,key,index,temp,temp2,temp3;
void delete_node(vector<int>& ar,int i);
int heapify(vector<int>& ar,int i,int ar_size);
void increase_key(vector<int>& ar,int key,int index);
void decrease_key(vector<int>& ar,int key,int index);
    int insert(vector<int>& ar,int i);

    cout << "enter no of element you want to insert" << endl;
    cin >> ar_size;
    for(int i=0;i<ar_size;i++){
            cin >> temp;
            ar.push_back(temp);
    }

cout << "press 1 for insert" << endl;
cout << "      2 for delete" << endl;
cout << "      3 for key increase" << endl;
cout << "      4 for key decrease" << endl;
cout << "      5 for restoring heap property" << endl;

cin >> temp2;
if(temp2==5){
       for(int i=(ar_size-2)/2;i>=0;i--)
     heapify(ar,i,ar_size);

}

else if(temp2==1){
     cout << "enter no of elements you want to insert" << endl;
    cin >> temp3;
  for(int i=0;i<temp3;i++){
            ar_size++;
            cin >> temp;
    ar.push_back(temp);
       insert(ar,ar_size-1);
    }
}

else if(temp2==2){
     cout << "enter no of element you want to delete" << endl;
    int var_delete;
    cin >> var_delete;
    cout << "enter indices of number that you want to delete" << endl;
    for(int i=0;i<var_delete;i++){
            cin >> temp;
       delete_node(ar,temp);
    }
}
else if(temp2==3){
     cout << "enter index and key for increase" << endl;
    cin >> index >> key;
    increase_key(ar,key,index);
}
else{
      cout << "enter index and key for decrease" << endl;
     cin >> index >> key;
    decrease_key(ar,key,index);
}

       cout << "your heap is:" << endl;
 for(int i=0;i<ar_size;i++){
            cout <<  ar[i] << " ";
    }
    return 0;
}

int insert(vector<int>& ar,int i){

if(i>0 || count==0){
        count++;

        if(ar[i]<ar[(i-1)/2]){
            swap(ar[i],ar[(i-1)/2]);
            insert(ar,((i-1)/2));
        }
          else if(ar[i]==ar[(i-1)/2]){
             insert(ar,(i-1)/2);
        }
}
        return 0;
}

void delete_node(vector<int>& ar,int temp_input){
    int heapify(vector<int>& ar,int temp_input,int ar_size);
ar[temp_input]=ar[ar_size-1];
ar_size--;
ar.pop_back();
heapify(ar,temp_input,ar_size);
}

int heapify(vector<int>& ar,int i,int ar_size){
  //  for(int k=0;k<ar.size();k++)
   //  cout << ar[k] << " ";
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
            swap(ar[i],ar[i*2+2]);
           // cout << ar[i] <<endl;
            heapify(ar,right,ar_size);
        }
}
else{
        if(ar[i]>ar[left]){
            swap(ar[i],ar[i*2+1]);
           // cout << ar[i] <<endl;
            heapify(ar,left,ar_size);
        }
}
}

else if(count==1){
   if(ar[i]>ar[left]){
            swap(ar[i],ar[i*2+1]);
            // cout << ar[i] <<endl;
            heapify(ar,i*2+1,ar_size);
        }
}
        return 0;
}

void increase_key(vector<int>& ar,int key,int index){
ar[index]=key;
 heapify( ar, index,ar_size);
}

void decrease_key(vector<int>& ar,int key,int index){
ar[index]=key;
insert(ar,index);
}
