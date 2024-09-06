//COMPOSITE CLASS

#include <iostream>
using namespace std;
class client
{
	public:void virus()
	{
		cout<<"Harray !!  ur system got hacked\n";
	}
	
};

class Reward
{
	client c;
	public :void doller()
	{
		cout<<"u got 100000 rupee\n";
		c.virus();
	}
};
int main()
{
    Reward r;
    r.doller();
 	return 0;
}
