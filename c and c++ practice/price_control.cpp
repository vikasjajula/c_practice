#include<iostream>
using namespace std;
int main()
{
	int n,k,i,c[100],sum=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	cin>>c[i];
	for(i=0;i<n;i++)
	{
		if(c[i]>k)
		sum+=c[i]-k;
	}
	cout<<sum;
}
