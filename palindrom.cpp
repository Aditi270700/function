#include<iostream>
using namespace std;
#include<string.h>
int main(){
char str[20];
char tmp[20];
cout<<"Enter a string = ";
cin>>str;
strcpy(tmp,strrev(str));
cout<<tmp<<"\n";
if(strcmp(str,tmp)==0)
{
cout<<"palidrom";
}
else{
    cout<<"not palindrom";
}
}

