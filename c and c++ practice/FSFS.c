#include<stdio.h>
#include<stdlib.h>
void main()
{
int p[20],bt[20],wt[20],tat[20],i,n;
float avgwt , avgtat;
printf("enter the number of process\n");
scanf("%d",&n);
printf("enter the process ID\n");
for(i=0;i<n;i++)
{
	printf("enter the process ID of %d process\n",i+1);
	scanf("%d",&p[i]);
}
for(i=0;i<n;i++)
{
	printf("enter the burst time of process %d\n",i+1);
	scanf("%d",&bt[i]);
}
wt[0]=0;
tat[0]=bt[0];
for(i=1;i<n;i++)
{
	wt[i]=wt[i-1]+bt[i-1];
	tat[i]=tat[i-1]+bt[i];
}
printf("\tPROCESS ID\tBURST TIME\tWAITING TIME\tTURN AROUND TIME\n");
for(i=0;i<n;i++)
{
	printf("\t\t%d\t\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
}
int sum=0;
for(i=0;i<n;i++)
{
	sum+=wt[i];
}
avgwt=sum/n;
int sum1=0;
for(i=0;i<n;i++)
{
	sum1+=tat[i];
}
avgtat=sum1/n;
printf("average waiting time of FCFS is : %f\n",avgwt);
printf("average turn around time of FCFS is : %f\n",avgtat);
}
