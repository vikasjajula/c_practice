#include<iostream>
using namespace std;
int main()
{
	int n,arr[100],i,j,k[100],l=0,max[100];
	cin>>n;
	for(i=0;i<n;i++)
	cin>>arr[i];
	for (int i=0; i<n; i++)
    {
        // Check if the picked element is already printed
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
 
        // If not printed earlier, then print it
        if (i == j)
        {
        	cout<<arr[i];
        	cin>>k[l];
        	l++;
		}
	}
	cout<<sizeof(k)<<endl;
	//***************************
		int m=0;
		for(i=0;k[i]!='\0';i++)
		{
			int v=0;
			for(j=0;j<n;j++)
			{
				if(k[i]==arr[j])
				v++;	
			}
			max[m]=v;
			//cout<<max[m];
			m++;
		}
		//cout<<sizeof(max);
		//***********************
	    for(i=0;max[i]!=0;i++)
		{
		if(max[i]>n/2)
		cout<<k[i]<<endl;
        }
        for(i=0;i<k[i]!='\0';i++)
        {
        cout<<k[i]<<endl;
		}
	
	return 0;
}
