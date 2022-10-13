#include<iostream>
using namespace std;
int main() {
	// your code goes here
	int n,k,t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	cin>>n>>k;
	if((k+1)>=n)
	cout<<"YES"<<"\n";
	else
	cout<<"NO"<<"\n";
	}
	return 0;
}

