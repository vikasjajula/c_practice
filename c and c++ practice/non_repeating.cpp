#include<iostream>
#include<string>
using namespace std;
int main()
{
   string str;
   cin>>str;
   int flag,i,j;
   for(i=0;i<sizeof(str);i++)
   {
   	flag=0;
   	for(j=i+1;j<sizeof(str);j++)
   	{
   		if(str[i]==str[j])
   		{ 
   		 str[j]='0';
   		 flag=1;
		 break;	
		} 
   }
   if(flag==0)
   {
   cout<<"first non repeating charactar:"<<str[i];
   break;
   } 
   cout<<sizeof(str);  	  
} 
}
