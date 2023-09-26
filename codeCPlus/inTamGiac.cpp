#include<iostream>
using namespace std;
main() {
	int x;
	cout<<"Nhap vao do dai canh: ";
	cin>>x;
	for(int i=1; i<=x; i++){
		for(int j=0; j<i; j++) {
			cout<<"* ";
		}
		cout<<endl;
	}
}
