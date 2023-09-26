#include<iostream>
using namespace std;
main() {
	int arr[10];
	int *ptr, *ptr2=NULL;
	ptr = &arr[0];
	cout<<"dia chi: "<<ptr<<endl;
	for(int i=0; i<10; i++) {
		*(ptr+i)=i;
	//*ptr = i //gan gia tri cho con tro tai vi tri o hien tai gia tri
	//ptr++ //tro vi tri cua con tro sang o tiep theo
	}
	for(int i=0; i<10; i++) {
		cout<<*(ptr+i)<<endl;
	}
	if(ptr2) {
		//0 null
		cout<<"0 null"<<ptr2<<endl;
	}else{
		cout<<"null"<<"\ngia tri con tro null = "<<ptr2<<endl;
	}
	//con tro toi con tro
	int *ptr3, **ptr4, n;
	n = 5;
	ptr3=&n;
	ptr4=&ptr3;
	cout<<"n = "<<n<<endl;
	cout<<"ptr3 = "<<*ptr3<<endl;
	cout<<"ptr4 = "<<*ptr4<<endl;
}
