#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int chanceA=n , chanceB=n;
		int shotA=0,shotB=0;
		string str;
		cin>>str;
		for(i=0;i<2*n;i++)
		{
			if(i%2==0)
			{
				chanceA--;
				shotA=shotA+(str[i]-'0');
			}
			else
			{
				chanceB--;
				shotB=shotB+(str[i]-'0');
			}
			if(shotA>chanceB+shotB)
			{
				cout<<i+1<<endl;
				break;	
			}
			else if(shotB>chanceA+shotA)
			{
				cout<<i+1;
				break;
			}
			else if(shotA==shotB && i==2*n-1 )
			{
				cout<<i+1;
				break;
			}
		}
		
	}
	return 0;	
}

