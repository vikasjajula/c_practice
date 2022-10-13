#include<iostream>
#include<string>
using namespace std;
int main()
{
string str="vikas";
cout<<str.capacity()<<endl;
cout<<str.length()<<endl ;//used in for loops
str.resize(3); // after resize the string is printed with the length after resize. 
cout<<str<<endl;
cout<<str.length()<<endl;
cout<<str.capacity()<<endl;

//operators used with strings
// comparision and concatination and all operations are directly done through operators no need of functions.

string str1="vikas";
string str2="jajula";
string str3="cse";
str3=str1;
cout<<str3<<"\n"; //vikas
str3+=str2;
cout<<str3<<endl; // vikas jajula
 
if(str2>str1) 
cout<<"true"<<endl;
else
cout<<"false"<<endl;
if(str3==str1+str2)
cout<<"true"<<endl;

//ITORATORS IN STRINGS
string::iterator itr;
cout<<"iterator=";
for(itr=str2.begin();itr<str2.end();itr++)
{
	cout<<str2<<endl;
}
string:: reverse_iterator ritr;
cout<<endl;
for(ritr=str2.rbegin();ritr<str2.rend();ritr++)
{
	cout<<*ritr; // print the string from reverse ("alujaj")
}
cout<<endl;

//FUNCTIONS IN STRING CLASS
//copy function
char ch[9]="v";// last character of the char array is null.
str3.copy(ch,7,1); // str.copy(ch_array,length,position);
cout<<"ch after copy="<<ch<<endl;
//swap function
str1.swap(str2);
cout<<"str1 after swap="<<str1<<endl;
cout<<"str2 after swap="<<str2<<endl;
cout<<"str3="<<str3<<endl;
//find()
cout<<"ik is occured at "<<str3.find("ik")<<endl;
//rfind()
cout<<"sj is occured at "<<str3.rfind("sj")<<endl;
//find_first_of() and find_last_of()
cout<<str3.find_first_of("aj")<<endl;
cout<<str3.find_last_of("sj")<<endl;
//insert(pos,"string")
str3.insert(5,"  ");
cout<<"after insertion:"<<str3<<endl;
str3.clear();
cout<<str3.empty();
}
