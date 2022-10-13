#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int i,j,n,res=0;
	cin>>n;
	string str1,str;
	cin>>str1;
	for(i=1;i<n;i++)
	cin>>str[i];
	char str[n][str1.size()+1],cstring[str1.size()+1];
	str1.copy(cstring,str1.size()+1);
	cstring[str1.size()]='\0';
	for(i=1;i<n;i++)
	{
		cin>>str;
		for(j=0;j<10;j++)
		{
			if(str[i][j]==cstring[j])
			{
			cstring[j]=0;
			cout<<"if"<<endl;
		    }
			else
			{
			cstring[j]=1;
			cout<<"else"<<endl;
	    	}
		}
	}
	for(i=0;i<10;i++)
	res+=cstring[i];
	cout<<res<<endl;
}
