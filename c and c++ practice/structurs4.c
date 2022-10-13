#include<stdio.h>
void main()
{
	int x,i;
	struct student
	{
		char name[70];
		char dep[80];
		char branch[30];
		int rollno;
		
	};
	struct student s[100];
 void get_student_data(int);
 for(i=0;i<=5;i++)
 {
  printf("enter name of student,department, branch and rollno respectively of student %d",i+1);
  scanf("%s%s%s",&s[i].name,&s[i].dep,&s[i].branch,&s[i].rollno);
 }	
 printf("enter the rollnumber of the student whose data is to be printed\n");
 scanf("%d",&x);
void get_student_data(x);
void static get_student_data(int y)
 {
 	for(i=0;i<5;i++)
 	{
 		if(s[i].rollno==y)
 		{
 			printf("name:%s",s[i].name);
 			printf("department:%s",s[i].dep);
 			printf("branch:%s",s[i].branch);
 			printf("rollno:%d",y);
		}
	 }
 }
}
