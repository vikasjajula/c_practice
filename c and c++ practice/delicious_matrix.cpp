#include<iostream>
using namespace std;
int main()
{
	int i,j,arr[100][100],n,k=1,m;
	cin>>n;
	m=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[i][j]=k;
			k++;
		//	cout<<arr[i][j]<<"    ";
		}
		//cout<<endl;
	}
	for(i=0;i<n;i++)//printing delicious array
	{
		m=n;
		for(j=0;j<n;j++)
		{
		if(i%2==0)
		{
			cout<<arr[i][j]<<" ";
		}
		else
		{
			cout<<arr[i][m-1]<<" ";
			m--;
		}
	    }
	    cout<<endl;
	}
}
