#include<iostream>//fruits and baskets,selecting baskets with minimum price.
using namespace std;
int main()
{
	int t,n,m,i,j,k,x,y,sum,f[100],p[100];
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		for(x=1;x<=n;i++)
		cin>>f[x];
		for(y=1;y<=n;y++)
		cin>>p[y];
		int min=0;
		for(j=1;i<=m;i++)
		{
			sum=-1;
			for(k=1;k<=n;k++)
			{
				if(f[k]=j)
				sum+=p[k];	 
			}
			if(sum<min)
			min=sum;
		}
		cout<<min<<endl;
	}
	
}
