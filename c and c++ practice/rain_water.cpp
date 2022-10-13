#include<iostream>
using namespace std;
int main()
{
	int h[100],left[100],right[100],n,i,water;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>h[i];
	left[0]=h[0],right[n-1]=h[n-1];
	for(i=1;i<n;i++)
	{
		if(h[i]>left[i-1])
		left[i]=h[i];
		else
		left[i]=left[i-1];
	}
	for(i=n-2;i>0;i--)
	{
		if(h[i]>right[i+1])
		right[i]=h[i];
		else
		right[i]=left[i+1];
	}
	for(i=0;i<n;i++)
	{
	 water+=min(left[i],right[i])-h[i];
	}
	cout<<water<<endl;
	return 0;
}
	
