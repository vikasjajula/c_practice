#include<stdio.h>
#include<string.h>
#include<ctype.h>
int count,n=0,p,i=0,j=0;
char prodn[10][10],follow[10];
void FOLLOW(char c);
void FIRST(char c);
int main()
{
 int i,choice;
 char c,ch;
 printf("Enter the no.of productions:");
 scanf("%d",&count);
 printf("Enter the productions(epsilon=$):\n");
 for(i=0;i<count;i++)
  scanf("%s%c",prodn[i],&ch);

 do
 {
  n=0;
  printf("Enter the element whose FOLLOW is to be found:");

  scanf("%c",&c);
  FOLLOW(c);
  printf("FOLLOW(%c) = { ",c);
  for(i=0;i<n;i++)
   printf("%c ",follow[i]);
  printf(" }\n");
  printf("Do you want to continue(0/1)?");
  scanf("%d%c",&choice,&ch);
 }
 while(choice==1);
}
void FOLLOW(char c)
{

 if(prodn[0][0]==c)
 follow[n++]='$';
 for(i=0;i<count;i++)
 {
  for(j=2;j<strlen(prodn[i]);j++)
  {
   if(prodn[i][j]==c)
   {
    if(prodn[i][j+1]!='\0')
    FIRST(prodn[i][j+1]);

    if(prodn[i][j+1]=='\0'&&c!=prodn[i][0])
     FOLLOW(prodn[i][0]);

   }
  }
 }
}
void FIRST(char c)
{
      int k;
                 if(!(isupper(c)))
                 follow[n++]=c;
                 for(k=0;k<count;k++)
                 {
                 if(prodn[k][0]==c)
                 {
                 if(prodn[k][2]=='$') 
                 FOLLOW(prodn[i][0]);
                 else if(islower(prodn[k][2]))
                 follow[n++]=prodn[k][2];
                 else 
                 FIRST(prodn[k][2]);
                 }
                 }

}
