#include<iostream>
using namespace std;
int main()
{
int n=10,x,max=0;
cout<<"Enter the value of 10 numbers : "<<endl;
for(int i=0;i<n;i++)
{
cin>>x;
if(x>max)
max=x;
}
cout<<"The Maximum number is "<<max<<endl;
return 0;
}
