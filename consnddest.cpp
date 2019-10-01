#include<iostream>
using namespace std;

class cars
{
	private:
		string comp_name;
		string model_name;
		string fuel_type;
		float mileage;
		double price;
		
		
	public:
		
		cars()
		{
			cout<<"default constructor called"<<endl;
			comp_name="toyota";
	   	  
		}
	    
	    cars(string mname,string ftype,float m, double p)
	    {
	    cout<<"parametrized constructor called"<<endl;
	   	  model_name=mname;
	   	  fuel_type=ftype;
	   	  mileage=m;
	   	  price=p;
	    	
		}
		cars(cars &obj)
		{
			comp_name=obj.comp_name;
	   	  model_name=obj.model_name;
	   	  fuel_type=obj.fuel_type;
	   	  mileage=obj.mileage;
	   	  price=obj.price;
		}
	
	
	   void setdata(string cname,string mname,string ftype,float m,double p)
	   {
	   	  
	   	
	   	  comp_name=cname;
	   	  model_name=mname;
	   	  fuel_type=ftype;
	   	  mileage=m;
	   	  price=p;
		   }	
		   
		   void dispdata()
		   {
		   	cout<<"car properties"<<endl;
		   	cout<<"company name:"<<" "<<comp_name<<endl;
		   	cout<<"model name:"<<" "<<model_name<<endl;
		   	cout<<"fuel type "<<" "<<fuel_type<<endl;
		   	cout<<"car mileage"<<" "<<mileage<<endl;
		   	cout<<"car price"<<" "<<price<<endl;
		   	cout<<endl;
		   }
};


int main()
{
	cars c1,c2("fortuner","diesel",20.2,3500000);

	
	//c1.setdata("toyota","altis","petrol",15.5,150000);    
	c1.dispdata();
	
		c1.setdata("toyota","altis","petrol",15.5,150000);
	c1.dispdata();
	c2.dispdata();
	cars c3=c1;
	c3.dispdata();
	return 0;
}
