#include<stdio.h>
#include<string.h>
int main() {
	char str[10];
	//gets accecpt input a string
	gets(str);
	//use strcpy to copy value uppercase for str
	strcpy(str,strupr(str));
	//declare and initial equal 0
	int nVowels = 0;
	int nConsonants = 0;
	int nOther = 0;
	int i;
	//use for loop get each character in each index
	for(i=0; i<strlen(str); i++) {
	 char ch = str[i];
	 //if is text in ascii belong to A -> Z then check Vowels and Consonants
	 //if is a, e, i, o, u increase nVowels one else increase Consonants one
	 //if not belong to A -> Z will increase Other one
	 if(ch >= 'A' && ch <= 'Z') {
	  switch(ch) {
	   case 'A':
	   case 'E':
	   case 'I':
	   case 'O':
	   case 'U': nVowels++;
	   break;
	   default: nConsonants++;
	  }
	 } else {
	   nOther++;
	 }  
	}
	printf("Vowels = %d", nVowels);
	printf("\nConsonants = %d", nConsonants);
	printf("\nOther = %d", nOther);
}
