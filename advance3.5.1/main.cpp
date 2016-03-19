#include <queue>
#include <iostream>
using namespace std;
queue<int> q1;
queue<int> q2;

int main(){
    int n,max,temp;
    cout << "enter number number of element you want to insert" << endl;
    cin >> n;
    cout << "eneter elements" << endl;
    for(int i=0;i<n;i++){
            cin >> temp;
        q1.push(temp);
    }
    while(q1.size() || q2.size()){
          max=q1.front();
    q1.pop();
    while(q1.size()){
        if(max<=q1.front()){
            q2.push(max);
            max=q1.front();
        }
        else
            q2.push(q1.front());
        q1.pop();
    }
    cout << max << " ";

            max=q2.front();
    q2.pop();
    while(q2.size()){
        if(max<=q2.front()){
            q1.push(max);
            max=q2.front();
        }
        else
            q1.push(q2.front());
        q2.pop();
    }
    cout << max << " ";
    }

    return 0;
}
