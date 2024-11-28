#include<iostream>
using namespace std;
int c;
void sum(int a,int b)
{
    c=a+b;
}
void show ()
{
cout<<c;
}
int main ()
{
    int w,p;
    cout<<"Enter 2 number\n";
    cin>>w>>p;
    sum(w,p);
    show();
}