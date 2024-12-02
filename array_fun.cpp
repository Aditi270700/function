#include<iostream>
using namespace std;
void fun (int arr[],int l)
{
for(int  i=0; i<l; i++)
{
cout << arr[i]+10<<"\n";
}
cout<<"\n after updation\n";
for(int  i=0; i<l; i++)
{
cout << arr[i]+10<<"\n";
}
}
int main (){
int arr[]={3,1,5,2,7};
int s=sizeof(arr)/sizeof(arr[0]);
fun(arr,s);
cout<<"\n after function calling\n";
for(int  i=0; i<s; i++)
{
cout << arr[i]<<"\n";
}
}