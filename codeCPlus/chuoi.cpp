#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

#define n 5
main() {
	char str[n];
//	for(int i=0; i<n; i++) {
//		str[i]=toupper(getchar());
//	}
//	for(int i=0; i<n; i++) {
//		putchar(str[i]);
//	}
//	c2;
	do {
		cout<<"Nhap vao chuoi ky tu: ";
		gets(str);
	}while(strlen(str)<0 || strlen(str)>5);

	strupr(str);
	cout<<str;
}
