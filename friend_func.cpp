#include<iostream>
using namespace std;


class distance
{
	int metre;
	
	public:
	 distance()
	 {
	 	metre=0;
	 }
	 
	 void display()
	 {
	 	cout<<"distance"<<metre;
	 }
	 
	 
	 friend void addvalue(distance &d);
};


void addvalue(distance &d)
{
	d.metre = d.metre+5;
}

int main()
{
	distance d1;
	d1.display();
	
	addvalue(d1);
	
	d1.display();
	return 0;
}
