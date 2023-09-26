#include<iostream>
using namespace std;
int tinhTong(int x) {
	if(x==0) {
		return 0;
	}else{
		return tinhTong(x-1)+x;
	}
}
main() {
	int n;
	cout<<"Nhap vao n: ";
	cin>>n;
	int sum = tinhTong(n);
	cout<<"Tong cac so trong khoang [0, "<<n<<"]"<<" = "<<sum;
}
