#include<iostream>
using namespace std;
void inputValue(int &a, int &b) {
	cout<<"Nhap vao a=";
	cin>>a;
	cout<<"Nhap vao b=";
	cin>>b;
}
void checkResult(int a, int b) {
	if(a==0) {
		if(b==0) {
			cout<<"Phuong trinh vo so nghiem!";
		}else{
			cout<<"Phuong trinh vo nghiem!";
		}
	}else{
		cout<<"Phuong trinh co nghiem x="<<-b/a;
	}
}
main() {
	//ax+b=0
	int a, b;
	inputValue(a, b);
	checkResult(a, b);
}
