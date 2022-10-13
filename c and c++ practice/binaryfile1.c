#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct student
	{
		char name[20];
		int rollno;
		float perc;
	};
	FILE *fp;
	int arr[20];
	int i;
	for( i=0;i<20;i++)
	{
		arr[i]=i+1;
	}
	fp=fopen("E:\\binaryfiles\\binary1.txt","wb");
	struct student std[3]={
	        {"vikas",1,75.5},
	        {"vaishnavi",2,70.45},
	        {"vignesh",3,72.65}
	       };
	fwrite(std,sizeof(std),1,fp);// writing all 3 records of structure student in to binary file................
	fwrite(arr,sizeof(arr),1,fp);
	printf("written in to binary file\n");
	
	
}
