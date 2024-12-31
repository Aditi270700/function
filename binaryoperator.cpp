#include<iostream>
using namespace std;
class bhopal
{
    int mile;
    public:bhopal(int m)
    {
        mile = m;
    }
    operator -(bhopal & obj){
mile = mile+obj.mile;
cout<<"Total k.m="<<mile;
    }
};
int main()
{
    bhopal start(12400);
    bhopal ends(12500);
    start-(ends);
}