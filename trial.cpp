#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
     public:
    int k,m;
    complex()
    {};
    complex(int a,int b)
    {
        k=a;
        m=b;
    }

   complex operator+(const complex& parameter);
};

complex complex::operator+(const complex& parameter)
{
  complex temp;
    temp.k=k+parameter.k;
    temp.m= m + parameter.m;
    return temp;
}



//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
