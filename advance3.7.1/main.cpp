#include <iostream>
#include <vector>
using namespace std;
vector <int> ar;

int main()
{
    int j=0,ar_size,count=1,temp,counter=0;
    cout << "enter no of element you want to insert" << endl;
    cin >> ar_size;
    for(int i=0;i<ar_size;i++){
            cin >> temp;
            ar.push_back(temp);
    }
    int even_check=ar_size-1;

    for(int i=ar_size-1;i>1;i--){
        int child=ar[i];
        int parent=ar[(i-1)/2];

        if(even_check%2==0){
if(child<ar[2*i-1] || 2*i-1>=ar_size){
    if(child<ar[2*i] || 2*i>=ar_size){
        if(ar[i-1]<ar[2*i+1] || 2*i+1>=ar_size){
            if(ar[i-1]<ar[2*i+2] || 2*i+2>=ar_size){
                counter++;
            }
        }
    }
}
        }
even_check--;
int FirstStartInd=(i-1)/2;
for(int j=FirstStartInd-1;j>=0;j--){
   if(child>ar[j]){
             if(child<ar[4*j+3] || 4*j+3>=ar_size){
                 if(child<ar[4*j+4] || 4*j+4>=ar_size){
                if(ar[2*j+1]>parent){
                    if(ar[2*i+1]>ar[2*j+1] || 2*i+1>=ar_size-1){
                        if(ar[2*i+2]>ar[2*j+1] || 2*i+1>=ar_size-1){
                           counter++;


                        }
                    }
                }
             }
        }
    if(child<ar[4*j+5] || 4*j+5>=ar_size){
        if(child<ar[4*j+6] || 4*j+6>=ar_size){
            if(ar[2*j+2]>parent || 2*j+2>=ar_size){
                if(ar[2*i+1]>ar[2*j+2] || 2*i+2>=ar_size){
                    if(ar[2*i+2]>ar[2*j+2] || 2*i+2>=ar_size){
                           counter++;

                        }
                    }
                }
                        }
                    }
   }
}
}
    cout << counter << endl;
    return 0;
}
