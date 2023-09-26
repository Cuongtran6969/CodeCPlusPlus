#include"stdio.h"
#include"string.h"
#include"ctype.h"
int main() {
	char str[50];
	int nVowels = 0;
	int nConsonants = 0;
	int nOther = 0;
	int i;
	gets(str);
	for(i=0; i<strlen(str); i++) {
		char ch = toupper(str[i]);
		if(ch>='A'&&ch<='Z') {
			switch(ch) {
			case'A':
			case'U':
			case'E':
			case'I':
			case'O':
			nVowels++;
			break;
			default: nConsonants++;
		  }
		}else{
			nOther++;
		}
	}
		printf("\nn Vowels: %d", nVowels);
		printf("\nn Consonants: %d", nConsonants);
		printf("\nn Other: %d", nOther);
	}
