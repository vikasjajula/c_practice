#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int t,i,n,j,k,m;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int count=0;
		cin>>n>>k;
		cin>>str;
		for(j=0;j<k;j++)
		{
			if(str[n-1]=='h')
			{
			n=n-1;
			for(m=0;m<n;m++)
			{
				if(str[m]=='h')
				str[m]='t';
				if(str[m]=='t')
				str[m]='h';
			}
		    }
		    else
		    n=n-1;
		}
		for(j=0;j<n;j++)
		{
			if(str[j]=='h')
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
