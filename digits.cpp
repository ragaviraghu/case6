#include<iostream>
#include<string>
using namespace std;
int main() 
{int num;
string s;
cout<<"Enter the number : "<<endl;
cin>>num;
s=to_string(num);
cout<<"The digits are : "<<endl;
for(int i=0;s[i]!='\0';i++)
{cout<<s[i]<<endl;
}
return 0;
}
