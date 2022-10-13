#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int ts,js,c=0,i;
		cin>>ts;
		if(ts%2==0)
		{
			for(i=1;i<=ts;i++)
			{
				if(i%4==0)
				c++;	
			}
			cout<<c<<endl;
		}
		else
		{
			for(i=1;i<=ts;i++)
			{
				if(i%2==0)
				c++;	
			}
			cout<<c<<endl;
		}
		
	}
}
