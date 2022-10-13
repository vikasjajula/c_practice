#include<iostream>
using namespace std;
int main()
{
	//pointer variables and fixed arrays
	int marks[6]={6,5,4,3,3,4};
	int *k;
	k=marks; //marks=&marks[0]
	cout<<sizeof(marks)<<endl;
	cout<<sizeof(k);
	cout<<marks<<endl;
	cout<<&marks[0];
	marks=k; //error we cant change address of array name
} 
