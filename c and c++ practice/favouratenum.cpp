#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
	int n,result=0;
	cin>>n;
	while(n!=0)
	{
		if(n%10==5)
		result++;
		n=n/10;
	}
	cout<<result<<endl;
	t--;
    }
}
 
