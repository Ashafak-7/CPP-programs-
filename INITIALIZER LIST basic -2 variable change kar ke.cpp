//INITIALIZER LIST 

#include <iostream>
using namespace std;

class RBI{
	const int rate, amount ;
	public : RBI(int r ,int a):rate(r),amount(a)
	{
		cout<<rate<<"\n";
		cout<<amount<<"\n";
	}
};
int main()
{
    RBI sbi(3,10000);
    RBI axix(4,40000);
 	return 0;
}
