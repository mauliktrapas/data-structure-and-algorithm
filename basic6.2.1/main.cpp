#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void DFS(int Matrix[RowIndex][],int Source){
     for(int i = 0; i<3; i++)
{
    for(int j = 0; j<4; j++)
    {
         cout << Matrix[i][j];
    }
    cout << endl;
}
}

int main()
{
    int RowIndex,ColumnIndex,Source;
    cin >> RowIndex >> ColumnIndex;
     vector< vector<int> > Matrix(RowIndex, vector<int>(ColumnIndex));
     for(int i = 0; i<3; i++)
{
    for(int j = 0; j<4; j++)
    {
         cin>> Matrix[i][j];
    }
    cout << endl;
}
cin >> Source;
DFS(Matrix[RowIndex][],Source);

    return 0;
}



/*

import java.util.Scanner;
import java.util.Stack;

public class mainn {
    static Stack q=new Stack();
    public static void main(String argv[]){
        Scanner asd = new Scanner(System.in);
        System.out.println("Enter total number of nodes");
        int n=asd.nextInt();
        int[][] matrix=new int[n+1][n+1];
        int source;
        System.out.println("Enter matrix");
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                matrix[i][j]=asd.nextInt();
        System.out.println("Enter source node");
        source=asd.nextInt();
        DFSerch(matrix,source);
    }
    public static void DFSerch(int[][] matrix,int source){

        int[] visited=new int[matrix[source].length];
        int i,element;
        visited[source]=1;
        q.push(source);
        System.out.println(source+"\t");
        while(!q.isEmpty()){
            element=(int) q.pop();
            i=1;

            while(i<=matrix[source].length-1){
                if(matrix[element][i]==1&&visited[i]==0){
                    visited[i]=1;
                    System.out.println(i+"\t");
                    q.push(i);
                    element=i;
                    i=1;
                }
                else{
                    i++;
                }
            }
        }
    }
}
*/
