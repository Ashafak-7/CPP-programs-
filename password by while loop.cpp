//WAP for password if password is correct then print "welcome" if password is incorrect give 2 chance. if it fails to enter password then block for 3 hours
#include<iostream>
using namespace std;
int main()
{
	int p,c=3;
	
	
	while(c>0)
	{   
      	cout<<"enter password ";
     	cin>>p;
		if(p==1234)
		{
			cout<<"welcome";
			return 0;
		}
		else
		c--;
		{
			if(c>=1)
			{
				cout<<c<<" more attepts\n";
				
			}
			else
			{
				cout<<"you are blocked for 3 hours";
				
			}
			
		}
	    
	}
		
	return 0;
}