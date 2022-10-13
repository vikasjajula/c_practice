#include<iostream>
#include<cstring> //used to access all character arrays format of c
#include<string> // to access all string functions in cpp
using namespace std;
int main()
{
	char str[60]={'v','i','k','a','s'};
	cout<<str<<endl;
	string  str1="vikas";
	cout<<str1<<endl;
	string str3;
	cout<<"enter any string"<<endl;
	//cin>>str2; // it only reads first word of the sentence wont read whole sentence
	getline(cin,str3);//string function which reads whole sentence
	str3.push_back('j');//add character at the end of the string
	cout<<str3<<endl;
	//str3.pop_back();//removes the last character of the string.
	cout<<str3[0];
	return 0;	 
}
