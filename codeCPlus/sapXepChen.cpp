#include<iostream>
using namespace std;

void nhapMang(int arr[10], int n) {
	for(int i=0; i<n; i++) {
		cout<<"Nhap arr["<<i<<"]";
		cin>>arr[i];
	}
}
void sapXepTang(int arr[10], int n) {
   int key, j;
   for(int i=1; i<n; i++) {
   	 key = arr[i];
   	 j = i-1;
   	 while(j>=0 && arr[j]>key) {
   	 	  arr[j+1] = arr[j];
   	 	  j=j-1;
		}
		arr[j+1]=key;
   }
}
void sapXepGiam(int arr[10], int n) {
	int key, j;
	for(int i=0; i<n; i++) {
		int key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]<key) {
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
main() {
	int n;
	int arr[100];
	cout<<"Nhap n: ";
	cin>>n;

	nhapMang(arr, n);
	cout<<"Sap xep mang tang dan: "<<endl;
    sapXepTang(arr, n);
	for(int k=0; k<n; k++) {
		cout<<" "<<arr[k];
	}
   cout<<"\nSap xep mang giam dan: "<<endl;
   sapXepGiam(arr, n);
   for(int k=0; k<n; k++) {
		cout<<" "<<arr[k];
	}
   
   
   
   
   
   
   
   
   
}
