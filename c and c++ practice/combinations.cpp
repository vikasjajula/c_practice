#include<iostream>
using namespace std;
int main()
{
	int i,j,n,res=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if((arr[i]+arr[j])==(arr[i]*arr[j]))
		 	res+=1;
	    }
	}
	cout<<res<<endl;
}
