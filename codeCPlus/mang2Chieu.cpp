#include<iostream>
using namespace std;
main() {
	int arr[10][10];
	int row, col;
	cout<<"input number of row: ";
	cin>>row;
	cout<<"Input number of col: ";
	cin>>col;
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cout<<"arr["<<i<<"]"<<"["<<j<<"] = ";
			cin>>arr[i][j];
		}
	}
	int sum = 0;
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			sum+=arr[i][j];
		}
	}
	cout<<"Sum="<<sum;
}
 
