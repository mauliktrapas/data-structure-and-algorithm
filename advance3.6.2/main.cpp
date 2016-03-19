#include <iostream>

using namespace std;
 void first(int a[],int i){
void second(int a[],int i);
		if(a[i]<=a[i*2+1]&&a[i]<=a[i*2+2])
			second(a,i);
	}
	 void second(int a[],int i){
		if(a[i]<=a[i*2+1]&&a[i]<=a[i*2+2])
			first(a,i);
	}
int main()
{
		int a[]={4,2,12};
		int n=3-1,max=0,end=0,maxl=0,start=0;
		for(int i=0;i<n;i++){
		if(a[i]<=a[i*2+1]&&a[i]<=a[i*2+2]){
			first(a,i*2+1);
		}
		}
		int b[20];

		int j=0;
		cout << maxl << endl;
		b[j]=a[start];
		j++;
		for(int i=start*2+1;i<=maxl;i=i*2+1){
			b[j]=a[i];cout << "Sdfghj" << endl;
			j++;
		}
		for(int i=start*2+2;i<=maxl;i=i*2+2){
			b[j]=a[i];
			j++;
		}
		for(int i=0;b[i]!=0;i++){
			cout << b[i] << endl;
		}
    return 0;
}




