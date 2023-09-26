#include<iostream>
#include<ctime>
using namespace std;
main() {
	time_t now = time(0);

	char *time = ctime(&now);
	cout<<time<<endl;
	
	tm *td = gmtime(&now);
	time = asctime(td);
	cout<<time;
	
	tm *ltm = localtime(&now);
	cout<<"Year: "<<1900+ltm->tm_year<<endl;
	cout<<"Month: "<<1+ltm->tm_mon<<endl;
	cout<<"Day: "<<ltm->tm_mday<<endl;
	cout<<"Time: "<<1+ltm->tm_hour<<":";
	cout<<1+ltm->tm_min<<":";
	cout<<1+ltm->tm_sec<<endl;
}
