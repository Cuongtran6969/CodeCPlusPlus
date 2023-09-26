#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
 char str[100];
 int i;
 gets(str);
 
 //C Programming: str
 //c programming: str2
 //str[0] - str2[0] = 32 => lower
 //str1[0] - str[2] = 0 => Upper

 char str1[100];
 strcpy(str1, str);
 char str2[100];
 strcpy(str2, strlwr(str1));

 for(i = 0; i<strlen(str); i++) {
 	if(((int)str[i] + 32) - (int)str2[i] == 0) {
 		str[i] = tolower(str[i]);
	 } else {
	 	str[i] = toupper(str[i]);
	 }
 }
 printf("OUTPUT:\n");
 puts(str);
}
