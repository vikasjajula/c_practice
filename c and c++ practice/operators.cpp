//OPERATORS
//TERNARY OPERATOR - ? : -conditional operator
// condition ? statement 1(if true): statement 2(if false)
//logical operators: &&  and ||
// non zero values - true  and zero - false
//logical not - x=!a if a is true x is false and if a is false then x is true
//sizeof(a) - gives size of datatype
#include<iostream>
using namespace std;
int main()
{
	int x,result;
	cin>>x;
	result=x%10;
	cout<<result;
}
//operator presidence - highest precidence operator is calculated first
//operator associativity - if operators in an equation have same precidence then associativity can be from R to L (or) L to R
//all assignment operators associativity - right to left
//unary operators - right to left
//remaining all - left to right
