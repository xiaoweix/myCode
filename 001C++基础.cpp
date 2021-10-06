#include<iostream>
using namespace std;
int main()
{
	cout<<"Hello C++\n"<<"输出语句"<<endl;//输出语句 
	cout<<"Hello world！" ; 
	int a=10;
	float b=10.5;
	char c='A';
	string S="Hello S";
	cout<<" a="<<a<<" b="<<b<<" c="<<c<<" S="<<S<<endl;
	
	cin>>a;//从键盘输入一个数字到a 
	cin>>b;
	cin>>c;
	cin>>S;
	cout<<" a="<<a<<" b="<<b<<" c="<<c<<" S="<<S<<endl;
	cin>>b>>a;
	cout<<" a="<<a<<" b="<<b;
	return 0;
} 
