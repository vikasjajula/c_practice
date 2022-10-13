#include<stdio.h>
void main()
{
	int i;
	struct time
	{
		int hours;
		int minutes;
		int seconds;
	};
	struct bittu
	{
		int carno;
		struct time st;
		struct time rt;
	};
		struct bittu b[3];
		for(i=0;i<3;i++)
		{
			printf("enter carno\n" );
			scanf("%d",&b[i].carno);
			printf("enter starting time : hh:mm:ss\n");
			scanf("%d%d%d",&b[i].st.hours, &b[i].st.minutes, &b[i].st.seconds);
			printf("enter reaching time : hh:mm:ss\n");
			scanf("%d%d%d",&b[i].rt.hours,&b[i].rt.minutes,&b[i].rt.seconds);
		
		}
		printf("Car.no\t\t starting time\t\t reaching time\t\t\n");
		for( i=0;i<3;i++)
		{
			printf("\n%d\t\t",b[i].carno);
			printf("%d:%d:%d\t\t",b[i].st.hours,b[i].st.minutes,b[i].st.seconds);
			printf("%d:%d:%d\t\t\n",b[i].rt.hours,b[i].rt.minutes,b[i].st.seconds);
		}
}

