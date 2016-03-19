#include <iostream>

using namespace std;

class TwoD{
public : void search(int** ar, int fromRow, int toRow,
							int fromCol, int toCol, int key)
	{

		int i = (toRow+fromRow )/2;
		int j = (toCol+fromCol )/2;
		if (ar[i][j] == key)
		cout <<  "  x-cordinate  " << i << "  y cordinate  " << j << endl;

		else
		{
			if (i!=toRow || j!=fromCol)
			search(ar,fromRow,i,j,toCol,key);

			if (fromRow == toRow && fromCol + 1 == toCol)
			if (ar[fromRow][toCol] == key)
				cout <<  "  x-cordinate  " << fromRow << "  y cordinate  " << toCol << endl;

			if (ar[i][j] < key)
			{

				if (i+1<=toRow)
				search(ar, i+1, toRow, fromCol, toCol, key);
			}

			else
			{
				if (j-1>=fromCol)
				search(ar, fromRow, toRow, fromCol, j-1, key);
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
			Two_obj.search(ar, 0, n-1, 0, n-1, key);

    return 0;
}


