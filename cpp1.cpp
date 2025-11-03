#include<iostream>
using namespace std;
class base
{
	int no1;
	public:
		int no2;
		void getdata();
		int getno1();
		void showno1();
};
class derived:public base
{
	int no3;
	public:
		void add();
		void display();
};
void base::getdata()
{
	no1=10;
	no2=20;
}
int base::getno1()
{
	return no1;
}
void base::showno1()
{
	cout<<"number1="<<no1<<"\n";
}
void derived::add()
{
	no3=no2+getno1();
}
void derived::display()
{
	cout<<"numbar1="<<getno1()<<"\n";
	cout<<"number2="<<no2<<"\n";
	cout<<"sum"<<no3<<"\n";
}
main()
{
	derived d;
	d.getdata();
	d.add();
	d.showno1();
	d.display();
	d.add();
	d.display();
	return 0;
}

	
	
	
	
	
