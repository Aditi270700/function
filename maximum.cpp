#include<iostream>
using namespace std;
int max(int a, int b)
{
if (a>b)
{
return a;
}
else 
{
return b;
}
}
int main (){
int a, b;
cout<<"enter any number\n";
cin>>a>>b;
cout<<"maximum value is = "<<max(a,b);
}