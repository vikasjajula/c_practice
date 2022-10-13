#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int n,i,res=0;
	string str;
	cin>>n;
	cin>>str;
	for(i=0;i<sizeof(str);i++)
	{
		if((str[i]=='x' && str[i+1]=='y')||(str[i]=='y'&&str[i+1]=='y'))
		{
			res+=1;
			i++;
		}
		
	}
	cout<<res<<endl;
	
}
