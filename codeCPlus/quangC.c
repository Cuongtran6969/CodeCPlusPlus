#include<stdio.h>
int main() {
	double a, b, results;
	char op;
	printf("Enter: a = ");
	scanf("%ld", &a);
	printf("Enter: b = ");
	scanf("%ld", &b);
	fflush(stdin);
	printf("Enter operation: ");
	scanf("%c", &op);
	printf("\na = %d, b=%d",a, b);
	
} 
