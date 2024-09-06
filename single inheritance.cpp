//single inheritance 

#include <iostream>
using namespace std;

class RBI{
	int a=90;
	public:void show()
	{
		cout<<"RBI = "<<a<<"\n";
	}
};

class SBI:public RBI{
    int d=80;
	public : void Fshow()
	{
		cout<<"SBI="<<d<<"\n";
	}
	
};
int main()
{
    SBI r;
    r.Fshow();
    r.show();
    cout<<r.d;
 	return 0;
}
