#include<iostream>
using namespace std;
void table(int a)
{
for (int i=1; i<=10; i++)
{
cout<<a*i<<"\t";
}
}
int main ()
{
int b;
cout<<"enter any number\n";
cin>>b;
table(b);
}