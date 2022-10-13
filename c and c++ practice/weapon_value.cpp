#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,j,n,res;
	cin>>n;
	string str1,str;
	cin>>str1;
	char arr[100];
	str1.copy(arr,10,0);
	for(i=1;i<n;i++)
	{
		cin>>str;
		//cout<<str<<endl;
		for(j=0;j<10;j++)
		{
			if(arr[j]==1 && str[j]==1)
			{
			arr[j]=0;
	    	}
			else if(arr[j]==0 && str[j]==0)
			{
			arr[j]=0;
		    }
			else
			{
			arr[j]=1;
	    	}

		}
	}
	for(i=0;i<10;i++)
	res+=arr[i];
	cout<<res<<endl;
	
}
