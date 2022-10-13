#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int iskeyword(char buffer[])
{
	int i;
	char keywords[32][10]={"auto","break","case","char","const","continue","default","do","double","else","enum","extern","for",
	                       "goto","long","register","return","short","signed",
	                       "struct","switch","typedef","union","unsigned","void","volatile"
	                      };
	for(i=0;i<32;i++)
	{
		if(strcmp(keywords[i],buffer)==0)
		return 1;
	}
	return 0;
}
int main()
{
 char ch , buffer[15],operators[]="+-*/=%";
 FILE *fp;
 int i,j=0;
 fp=fopen("lex.c","r");
 if(fp==NULL)
 printf("their is an error in opening the file\n");
 while((ch=fgetc(fp))!=EOF)
 {
 	for(i=0;i<6;i++)
 	{
 		if(ch==operators[i])
 		{
 		printf("%c is an operator.\n",ch);
 	//	goto l;
 	break;
 	    }
	}
	if(i!=6)
	continue;
	if(isalnum(ch))
	{
		buffer[j++]=ch;
	}
	else if((ch==' '||ch=='\n')&&(j!=0))
	{
	buffer[j++]='\0';
	j=0;
	if(iskeyword(buffer)==1)
	printf("%s is a keyword\n",buffer);
	else
	printf("%s is a identifier\n",buffer);
   }
  // l:continue;
}		 
fclose(fp);
return 0;	 
}


