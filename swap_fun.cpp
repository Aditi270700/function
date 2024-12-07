#include<iostream>
using namespace std;
void swap(int &p, int&k)
{
int c;
c=p;
p=k;
k=c;
}
int main(){
int a,b;
cout<<"enter 2 value"<<"\n";
cin>>a>>b;
swap(a,b);
cout<<"after swapping value of a="<<a<<"\n";
cout<<"after swapping value of b="<<b<<"\n";
}