#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp,*ft;
	char ch;
	int nol,not,noc,nos;          // nol: number of lines , not : number of tabs , nos : number of spaces , noc :number of characters
	fp=fopen("E:testfile.txt","r");
	if(fp==NULL)
	{
	printf("the testfile couldn't open!!'");
	fclose(fp);                   // closing  testfile
    }
    ft=fopen("E:targetfile.txt","w");// target file should be opened in write mode because we are writing data in to it from testfile.........
    if(ft==NULL)                  // closing targetfile
    {
    printf("the target file couldn't open!!");
    fclose(ft);
	}
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		noc++;
		if(ch==' ')
		nos++;
		if(ch=='\n')
		{
		nol++;
		printf("\n");
    	}
		if(ch=='\t')
		not++;
		printf("%c",ch);
		fputc(ch,ft);         // copying all characters of testfile into targetfile.............
	}
	fclose(fp);
	fclose(ft);
	printf("\n\n");
	printf("number of lines : %d\n",nol);
	printf("number of tabs  : %d\n",not);
	printf("number of characters: %d\n",noc);
	printf("number of spaces : %d\n",nos);
}
