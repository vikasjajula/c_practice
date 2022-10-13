#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    char result[100];
    cin>>str1>>str2;
    int i;
    if(str1.length()>str2.length())
        swap(str1,str2);
    n1=str1.length;
    n2=str2.length;
    str1=reverse(str1.begin(),str1.end());
    str2=reverse(str2.begin(),str2.end());
    for(i=0;i<n1;i++)
    {
        int carry;
        sum=((str1[i]+'0')+(str2[i]+'0'));
        carry=sum/10;
        result.push_back(sum%10);
    }  
    for(i=n1;i<n2;i++)
    {
        sum=((str2[i]+'0')+carry);
        carry=sum/10;
        result[i]=sum%10;
    }  
    if(carry)
    {
    result[n2]=carry
    }
    result=reverse(result.begin(),result.end());
    cout<<"string after addition is :"<<result<<endl;
}
