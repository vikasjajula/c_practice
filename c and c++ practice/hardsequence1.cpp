#include<iostream>
using namespace std;
int getresult(int[],int);
int arr[100];
int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>arr[i];
	arr[1]=0;
	for(j=1;j<n-1;j++)
	{
	arr[j+1]=getresult(arr,j);
	cout<<arr[j]<<endl;
	}  
}
int getresult(int a,int v)
{
	int k,x=0;
	for(k=v-1;k>=0;k--)
	{
		if(arr[k]==arr[v])
		{
			x=1;
			return v-k;
		}
	}
	if(x==0)
	return 0;
}
