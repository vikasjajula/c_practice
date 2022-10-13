#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t!=0)
{
	int x,y,a1,a2,b1,b2,max;
	cin>>x>>y;
	a1=x/10;
	a2=x%10;
	b1=y/10;
	b2=y%10;
	max=x+y;
	if(a1!=0&&b1!=0)
	{
		int k=(b1*10+a2)+(a1*10+b2);
		int l=(b2*10+a2)+(b1*10+a1);
		int m=(a1*10+b1)+(a2*10+b2);
		if(k>max)
		max=k;
		if(l>max)
		max=l;
		if(m>max)
		max=m;
		cout<<max<<endl;	
	}
	else if(a1==0 && b1!=0)
	{
		int k=b1+(a2*10+b2);
		int l=b2+(b1*10+a2);
		if(k>max)
		max=k;
		if(l>max)
		max=l;
		cout<<max<<endl;
		
	}
	else if(a1!=0 && b1==0)
	{
		int k=b2*10+a2+a1;
		int l=a1+10+b2+a2;
		if(k>max)
		max=k;
		if(l>max)
		max=l;
		cout<<max<<endl;
	}
	else{
		cout<<max<<endl;
	}
	t--;
}
return 0;
	
}
