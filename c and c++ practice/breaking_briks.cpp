#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		int s,w1,w2,w3;
		cin>>s>>w1>>w2>>w3;
		if((w1+w2+w3)<=s)
		cout<<"1"<<endl;
		else if((w1+w2)<=s)
		cout<<"2";
		else
		cout<<"3"; 
	    t--;
	}
}
