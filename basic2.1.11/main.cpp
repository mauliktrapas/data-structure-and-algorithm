#include <iostream>
using namespace std;
int count=0;
int main() {
void BinarySearch1(int* ar,int lower,int upper,int desired_element);
int BinarySearch2(int* ar,int lower,int upper,int desired_element);
int t,element,desired_element,lower,upper,method;
cout << "enter 1 for iteration, 2 for recursion " << endl;
cin >> method;
cout << "enter no of element" << endl;
cin >> t;
int ar[t];
cout << "enter elements" << endl;
for(int i=0;i<t;i++){
cin >> element;
ar[i]=element;
}
cout << "enter desired element" << endl;
cin >> desired_element;

upper=t-1;
lower=0;

if(method==1)
 BinarySearch1(ar,lower,upper,desired_element);
else
  count=BinarySearch2(ar,lower,upper,desired_element);

if(count==-2)
cout << "element not found" << endl;
	return 0;
}

void BinarySearch1(int* ar,int lower,int upper,int desired_element){
    int mid;
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
}
}

int BinarySearch2(int* ar,int lower,int upper,int desired_element){
     int mid;
mid=(lower+upper)/2;
if(ar[mid]>desired_element){
return BinarySearch2(ar,lower,mid-1,desired_element);
}

else if(ar[mid]<desired_element){
return BinarySearch2(ar,mid+1,upper,desired_element);
}

else if(ar[mid]==desired_element){
        cout << mid << endl;
return mid;
}
else
    return -2;
}
