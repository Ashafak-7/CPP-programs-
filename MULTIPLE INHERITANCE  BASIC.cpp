//MULTIPLE INHERITANCE BASIC

#include <iostream>
using namespace std;

class axis
{
	public : axis()
	{
		cout<<"axis\n";
	}
	~axis()
	{ 
	    cout<<"axis deleted\n";
	}
};
class sbi
{
    public :sbi()
	{
		cout<<"sbi\n";
		
	}
	~sbi()
	{
		cout<<"sbi deleted\n";
	}
};
class cust:public sbi,public axis
{
	public:cust()
	{
		cout<<"cust\n";
	}
	~cust()
	{
		cout<<"cust deleted\n";
	}
};
int main()
{
	
    cust c;
 	return 0;
}
