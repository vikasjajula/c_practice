#include<iostream>
using namespace std;
int main()
{
	int i,n,c5=0,c10=0,c15=0,arr[100],flag=0;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	{
		if(arr[i]==5)
		c5++;
	    if(arr[i]==10)
		{
		 c10++;
		 if(c5>=1)
		 c5--;
		 else
		 {
		 	flag=1;
		 	break;
		 }
		}
		if(arr[i]==15)
		{
			c15++;
			if(c10>=1)
			c10--;
			else if(c5>=2)
			c5-=2;
			else
			flag=1;
			break;
		}
			
		
	}
	if(flag==0)
	cout<<"yes";
	else
	cout<<"No";
	
	
}
