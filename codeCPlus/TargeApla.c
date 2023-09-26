#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num<=1) {
        return false;
    }
    int i; 
    for (i=2; i<=num/2; i++) {
        if (num%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    int i; 
    printf("OUTPUT:\n"); 
    for (i = n-1; i >=2; i--) {
        if (isPrime(i)) {
            printf("%d\n", i);
            count++;
            if (count == 4) {
                break;
            }
        }
    }

}

