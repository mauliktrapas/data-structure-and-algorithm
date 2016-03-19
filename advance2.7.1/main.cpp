////////////////////////////////////////////////////////////////////find error
#include <iostream>

using namespace std;
//const int t=4;
//const int h=3;
int key,n,count2=0,hike=0;
int ar[4][4];
    class dArray{
 public : void BinarySearch(int ar[4][4]){
      n=4;
   /*  for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ar[1][j] << endl;
        }
     }*/
partition(0,0,n-1,n-1,key,ar);
 }
 public : int partition(int x1,int y1,int x2,int y2,int key,int ar[4][4]){

     cout << "y1 value " << y1 << endl;
     if(x1>-1 && y1>-1 && x2<n && y2<n && hike!=-100 && x1<n && y1<n){
            cout << ar[(x1+x2)/2][(y1+y2)/2] << "middle" <<endl;
 if(ar[(x1+x2)/2][(y1+y2)/2]>key){
        count2++;
        if(count2<1)
       partition(-100,y1,((x1+x2)/2)-1,(y1+y2)/2,key,ar);
   /* partition(x1,y1,((x1+x2)/2)-1,(y1+y2)/2,key,ar);
 count2++;
       if(count2<1)
       partition(-100,y1,((x1+x2)/2)-1,(y1+y2)/2,key,ar);
    partition(x1,((y1+y2)/2)+1,((x1+x2)/2)-1,y2,key,ar);
    count2++;
          if(count2<1)
       partition(-100,y1,((x1+x2)/2)-1,(y1+y2)/2,key,ar);
    partition((x1+x2)/2,y1,x2,((y1+y2)/2)-1,key,ar);
 */}
 else if(ar[(x1+x2)/2][(y1+y2)/2]<key){
        count2++;
        cout << count2 << "   count2" << endl;

              if(count2<2)
       partition(-100,y1,((x1+x2)/2)-1,(y1+y2)/2,key,ar);
       partition(x1,((y1+y2)/2)+1,(x1+x2)/2,y2,key,ar);
 count2++;
       if(count2<2)
       partition(-100,y1,((x1+x2)/2)-1,(y1+y2)/2,key,ar);

    partition(((x1+x2)/2)+1,y1,x2,(y1+y2)/2,key,ar);
    count2++;
          if(count2<2)
       partition(-100,y1,((x1+x2)/2)-1,(y1+y2)/2,key,ar);
    partition(((x1+x2)/2)+1,((y1+y2)/2)+1,x2,y2,key,ar);
*/
 }
  else {
    cout << (x1+x2)/2 << " " << (y1+y2)/2 << "hahaha" << endl;
    hike=-100;
  }

 }
else
    return 0;
 }
//cout << key << "key" << endl;

    //  int k= sizeof(ar);
     // cout << k << endl;
   /* int mid;
while(upper>=lower){
mid=(lower+upper)/2;
if(ar[mid]>desired_element){
upper=(mid-1);
}

else if(ar[mid]<desired_element){
lower=mid+1;
}

else if(ar[mid]==desired_element){
cout << mid << endl;
count++;
break;
}
}*/

   };

    int main(){

       /*cout << "enter no of row and column you want to insert" << endl;
        int ar_size;
        cin >> ar_size;
    int ar[ar_size][ar_size];

    int ar_i,ar_j;
    for(ar_i = 0; ar_i < 6; ar_i++) {
    for(ar_j=0;ar_j<6;ar_j++){
    cin >> ar[ar_i][ar_j];
    }
    }*/
  //  int t=4;
   int ar[4][4] = {
            {10, 20, 30, 33},
            {15, 25, 35, 45},
            {38, 49, 57, 68},
            {58, 67, 71, 88}
            };
    cin >> key;
    dArray d_obj;
    d_obj.BinarySearch(ar);
    }


