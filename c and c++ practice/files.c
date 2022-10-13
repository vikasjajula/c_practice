#include <stdio.h>
#include <stdlib.h>

int main()
{
   char T[50];
   FILE *fptr;
   char ch;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("D:\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter text: ");
   scanf("%s",&T);

   fprintf(fptr,"%s",T);// printing or writing in to a file
   fclose(fptr);        //closing of a file
   fptr = fopen("D:\\program.txt","r");
   while(1)
   {
   	ch=fgetc(fptr);
   	if(ch==EOF)
   	break;
   	printf("%c",ch);
   	
   }
   

   return 0;
}
