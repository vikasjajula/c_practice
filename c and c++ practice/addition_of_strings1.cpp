#include<iostream>
//#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str1,str2,result;
    cin>>str1>>str2;
    int i,n1,n2,sum,carry;
    if(str1.length()>str2.length())
        swap(str1,str2);
    n1=str1.length();
    n2=str2.length();
    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());
    for(i=0;i<n1;i++)
    {
        int carry;
        sum=((str1[i]-'0')+(str2[i]-'0'));
        carry=sum/10;
        result.push_back(sum%10+'0');
    }  
    for(i=n1;i<n2;i++)
    {
        sum=((str2[i]+'0')+carry);
        carry=sum/10;
        result[i]=sum%10;
    }  
    if(carry)
    {
    result[n2]=carry;
    }
    reverse(result.begin(),result.end());
    cout<<"string after addition is :"<<result<<endl;
}

