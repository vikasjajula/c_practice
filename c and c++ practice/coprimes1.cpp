#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		if(n==1)
			cout<<"1"<<"1/n";
		else if(n==2)
			cout<<"2"<<"1 2/n";
		else if(n==3)
	    	cout<<"3"<<"1 2 3/n";
		
		else if(n%2==0)
		{
		 for(i=1;i<n;i=i+2)
		 {
		 	cout<<"2"<<i<<" "<<i+1<<endl;
		 }
	    }
	    else
	    {
	     for(i=1;i<n;i=i+2)
		 {
		 	cout<<"2"<<i<<" "<<i+1<<endl;
		 }
		 cout<<"1"<<n<<endl;	
	    }	
	}
	return 0;
}
