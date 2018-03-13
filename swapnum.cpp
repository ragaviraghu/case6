#include <iostream>
using namespace std;
int main()
{
int n1,n2,t;
cout<<"Enter the two numbers : "<<endl;
cin>>n1>>n2;
cout<<"Before swapping : " <<endl;
cout<<"n1 = " <<n1<<" , n2 = "<<n2<<endl;
t = n1;
n1 = n2;
n2 = t;
cout<<"After swapping : "<<endl;
cout<<"n1 = "<<n1<<" , n2 = "<<n2<<endl;
return 0;
}
