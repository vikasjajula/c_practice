#include<iostream>
using namespace std;
int main()
{
	int n,p,s,i,arr[1000],sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	arr[i]=0;
	for(i=1;i<=n;i++)
	{
		cin>>p>>s;
		if(p<n-2 && s>arr[p])
		{
		arr[p]=s;
		}
	}
	for(i=1;i<=n;i++)
	sum+=arr[i];
	cout<<sum<<endl;
}
