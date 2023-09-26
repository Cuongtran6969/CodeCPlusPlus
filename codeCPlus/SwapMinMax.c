#include<stdio.h>
void input(int arr[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("indexfind arr[%d]", i);
		scanf("%d", &arr[i]);
	}
}
int max(int arr[], int n) {
	int i;
	int max1=arr[0];
	int index = 0;
	for(i=0; i<n; i++) {
		if(max1<arr[i]) {
			max1=arr[i];
			index = i;
		}
	}
	return index;
}

int min(int arr[], int n) {
	int i;
	int min1=arr[0];
	int index = 0;
	for(i=0; i<n; i++) {
		if(min1>arr[i]) {
			min1=arr[i];
			index = i;
		}
	}
	return index;
}
int main() {
	int n;
	int i;
	int arr[n];
	//input value of array
	input(arr, n);
	//find index have min and index have max
	int a = min(arr, n);
	int b = max(arr, n);
	//swap value of index min and max
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp; 
	printf("OUTPUT:\n");
	//printf after swap
	for(i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
}
