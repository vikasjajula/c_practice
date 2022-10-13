#include<stdio.h>
#include<stdlib.h>
#define upper 25//preprocessor directive where we can use upper instead of 25 in entire program...........................
#undef upper    // upper is undefined................hence else is excecuted
#define vikas 25
int  main()
{
	int i=20;
	for(i=0;i<vikas;i++)
	{
		printf("%d ,",i);
	}
	printf("\n\n");
	#ifdef upper
	printf("upper is defined\n") ;
	#else                             // this is excecuted as upper is undefined................
	printf("upper is not defined\n"); 
	#endif
	return 0;
}
