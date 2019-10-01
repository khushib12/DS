#include <iostream>

using namespace std;

//base class
class shape
{
    protected:
		int width;
		int height;
	public:
		void setwidth(int w)
		    {
		    	width=w;
			}
			
		void setheight(int h)
		  {
		  	height=h;
			  }	
		
};


//derived class
class rectangle: public shape
{
	public:
	int getarea()
	{
		return(width*height);
	
		
	}
};


int main()
{
	rectangle rect;
	
	rect.setwidth(5);
	rect.setheight(7);
	
	
	cout<<"the area is"<<rect.getarea();
	
	return 0;
}
