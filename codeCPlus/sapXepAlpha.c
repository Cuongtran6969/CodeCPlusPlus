#include"stdio.h"
int main() {
	char str[4];
	int i, j;
	for(i=0; i<4; i++) {
		scanf("%c", &str[i]);
		fflush(stdin);
	}
	for(i=0; i<3; i++) {
        for(j=i+1; j<4; j++) {
		   if(str[i] > str[j]) {
		   	 char temp = str[i];
		   	 str[i] = str[j];
		   	 str[j] = temp;
		   }
		} 
	}
	for(i=0; i<4; i++) {
		printf("%c ", str[i]);
	}
}
