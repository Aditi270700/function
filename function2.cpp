#include<iostream>
using namespace std;
#include<string.h>
int main (){
char password[20];
char tmp[20];
cout<<"enter password\n";
cin>>password;
strcpy(tmp,password);
cout<<"\n";
cout<<strrev(tmp);
if(strcmp(tmp,password)==0)
{
    cout<<"yes";
}
else
{
    cout<<"no";
}
}