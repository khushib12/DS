#include<iostream>

using namespace std;


class complex
{
	private:
		int real;
		int imaginary;
		
	
	public:
	complex(int r=0,int i=0)
	{
		real=r;
		imaginary=i;
	}
	
	void print()
	{
		cout<<real<<" +"<<imaginary<<"i"<<endl;
		
	}
	
	complex operator +(complex c)
    {
    	complex temp;
    	
    	temp.real=real+c.real;
    	temp.imaginary=imaginary+c.imaginary;
    	return temp;
    	
	}
	};
	
	
	int main()
	{
		complex c1(5,6);
		complex c2(4,3);
		complex c3=c1+c2; //c3=c1(addc2)
		
		c1.print();
		c2.print();
		c3.print();
		
		
		return 0;
	}

