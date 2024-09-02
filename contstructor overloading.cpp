#include <iostream>
using namespace std;
class atm
{
	
		int code,pwd;
		public:atm()
		{
			cout<<"welcome to atm \n";
		}
		atm(int c, int p)
		{
			code=c;
			pwd=p;
		}
		void show()
		{
			cout<<"code="<<code<<"\t";
			cout<<"pwd="<<pwd<<"\t";
		}
	
};
int main()
{   
    int c,p;
    cout<<"enter code \n";
    cin>>c;
    cout<<"enter password\n";
    cin>>p;
    
    atm k;
    atm obj(c,p);
    obj.show();
 	return 0;
}
