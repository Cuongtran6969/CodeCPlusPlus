#include<iostream>
using namespace std;

int fibo(int n) {
	if(n==0 || n==1) {
		return 1;
	}else{
		return fibo(n-1)+fibo(n-2);
	}
}
main() {
	int n;
	cout<<"Nhap so phan tu can xem: ";
	cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"fibo cua "<<(i+1)<<" = "<<fibo(i)<<endl;
	}
}
