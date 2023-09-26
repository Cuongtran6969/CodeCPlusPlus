#include<iostream>
#include<math.h>
using namespace std;
main() {
	//ax^2+bx+c
	float a, b, c, denlta, x1, x2;
	cout<<"Nhap vao a: ";
	cin>>a;
	cout<<"Nhap vao b: ";
	cin>>b;
	cout<<"Nhap vao c: ";
	cin>>c;
	denlta = (b*b)-(4*a*c);
	if(denlta<0) {
		cout<<"Phuong trinh vo nghiem!";
	}else if(denlta>0) {
		x1=(-b-sqrt(denlta))/(2*a);
		x2=(-b+sqrt(denlta))/(2*a);
		cout<<"Phuong trinh co 2 nghiem phan biet x1 = "<<x1<<" va x2 = "<<x2;
	}else{
		x1=x2=-b/(2*a);
		cout<<"Phuong trinh co 2 nghiem kep x1=x2="<<x1;
	}
}
