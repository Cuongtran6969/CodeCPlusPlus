#include<iostream>
#include <algorithm>
using namespace std;
main() {
	string s1 = "Hello";
	string s2 = " World";
	string s3 = " More";
	string s = s1.append(s2);
	cout<<"s = "+s<<endl;
    cout<<"s1 = "+s1<<endl;
    	
	string s4 = s1.append(s2).append(s3);
	cout<<"s4 = "+s4<<endl;
	cout<<"s1 = "+s1<<endl;
	cout<<"s2 = "+s2<<endl;
	cout<<"s3 = "+s3<<endl;
	//find
	string strText = "my name is cuong";
	int index = strText.find("cuong");
	cout<<"vi tri: "<<index<<endl;
	//substr
	string substr1 = strText.substr(2, 7);
	cout<<"substr cut string start index 11:"<<substr1<<endl;//=>cuong

    string name = "T V Cuong";
    name.replace(4, 2, "Phu");
    //=> T V Phuong
    cout<<"name:"<<name<<endl;
    //insert
    string str5 = "This Text";
    string str6 = str5.insert(5, "is ");
    cout<<str5<<endl;
    //upper/lower
    string str7 = "My name is Cuong";
    std::transform(str7.begin(), str7.end(), str7.begin(),::toupper);
    cout<<"str7 upper:"<<str7<<endl;
    
    std::transform(str7.begin(), str7.end(), str7.begin(),::tolower);
    cout<<"str7 lower:"<<str7<<endl;
} 
