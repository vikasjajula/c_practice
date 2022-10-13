#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,k,z,i,j;
	int m=100;
	string str;
	cin>>n;
	cin>>str;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(str[i]==str[j])
			{
				z=j-i-1;
				if(z<m)
				{
					m=z;
				}
			}
		}
	}
	cout<<n-1-m<<endl;
	 
	
}
