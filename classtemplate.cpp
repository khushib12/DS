#include<iostream>

using namespace std;

template <typename T, typename U>

class weight{
	private:
		T kg;
		U grams;
	
	public:
	   void setdata(T x,U y)	
	   {
	   	
		kg=x;
		grams=y;
	   }
	
	   T getkgdata()
	   {
		return kg;
		}
		
	   U getgramdata()
	   {
		return grams;
		}	
        };


int main()
{
	weight <int,double>obj1;
	obj1.setdata(4,2.55);
	
	cout<<"value is"<<obj1.getkgdata()<<endl;
    cout<<"value is"<<obj1.getgramdata()<<endl;	
    
	//weight<double>obj2;
	//obj2.setdata(4.8787878787);
	
	//cout<<"value is"<<obj2.getdata()<<endl;
	
	
	return 0;
}
