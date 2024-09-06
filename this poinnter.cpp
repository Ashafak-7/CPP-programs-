//this pointer

#include <iostream>
using namespace std;
class cybrom{
	int a,b;
	public :void sum(int a,int b)
	{
//		this -> a=a;
//		this -> b=b;
		cout<<"sum of two numbers "<<a+b<<"\n";
	}
	void sum()
	{
		cout<<"program of function overloading \n";
		cout<<"a="<<a<<"\t"<<"b="<<b<<"\n";
	}
};
int main()
{
    cybrom c;
    c.sum(12,12);
    c.sum();
 	return 0;
}
