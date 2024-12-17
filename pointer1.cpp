#include<iostream>
using namespace std;

int axis(int cardno,int pwd)
{
    return 1000;
}
int sbi (int cardno,int pwd)
{
    return 2000;
}

int main (){
    int (*atm) (int,int);
    atm=axis;
    cout<<"axis balance="<<atm(3,4);
}
