#include<stdio.h>
int main() {
	int x, i;
	scanf("%d", &x);
    int root[x]; 
    for(i=0; i < x; i++) {
    	scanf("%d", &root[i]);
	}
	
	int m = 0, n = 0;
	
	for(i = 0; i < x; i++) {
		if(root[i] % 2==0) {
			m++;
		} else {
			n++;
		}
	}
	int arrEven[m];
	int arrOdd[n];
	int j = 0, k = 0;
	for(i = 0; i < x; i++) {
		if(root[i] % 2 == 0) {
			arrEven[j] = root[i];
			j++;
		} else {
			arrOdd[k] = root[i];
			k++;
		}
	}
	//sap xep mang chan
	for(i = 0; i < m - 1; i++) {
		for(j = i+1; j < m; j++) {
			if(arrEven[i] > arrEven[j]) {
				int temp = arrEven[i];
				arrEven[i] = arrEven[j];
				arrEven[j] = temp;
			}
		}
	}
	//sap xep le
	for(i = 0; i < n - 1; i++) {
		for(j = i+1; j < n; j++) {
			if(arrOdd[i] > arrOdd[j]) {
				int temp = arrOdd[i];
				arrOdd[i] = arrOdd[j];
				arrOdd[j] = temp;
			}
		}
	}

	int h = 0;
	for(i = 0; i < m; i++) {
		root[h] = arrEven[i];
		h++;
	}

	for(i = 0; i < n; i++) {
		root[h] = arrOdd[i];
		h++;
	}
	printf("OUTPUT:\n");
	for(i = 0; i < x; i++) {
		printf("%d ", root[i]);
	}
}
