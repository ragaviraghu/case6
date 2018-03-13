#include <iostream>
using namespace std;
int main()
{int N,M,product;
cout<<"Enter the number1 : "<<endl;
cin>>N;
cout<<"Enter the number2 : "<<endl;
cin>>M;
product=N*M;
if(product%2==0)
cout<<"The product of given two numbers is even "<<endl;
else
cout<<"The product of given two numbers is odd "<<endl;
return 0;
}
