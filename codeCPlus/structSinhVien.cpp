#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
typedef struct{
	char name[30];
	int age;
	double averageScore;
} sinhVien;
void nhapSinhVien(sinhVien sv[], int n) {
	for(int i=0; i<n; i++) {
		cout<<"sinh vien stt: "<<i+1<<endl;
		cin.ignore();
		cout<<"name: ";
		gets(sv[i].name); 
		cout<<"age: ";
		cin>>sv[i].age;
		cout<<"average score: ";
		cin>>sv[i].averageScore;
	}
}
void xuatSinhVien(sinhVien sv[], int n) {
	for(int i=0; i<n; i++) {
		cout<<"std: "<<i+1<<endl;
		cout<<"Name: "<<sv[i].name<<endl;
		cout<<"Age: "<<sv[i].age<<endl;
		cout<<"Average score: "<<sv[i].averageScore<<endl;
	}
}
void timKiemSinhVien(sinhVien sv[], int n) {
	char searchName[30];
	cout<<"Nhap sinh vien can tim: ";
	cin.ignore();
	gets(searchName);
	for(int i=0; i<n; i++) {
		if(strcmp(sv[i].name, searchName)==0) {
			cout<<sv[i].name<<endl;
			cout<<sv[i].age<<endl;
		}
	}
}
main() {
	sinhVien *sv1;
	int n;
//	cout<<"Nhap vao so luong sinh vien: ";
//	cin>>n;
//	sv1 = (sinhVien*)malloc(n*sizeof(sinhVien));
//	nhapSinhVien(sv1, n);
//	xuatSinhVien(sv1, n);
//	timKiemSinhVien(sv1, n);
	free(sv1);
	
	string myName = "Cuong tran";
	string herName = "Cuong";
	int index = myName.find('b');
	cout<<index; 
}
