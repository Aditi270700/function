#include<iostream>
using namespace std;
#include<string.h>
int main (){
char name[20],surname[20];
cout<<"enter your name\n";
cin>>name;

cout<<"Enter your surname\n";
cin>>surname;
cout<<"\n";
cout<<strlen(name)<<"\t";
cout<<"\n uppercase="<<strupr(name)<<"\n";
cout<<"\n lowercase="<<strlwr(surname)<<"\n";
cout<<strcat(name,surname)<<"\n";
cout<<"\n name="<<name<<"\n";
cout<<"\n surname="<<surname<<"\n";
cout<<strcpy(name,surname)<<"\n";
cout<<"\n name="<<name<<"\n";
cout<<"\n surname="<<surname<<"\n";

}