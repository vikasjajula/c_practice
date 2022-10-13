#include<stdio.h>
#define max 50
void insert(int);
void delete();
int main()
{
	int queue[max];
	int front=0,rear=0;
	int i,n,t,p[20],bt[20],wt[20],tat[20];
	float avgwt=0,avgtat=0;
	void insert(int x)
	{
		if(rear=max-1)
		printf("queue overflow\n");
		else
		{
		queue[rear]=x;
		rear++;	
		}
	}
	 void delete()
	{
		if(rear==front)
		{
			printf("queue underfloe\n");
		}
		else
		{
			front=front+1;
		}
	}
	//considering all the arrivaival times are equal to 0
	printf("enter no of processes\n");
    scanf("%d",&n);
    printf("enter the time quantum\n");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
    	printf("enter the burst time\n");
    	scanf("%d",bt[i]);
	}
	int temp=0,sum=0;
	while(front!=rear)
	{
		temp=queue[front];
		if(temp<=t)
		{
		sum=sum+temp;
		wt[i]=sum-bt[i];
		tat[i]=sum;
		delete();	
		}
		else
		{
		sum=sum+t;
		queue[front]-=t;
		insert(queue[front]);
		delete();
		}	
	}
	printf("\tprocess Id\t\tBurst time\t\tWaiting time\t\tTurn arount time\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t\t\t%d\t\t\t%d\t\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
		avgwt+=wt[i];
		avgtat+=tat[i];
		printf("average waiting time: %f",avgwt);
		printf("average turn around time : %f",avgtat);
	}
	
	
}
