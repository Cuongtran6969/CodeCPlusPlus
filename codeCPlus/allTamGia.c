#include"stdio.h"
#include"string.h"
void xuatMang(char str[]) {
	int i;
	for(i=0; i<strlen(str); i++) {
		printf("%c", str[i]);
	}
}
int main() {
	int n, i, j=0;
	scanf("%d", &n);
	char strA[100];
	char ch = 65;
	char strB[100];
	for(i=0; i<n; i++) {
		  strcpy(strB, strA);//ko co / A /	
          strA[j]=ch;
          j++;
		  ch++;
		  xuatMang(strA);
		  strrev(strB);
		  xuatMang(strB);	
		  strrev(strB);
          printf("\n");
	}
}
