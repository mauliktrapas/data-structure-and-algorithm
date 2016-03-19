#include <iostream>

using namespace std;

int main()
{
    int n,a,counter=0;
    cout << "enter n" << endl;
    cin >> n;
    while(n>2){
        int max_index=((n-2)/2)+1;
        int k=(n-1)-max_index;
        counter+=(k*(k+1))/2;

        int N=max_index-(max_index/2);
        if(max_index%2==0){
             a=(n-1)-(max_index/2)-3;

        }
        else{
             a=(n-1)-(max_index/2)-2;

        }
        if(a>0 && a%3==0){
                   k=N*a-((N*(N-1)*3)/2);
                counter+=k;

        }
        else if(a>0 && a%3!=0){
         k=(N-1)*a-(((N-2)*(N-1)*3)/2);
           counter+=k;

        }
        n=(max_index/2)-1;
    }
    cout << "min inversion=0" << endl;
    cout << "max inversion=" << counter;
    return 0;
}
