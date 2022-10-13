#include<iostream>
using namespace std;
void add(int*,int*);
void addition(int,int);
int main()
{
	int a,b;
	cin>>a>>b;
	void add(int *x,int *y){
		*x++;
		*y++;
	cout<<*x+*y<<endl;	
	}
	add(&a,&b);// values are incremented and printed. effects the actual parameters.
	cout<<a<<b<<endl; // incremented values of a nd b are printed

	// **************pass by value***********
	void addition(int x,int y)
	{
		x++;
		y++;
		cout<<x<<y<<endl;
	}
	addition(a,b); // values incremented
	cout<<a<<b<<endl;//original values are printed.actual parameters not affected.
	
}
