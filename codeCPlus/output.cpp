#include<iostream>
using namespace std;
main() {
	char str[10];
	char errorName[10];
	//input
	cin>>str;
	//cerr khong cho phép chen them(ko dem), 
	cerr<<"Message error...."<<endl;
	//output
	cout<<"Message: "<<str<<endl;
	cin>>errorName;
	//clog cho phép de co the chen them, 
	clog<<"Message error name: "<<errorName;
}
