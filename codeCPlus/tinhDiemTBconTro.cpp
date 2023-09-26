#include<iostream>
using namespace std;
double average(int *arr, int n) {
	double sum=0;
	double avg;
	for(int i=0; i<n; i++) {
		sum+=arr[i];
	}
	avg = sum/n;
	return avg;
}
main() {
	int arr[5] = {10, 9, 8, 7, 6};
	double avg;
	cout<<arr;
	avg = average(arr, 5);
	cout<<"Diem trung binh = "<<avg;
}
