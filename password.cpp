#include<iostream>
using namespace std;
int balance(int pwd)
{
if(pwd==45)
{
return 5000;
}
else
{
return 2;
}
}
int main (){
cout<<balance(45);
}