#include<iostream>
using namespace std;
int main()
{
	int n,k,i,arr[100],max=0,sum=0;
	cin>>n;
	cin>>k;
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	{
		int j;
		if(arr[i+k-1]!='\0')
		{
			for(j=i;j<(i+k);j++)
			sum+=arr[j];
			//cout<<sum<<endl;
		}
	   else
	   break;
	if(sum>max)
	max=sum;
	sum=0;
	}
	cout<<max;
}
