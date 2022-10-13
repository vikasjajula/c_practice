#include<stdio.h>
int main()
{
	int front=0,rear=0;
	int i,n,t,p[20],bt[20],wt[20],tat[20],rq[20];
	float avgwt=0,avgtat=0;
	//considering all the arrivaival times are equal to 0
	printf("enter no of processes\n");
    scanf("%d",&n);
    printf("enter the time quantum\n");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
    	p[i]=i;
    	printf("enter the burst time of %d :\n",i+1);
    	scanf("%d",&bt[i]);
    	rq[i]=bt[i];
	}
	int temp,sum=0;
    while(1)
	{
		temp=rq[i];
		if(temp<=t)
		{
		sum=sum+temp;
		wt[i]=sum-bt[i];
		tat[i]=sum;
		}
		else
		{
		sum=sum+t;
		rq[n+i]=rq[i]-t;
		}	
	}
	printf("\tprocess Id\t\tBurst time\t\tWaiting time\t\tTurn arount time\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t\t\t%d\t\t\t%d\t\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
		avgwt+=wt[i];
		avgtat+=tat[i];
	}
	printf("average waiting time: %f",avgwt/n);
	printf("average turn around time : %f",avgtat/n);
}
