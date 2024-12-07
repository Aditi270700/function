#include<iostream>
using namespace std;
int c;
void sum(int a, int b)
{
c=a+b;
}
void show()
{
cout<<c;
}
int main (){
int m,o;
cout<<"enter two number\n";
cin>>m>>o;
sum(m,o);
show();
}