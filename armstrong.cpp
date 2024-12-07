#include<iostream>
using namespace std;
int main (){
int num;
int sum=0;
int temp=num;
int rem;
cout<<"enter any number"<<"\n";
cin>>rem;
while(num>0)
 rem=(num%10);
 temp=temp+rem*rem*rem;
 num=num/10;
if(temp==sum)
{
    cout<<"this is armstrong"<<"\n";
}
else{
    cout<<"not armstrong"<<"\n";
}
}