#include<stdio.h>
int main() {
	int n;
	do{
	 printf("Enter array length: ");
	 scanf("%d", &n);	
	} while(n<0);
	 
	 int arr[n];
	int i;
	
	for(i=0; i<n; i++) {
		printf("Enter value of arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	
	int indexFind = -1;
	
	for(i=0; i<n; i++) {
		if(arr[i] == 10) {
			indexFind = i;
		    break;
		} 
	}
	
	if(indexFind==-1){
		printf("Ko tim thay");
	} else {
		printf("Tim thay tai %d", indexFind);
	}
}
