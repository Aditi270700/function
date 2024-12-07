#include<iostream>
using namespace std;
void swap(int &p, int &k)
{
int c;
c=p;
p=k;
k=c;
}
int main ()
{
int a,b;
cout<<"enter two number\n";
cin>>a>>b;
swap(a,b);
cout<<"after swapping a = "<<a<<"\n";
cout<<"after swapping b = "<<b<<"\n";
}