#include<stdio.h>
#include<string.h>
int compare(char[],char[]);
void main()
{
	char a[20],b[20];
	int value;
	printf("enter first string\n");
	scanf("%s",&a);
	printf("enter second string\n");
	scanf("%s",&b);
	value=compare(a,b);
	if(value==0)
	printf("string are equal\n");
	else if(value==1)
	printf("string are not equal\n");
	else
	printf("invalid strings\n");

}
int compare(char a[],char b[])
{
	int i=0,count=0;
	while(a[i]!='\0' && b[i]!='\0')
	{
		if(a[i]!=b[i])
		{
	    count=1;
		break;
		}
	}
return count;
}
