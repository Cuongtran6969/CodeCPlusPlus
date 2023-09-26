#include<iostream>
using namespace std;

void inputArray(int arr[][3]) {
	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>arr[i][j];
		}
	}
}
void OutPutArray(int arr[][3]) {
	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
void sumArray() {
	
}

main() {
	int arr[2][3];
	inputArray(arr);
	OutPutArray(arr);
}
