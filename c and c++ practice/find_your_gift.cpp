#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	int i,n,x=0,y=0;
	char cc;
	cin>>n;
	string str;
	cin>>str;
	if(str[i]='L')
	{
		x-=1;
		cc='L';
	}
	else if(str[i]='R')
	{
		x+=1;
		cc='R';
	}
	else if(str[i]='U')
	{
		y+=1;
		cc='U';
	}
	else if(str[i]='D')
	{
		y-=1;
		cc='D';
	}
	for(i=1;i<n;i++)
	{
		/*cout<<"I am here";
		if(cc=='u'&& str[i]=='d')
		continue;
		else if(cc='d'&& str[i]=='u')
		continue;
		else if(cc='r'&& str[i]=='l')
		continue;
		else if(cc='l'&& str[i]=='r')
		continue;
		cout<<"I am here";
		if(i==0||str[i]!=cc)
		{
		//cout<<"I am here";
		if(str[i]=='u')
		y=y+1;
		else if(str[i]=='d')
		y=y-1;
		else if(str[i]='r')
		x=x+1;
		else if(str[i]=='l')
		x=x-1;
     	}
     	cc=str[i];*/
     	if(cc=='U'|| cc=='D')
     	{
     		if(str[i]='L')
     		{
     			x-=1;
     			cc='L';
			 }
			 else if(str[i]='R')
			 {
			 	x+=1;
			 	cc='R';
			 }
		else
     	{
     		if(str[i]='D')
     		{
     			y-=1;
     			cc='D';
			 }
			 else if(str[i]='U')
			 {
			 	y+=1;
			 	cc='U';
			 }	 
		 }
	     }
	}
	cout<<x<<" "<<y;
	return 0;
}
	
