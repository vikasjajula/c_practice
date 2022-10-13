#include<stdio.h>
int main()
{
	int dsize,gsize,len,i,k=0;
	char data[100],gener[100],quot[100];
	printf("enter the size of data\n");
	scanf("%d",&dsize);
	printf("enter the generator size\n");
	scanf("%d",&gsize);
	printf("enter data\n");
	scanf("%s",&data);
	printf("enter generator data");
	scanf("%s",&gener);
	for(i=0;i<gsize-2;i++)
	{
		data[dsize+i]='0';
	}
	printf("dataword after addition of zeroes: %s",data);
	do
	{
		for(i=0;i<gsize;i++)
		{
			if(data[i]==gener[i])
	        data[i]='0';
	        else
	        data[i]='1';
	        quot[k]='1';
	        k++;
		}
		/*k=0;
		for(i=0;i<dsize+gsize-1;i++)
		{
			if(data[i]='0')
			k++;
		}
		if(k=dsize+gsize-1)
		break;
		while(data[i]!='1')
		{
		for(i=0;i<dsize+gsize-1;i++)
		{
			data[i]=data[i+1];
		}
		dsize--;
	    }
	    len=dsize+gsize-1;*/
	    while(data[0]==0)
		{
		for(i=0;i<dsize+gsize-1;i++)
		{
		data[i]=data[i+1];
	    } 
	}
		dsize--;	    
	}while(len>=gsize);
	data[len]='0';
	printf("the  remainder of dataword is : %s",data);
	
 }
