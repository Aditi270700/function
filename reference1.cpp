#include<iostream>
using namespace std;
int main (){
int a=23;
char f='a';
cout<<"a="<<a<<"\n";
int b=a;
cout<<"b="<<b<<"\n";
int &c=a;
c=20;
cout<<"a="<<a<<"\tc="<<c<<"\n";
int *p=&a;
cout<<p<<"\t";//it shows address of c
cout<<*p;//it shows value of c//dereference
}