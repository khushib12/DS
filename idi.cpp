#include <iostream>
using namespace std;

int main() {
    int t,a1,a2,a3,c1,c2,c3;
    cin>>t;
    
     for(int i=1;i<=t;i++)
     
	 
     {
         cin>>a1;
		 cin>>a2;
		 cin>>a3;
		 cin>>c1;
		 cin>>c2;
		 cin>>c3;
     }
    
    for(int j=0;j<t;j++)
    {
	
    
    if(a1>a2 && a1>a3 && a1!=a2 && a1!=a3)
        {
            if(c1>c2 && c1>c3 &&c1!=c2 && c1!=c3)
               {
                   cout<<"FAIR"<<endl;
               }
            
            else cout<<"NOT FAIR"<<endl;   
            
        }
        
    else if ( a2>a3 && a2>>a1 && a2!=a1 && a2!=a3 ) 
        {
            if(c2>c3 && c2>c1 && c2!=c1 && c2!=c3)
            {
                cout<<"FAIR"<<endl;
            }
            
            else cout<<"NOT FAIR"<<endl;
        }
        
    else if(a1=a2=a3)
    
         {  if(c1=c2=c3)
         	cout<<"FAIR"<<endl;
         	
         	else cout<<"NOT FAIR"<<endl;
		 }
        
    else cout<<"NOT FAIR"<<endl; 
}

    
	// your code goes here
	return 0;
}

