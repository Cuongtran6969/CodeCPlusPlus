#include<iostream>
#include<string.h>
using namespace std;
void nhapThongTinSinhVien(char str[][30], int m) {
	for(int i=0; i<m; i++) {
		do{
			gets(str[i]);
		}while(strlen(str[i])>30);
	};
}
void xuatThongTin(char str[][30], int m) {
	for(int i=0; i<m; i++) {
		cout<<"SinhVien "<<i<<" | "<<str[i]<<endl;
	}
}
void timDoDaiChuoiMin(char str[][30], int m) {
	char strMin[30];
	strcpy(strMin, str[0]);
	for(int i=0; i<m-1; i++) {
		for(int j=i+1; j<m; j++) {
			if(strlen(str[i])>strlen(str[j])) {
				strcpy(strMin, str[j]);
			}
		}
	}
	cout<<"Mang min: "<<strMin;
}
main() {
  int m;
  char str[30][30];
  cout<<"Nhap so luong hoc sinh: ";
  cin>>m;
  cin.ignore();
  nhapThongTinSinhVien(str, m);
  xuatThongTin(str, m);
  timDoDaiChuoiMin(str, m);
}
