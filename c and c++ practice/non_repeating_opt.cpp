#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int freq[26],i;
	for(i=0;i<26;i++)
		freq[i]=0;
    for(i=0;i<sizeof(str);i++)
		freq[str[i]-97]++;
	for(i=0;i<sizeof(str);i++)		
	{
		if(freq[str[i]-97]==1)
		{
			cout<<"first non repeating character is :"<<str[i]<<endl;
			break;
		}
		else
		continue;
	
	}
	return 0;
	
}
