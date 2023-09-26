#include<iostream>
using namespace std;
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
main() {
	int n;
	do{
		cout<<"Nhap vao n: ";
		cin>>n;
	}while(n<1 || n>10);
	int arr[100];
	cout<<"Nhap mang: "<<endl;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i]>arr[j]) 
			swap(arr[i], arr[j]);
		}
	}	
	cout<<"Xuat mang sau khi sap xep: "<<endl;
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<endl;
	}
} 
