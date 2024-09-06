//FRIEND CLASS 
#include <iostream>
using  namespace std;
class sbi{
	int amount=1000;
	void info()
	{
		cout<<"cutomer of SBI\n";
	}
	friend class axix;
	
};

class axix{
  public:void show(sbi s)
  {
  	cout<<"balance="<<s.amount<<"\n";
  	s.info();
  }
};
int main()
{
    sbi s1;
    axix a;
    a.show(s1);
 	return 0;
}
