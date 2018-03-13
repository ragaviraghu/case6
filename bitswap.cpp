#include<iostream>
using namespace std;
int main()
{
int n1,n2;
cout<<"Enter the two numbers : "<<endl;
cin>>n1>>n2;
cout<<"Before swapping : " <<endl;
cout<<"n1 = " <<n1<<" , n2 = "<<n2<<endl;
n1=n1^n2;
n2=n1^n2;
n1=n1^n2;
cout<<"After swapping : "<<endl;
cout<<"n1 = "<<n1<<" , n2 = "<<n2<<endl;
return 0;
}
