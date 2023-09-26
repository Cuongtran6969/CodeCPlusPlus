#include<iostream>
//lam tron diem neu <=0.5 giam, >0.5 tang
using namespace std;
double arr[] = {9.2, 9.8, 7.2, 6.3, 4.5};
double& changeValue(int i) {
	return arr[i];
}
//tra ve 1 tham chieu toi phan tu tai vi tri i
//mean: double& x = arr[i] 
//return o day la return tham chieu cua phan tu arr[i]
main() {
	for(int i=0; i<5; i++) {
		if(arr[i]-(int)arr[i]>0.5) {
			changeValue(i)=(int)arr[i]+1;
		}else{
			changeValue(i)=(int)arr[i];
		}
	}
	
	cout<<"Sau khi change: "<<endl;
	for(int i=0; i<5; i++) {
		cout<<arr[i]<<endl;
	}
}
