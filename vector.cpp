#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std::vector<int>my_file;
	
	my_file.push_back(10);
	my_file.push_back(20);
	my_file.push_back(30);
	my_file.push_back(40);
	my_file.push_back(0);
	
	cout<<"vector size = "<<my_file.size()<<endl;	
	
	for(int i=0;i<my_file.size();i++)
	cout<<"vector at"<<i<<" "<<my_file[i]<<endl;
	
	
	my_file.erase(my_file.begin());
	
	cout<<endl;
		for(int i=0;i<my_file.size();i++)
	cout<<"vector at"<<i<<" "<<my_file[i]<<endl; 
	
		
	my_file.erase(my_file.begin()+2);
	cout<<endl;
		for(int i=0;i<my_file.size();i++)
	cout<<"vector at"<<i<<" "<<my_file[i]<<endl; 
	
my_file.erase(std::remove(my_file.begin(),my_file.end(),30),my_file.end());

	for(int i=0;i<my_file.size();i++)
	cout<<"vector at"<<i<<" "<<my_file[i]<<endl; 
	
	return 0;
	
}
