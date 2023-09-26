#include"stdio.h"
#include"math.h"
int check(int n, int i, int c) {
	if(i<c) {
		return 0;
	}else if(n%i==0){
		return 0;
	}else {
		return check(n, i++, (int)sqrt(n))!=0);
	}
}
int main() {
	int n;
	printf("input: ");
	scanf("%d", &n); 
	int i=2;
	if(check(n, i, (int)sqrt(n))!=0) {
		printf("so nguyen to");
	}else{
		printf("ko phai la so nguyen to");
	}
} 
