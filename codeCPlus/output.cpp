#include<iostream>
using namespace std;
main() {
	char str[10];
	char errorName[10];
	//input
	cin>>str;
	//cerr khong cho ph�p chen them(ko dem), 
	cerr<<"Message error...."<<endl;
	//output
	cout<<"Message: "<<str<<endl;
	cin>>errorName;
	//clog cho ph�p de co the chen them, 
	clog<<"Message error name: "<<errorName;
}
