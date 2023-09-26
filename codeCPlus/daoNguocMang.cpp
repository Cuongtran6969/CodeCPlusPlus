#include<iostream>
using namespace std;
main() {
	int n;
	int arr[10];
	cout<<"Nhap vao so luong phan tu: ";
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<"Xuat mang: "<<endl;
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<endl;
	}
   cout<<"Xuat mang sau khi dao nguoc: "<<endl;
	for(int i=0; i<(n/2); i++) {
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<endl;
	}
}
