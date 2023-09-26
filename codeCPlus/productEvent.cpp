#include<stdio.h>
int main() {
	int n, i, product = 1;
	do{
		scanf("%d", &n);
	}while(n < 0);
	for(i = 2; i <= n/2; i++) {
	 if(i%2==0) {
	 	product *= i;
	 }
	}
	printf("%d", product);
}
