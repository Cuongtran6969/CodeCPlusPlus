#include"iostream"
using namespace std;
main() {
	int mang[50];
	int x;
	cout<<"Nhap vao so luong pt: ";
	cin>>x;
	for(int i=0; i<x; i++) {
		cin>>mang[i];
	}
	cout<<"Xuat mang: "<<endl;
	for(int i=0; i<x; i++) {
		cout<<mang[i]<<endl;
	}
	cout<<"Kiem tra cac so chan: "<<endl;
	for(int i=0; i<x; i++) {
		if(mang[i]%2==0) {
			cout<<mang[i]<<" ";
		}
	}
	
}
