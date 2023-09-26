#include<stdio.h>

int getNumberOfArray() {
	int a;
	
	do{
		printf("Enter number of arr: ");
		scanf("%d", &a);
	}while( a < 0 );
	
	return a;
}
//nhap mang
//nhan tham so
void nhapMang(int arr[], int n) {
	int i;
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
}

void inRaSoChan(int arr[], int n) {
	printf("SO chan: ")
	int i;
	for(i=0; i < n; i++) {
		if(arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
} 

int main() {
  int n = getNumberOfArray();
  
  int arr[n]; 
  
  //truyen doi so
  nhapMang(arr, n);
  
  inRaSoChan(arr, n);
  
}

