#include<stdio.h>
#include<string.h>

int main() {
  //kieu du lieu ten_bien[so luong phan tu];
  //nhap gia tri cho cac pt cua mang va in ra chung
  int arr[2];
  //index: 0 1 2 3 4 5 6 7 8 9 
  //vi tri
  //gia tri tai index ta viet la: arr[index]
  int i = 0;
  for(i=0; i<2; i++) {
  	printf("\nEnter value index %d: ", i);
  	scanf("%d", &arr[i]);
  }
  
  for(i=0; i<2; i++) {
  	printf("\nValue of index %d = ", arr[i]);
  }
  
}

