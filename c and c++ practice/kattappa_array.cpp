#include<iostream>
using namespace std;
int main()
{
	int weapons[100],n,i,l=0,ul=0;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>weapons[i];
	for(i=0;i<n;i++)
	{
		if(weapons[i]%2==0)
		l++;
		else
		ul++;
	}
	if(l>ul)
	cout<<"READY FOR THE BATTEL";
	else
	cout<<"NOT READY";
}
