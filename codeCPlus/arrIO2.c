#include<stdio.h>
void inputArray(int arr[100], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
void outputArray(int arr[100], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%d\n", arr[i]);
	}
}
int sumArray(int arr[100], int n) {
	int i, sum=0;
	for(i=0; i<n; i++) {
		sum+=arr[i];
	}
	return sum;
}
int main() {
	int arr[100];
	int n;
	printf("Nhap vao so phan tu: ");
	scanf("%d", &n);
	inputArray(arr, n);
    outputArray(arr, n);
    int sum = sumArray(arr, n);
    printf("sum all e of arr = %d", sum);
}
