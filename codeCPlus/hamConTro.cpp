#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int * getRandom() {
	static int r[10];
	int max=10;
	int min =0;
	srand((unsigned)time (NULL));
	for(int i=0; i<10; i++) {
		r[i] = rand() % (max-min+1)+min;
		cout<<r[i]<<endl;
	}
	return r;
}

main() {
	int *ptr;
	ptr = getRandom();
	for(int i=0; i<10; i++) {
		cout<<"*(ptr+"<<"i) = "<<*(ptr+i)<<endl;
	}
}
