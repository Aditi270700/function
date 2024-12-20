#include<iostream>
using namespace std;
class top
{
 static int a;
 static int b;
public:static void sum()
{
    cout<<a+b;
}
};
int top::a;
int top::b;
int main ()
{
top::sum();
}
// *static data member and static member function is a attribute of a class 
//* while nonstatic data member and nonstatic member function is a attribute of an object
//* whenever we call static member function we need not create an object we can acsess with 
// the name of class using scope resolution operator