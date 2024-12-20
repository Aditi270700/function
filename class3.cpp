#include<iostream>
using namespace std;
class virus
{
public:void affect()
 {
 cout<<"your system got hacked\n";
 }
};
class Reward
{
virus v;
public:void prize()
{
cout<<"you won 20000\n";
v.affect();
}
};
int main (){
Reward r;
r.prize();
}