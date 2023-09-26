#include<iostream>
using namespace std;
 
  int giaiThua(int x) {
  	if(x==0) 
	  return 1;
  	  return giaiThua(x-1)*x;
		//code dang thuc thi tai day giaiThua(x-1)//
  	            //l1 gt(4)*5
  	           //l2 (gt(3)*4)*5
  	          //l3 ((gt(2)*3)*4)*5
  } 
  main() {
  	int a=5;
  	cout<<giaiThua(a);
  }
