#include<iostream>
using namespace std;
class hero{
public:	
	string name;
	int HP;//������� 
	int jineng;
	string sex;
	int price;
	void Q();//��ķ���  ���� 
	void W();
	void E();
	void R();
	void speak()
	{
		cout<<"������������"<<endl;
	} 
	void zwjs()
	{
		cout<<"������������,����"<<name<<endl;
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
