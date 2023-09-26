#include<iostream>
#include<cstdlib>
using namespace std;
main() {
	int n;
	cout<<"Nhap vao so luong phan tu: ";
	cin>>n;
	int *arr = (int*)malloc(n*sizeof(int));
	for(int i=0; i<n; i++) {
		cout<<"arr["<<i<<"] = ";
		cin>>*(arr+i);
	}
	cout<<"Truoc khi sap xep: ";
	for(int i=0; i<n; i++) {
		cout<<*(arr+i)<<" ";
	}
	cout<<"\nSap xep tang dan: ";
	int key, j;
	for(int i=1; i<n; i++) {
		key = *(arr+i);
		 j= i-1;
		 while(j>=0 && arr[j]>key) {
		 	arr[j+1] = arr[j];
		 	j=j-1;
		 }
		 arr[j+1] = key;
	}
	for(int i=0; i<n; i++) {
		cout<<*(arr+i)<<" ";
	}
    free(arr);
} 
