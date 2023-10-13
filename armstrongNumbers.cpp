#include<iostream>
using namespace std;
void main()
{
//declaration of variables
  int n,r,sum=0,temp;
cout<<"enter a number";
cin>>n;
temp = n;
//loop starts
while(n>0)
{
r=n%10;
sum = sum+(r*r*r);
n = n/10;
}
 //loop ends
//conditional statement started
if(temp==sum)
{
cout<<"It is an armstrong number";
}
else
{
cout<<"not an armstrong number"
}
return 0;
}
