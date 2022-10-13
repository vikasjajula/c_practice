#include<stdio.h>
void main()
{
	int p[20],pri[20],bt[20],tat[20],wt[20],i,k,n;
	float avgwt,avgtat;
	// assuming all the processes has equal arrival times=0
	printf("enter no of processes\n",&n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i]=i;
		printf("enter the burst and priority of %d process\n",i+1);
		scanf("%d%d",&bt[i],&pri[i]);
	}
	for(i=0;i<n;i++)
     {
     	for(k=i+1;k<n;k++)
     	{
     		if(pri[i]>pri[k])
     		{
     			int temp=pri[i];
     			pri[i]=pri[k];
     			pri[k]=temp;
     			
     			temp=bt[i];
     			bt[i]=bt[k];
     			bt[k]=temp;
     			
     			temp=p[i];
     			p[i]=p[k];
     			p[k]=temp;
			 }
		 }
	}	
	avgwt=wt[0]=0;
	avgtat=tat[0]=bt[0];
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=wt[i]+bt[i];
		avgwt+=wt[i];
		avgtat+=tat[i];
	}
	printf("\t\tProcess Id\tPriority\tBurst time\tWaiting time\tTurn arount time\n");
	for(i=0;i<n;i++)
	{
		printf("\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",p[i],pri[i],bt[i],wt[i],tat[i]);
	}
	printf("the average waiting time : %f\n",avgwt/n);
	printf("the average turn around time : %f\n",avgtat/n);
}
