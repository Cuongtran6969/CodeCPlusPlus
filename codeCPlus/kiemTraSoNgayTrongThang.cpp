#include<iostream>
using namespace std;
main() {
	int month, year;
	do{
		cout<<"Nhap vao thang: ";
		cin>>month;
	  }while(month<1 && month>12);
	cout<<"Nhap vao nam: ";
	cin>>year;
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"Thang "<<month<<" Nam "<<year<<" co 31 ngay"<<endl;
			break;
		case 2:
			if((year%4==0 && year%100!=0)||(year%400==0)) {
				cout<<"Thang "<<month<<" Nam "<<year<<" co 29 ngay"<<endl;
			} else {
				cout<<"Thang "<<month<<" Nam "<<year<<" co 28 ngay"<<endl;
			}
		default:
			cout<<"Thang "<<month<<" Nam "<<year<<" co 30 ngay"<<endl;
	}
}
