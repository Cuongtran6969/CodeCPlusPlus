#include<stdio.h>
int main() {
	int n;
	int sum;
	//input n
	scanf("%d", &n);
	int arr[n], i;
	//input array
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	//input sum
	scanf("%d", &sum);
	int j;
	printf("OUTPUT: \n");
	for(i = 0; i < n; i++) {
		for(j = i+1; j < n; j++) {
			if(arr[i] + arr[j] == sum) {
				printf("%d\n%d", i, j);
				return;
			}
		}
	}
}
