#include<iostream>
using namespace std;
main() {
	cout << "size of char: "<<sizeof(char)<<endl;
	cout << "size of int: "<<sizeof(int)<<endl;
	cout << "size of short int: "<<sizeof(short int)<<endl;
	cout << "size of long int: "<<sizeof(long int)<<endl;
	cout << "size of float: "<<sizeof(float)<<endl;
	cout << "size of double: "<<sizeof(double)<<endl;
	cout << "size of wchar_t: "<<sizeof(wchar_t)<<endl;
	typedef int a;
	a value=4;
	cout <<"value = "<<value;
	return 0;
}
