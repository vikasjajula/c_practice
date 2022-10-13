#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];

    FILE *file = fopen("sample.c", "r");
    if (file == NULL)
    {
        fputs("Failed to open the file\n", stderr);
        return -1;
    }
    fscanf(file,"%s",str);
    fclose(file);
    
    // KEYWORD CHECK 
    
    
    char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
   int flag=0,i;
   for(i = 0; i < 32; i++) {
      if(strcmp(str,keyword[i])==0) {
         flag=1;
      }
   }
   if(flag==1)
      printf("%s is a keyword",str);
   else
      printf("%s is not a keyword",str);
      
   // Identifier check
   
   int count;
   if(str[0]>96 && str[0]<122|| str[0]>33 && str[0]<126 || str[0]!='*'|| str[0]!='.'|| str[0]!='$'|| str[0]!='&')
   {
   for(i=1;i<strlen(str);i++)
   {
   if(str[i]>96 && str[i]<122|| str[i]>33 && str[i]<126 ||str[i]>0 && str[i]<9 || str[i]!='*'|| str[i]!='.'|| str[i]!='$'|| str[i]!='&')
   {
   count=0;
   }
   else
   {
   count=1;
   }
   }
   if(count==0)
   printf("the string %s is identifer/n",str);
   if(count==1)
   printf("the string %s is not an identifier/n",str);
   }
   else
   printf("the string %s is not an identifier/n",str);
}
   
   

