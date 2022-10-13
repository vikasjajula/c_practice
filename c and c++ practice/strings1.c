#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],rev_str[20];
	int i,j,length=0;
	printf("enter the string\n");
    gets(str);
	int count;
	for(i=0;str[i]!='\0';i++)
	{
		length++;		
	}
	printf("lenth of the sting : %d\n",length);
	for(i=0;i<length;i++)
	{
		rev_str[i]=str[length-1-i];
	}
	int flat=0;
	for(i=0;i<length;i++)
	{
		if(str[i]!=rev_str[i])
		flat++;
	}
	if(flat>0)
	printf("the string is not a palindrome\n");
	else
	printf("the given string is a palindrome\n");
}
