#include<iostream>
#include<cstring>
using namespace std;
int main()
{string str;
int flag1=0,flag2=0,flag=0;
cout<<"Enter the string : "<<endl;
getline(cin,str);
int n=str.size();
for(int i=0;i<n;i++)
{
if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
{flag1=1;
}
else if(str[i]>='0' && str[i]<='9')
{flag2=1;
}
else
{flag=1;
}
}
if(flag1==1 && flag2==1)
{cout<<"Yes(contains both alphabets and numbers)"<<endl;
}
else
{cout<<"No(does not contain both alphabets and numbers)"<<endl;
}
return 0;
}
