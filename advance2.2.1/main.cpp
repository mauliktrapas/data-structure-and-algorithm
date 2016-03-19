#include <iostream>

using namespace std;

int main()
{
        cout << "Enter value of n" << endl;
        int n;
        cin >> n;
        cout << "Enter value of element(rank) " << endl;
        int element;
        cin >> element;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int x=i*j;
                int y;
                y=(n*n)-(((n+1)-i)*((n+1)-j));
                if(element>=x && element<=(y+1)){
                    cout << i << "  " << j << endl;
                }
            }
        }

        cout << "Enter value of location " << endl;
        int x,y;
        cin >> x >> y;
              for(int i=x*y;i<=((n*n)-(((n+1)-x)*((n+1)-y)))+1;i++){
                cout << i << " ";
              }
    return 0;
}
