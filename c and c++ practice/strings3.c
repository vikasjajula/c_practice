#include<stdio.h>
#include<string.h>
void main()
{
	struct student{
	char name[50];
	int rollno;
};
struct student s1,*s2;
s2=&s1;
strcpy(s1.name,"vikas");
s1.rollno=46;
/*printf("%s%d",s2.name,s2.rollno);*/
printf("%s,%d\n",s1.name,s1.rollno);
printf("%s,%d\n",(*s2).name,(*s2).rollno);
printf("%s,%d\n",s2->name,s2->rollno);
printf("%s%d",s2.name,s2.rollno);

}
