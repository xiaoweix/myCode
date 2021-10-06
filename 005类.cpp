#include<iostream>
using namespace std;
class hero{
public:	
	string name;
	int HP;//类的属性 
	int jineng;
	string sex;
	int price;
	void Q();//类的方法  函数 
	void W();
	void E();
	void R();
	void speak()
	{
		cout<<"哈哈哈哈哈哈"<<endl;
	} 
	void zwjs()
	{
		cout<<"哈哈哈哈哈哈,我是"<<name<<endl;
	} 
};

int main()
{
	hero h1;
	h1.name="xxw";
	h1.speak();
	h1.zwjs();
	hero h2;
	h2.name="xxw2";
	h2.speak();
	h2.zwjs();
	return 0;
} 
