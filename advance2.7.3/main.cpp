#include <iostream>
#include<stdio.h>
using namespace std;

class TwoD{
public : void search(int *p,int size, int fromRow, int toRow,
							int fromCol, int toCol, int key)
	{
/*
		for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                cout << *p ;
                p++;
            }
            cout << endl;
		}
*/
		int i = (toRow+fromRow )/2;
		int j = (toCol+fromCol )/2;
		cout << *(p+(size*i)+j) << endl;
		if (*(p+(size*i)+j) == key)
		cout <<  "  x-cordinate  " << i << "  y cordinate  " << j << endl;

		else
		{
			if (i!=toRow || j!=fromCol)
			search(p,size,fromRow,i,j,toCol,key);

			if (fromRow == toRow && fromCol + 1 == toCol)
			if (*(p+(fromRow*size)+toCol)== key)
				cout <<  "  x-cordinate  " << fromRow << "  y cordinate  " << toCol << endl;

			if (*(p+(size*i)+j) < key)
			{

				if (i+1<=toRow)
				search(p,size, i+1, toRow, fromCol, toCol, key);
			}

			else
			{
				if (j-1>=fromCol)
				search(p,size, fromRow, toRow, fromCol, j-1, key);
			}

		}

	}

};

int main()
{
int ar_size;
cin >> ar_size;
		int ar[ar_size][ar_size];
		for(int i=0;i<ar_size;i++){
                for(int j=0;j<ar_size;j++){
                    cin >> ar[i][j];
                }
		}
		int n=ar_size;
		int key;

		cin >> key;
		TwoD Two_obj;
			Two_obj.search(&ar[0][0],ar_size, 0, n-1, 0, n-1, key);

    return 0;
}


