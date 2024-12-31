#include<iostream>
using namespace std;
class RBI
{
int t;
public:RBI()
{
cout<<"\n RBI Memory\n";
}
~RBI()
{
    cout<<"\n RBI memory released\n";
}
public:void show()
{
    cout<<"\n RBI CLASS\n";
}
};
class SBI:public RBI{
int a;
public:SBI()
{
cout<<"\n SBI memory released\n ";
}
public:void show()
{
    cout<<"\n SBI CLASS\n";
}
};
int main()
{
    SBI s;
    s.show();
    cout<<"size of sbi="<<sizeof(s);
}
