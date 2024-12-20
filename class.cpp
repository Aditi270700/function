/*
types of classes

1. single class---> if a programm having only one class is called single class
2. multi class ---> if a programm having more than one is called multi class
3. anonymous class ---> nameless class is called anonymous class
*/
 #include<iostream>
 using namespace std;
 class top
 {
   int a=10;
   int b=50;
 public: void multi()
{
    cout<<a+b <<"\n";
 }
};
class top2
{
 int a=10;
 int b=90;
public:void multi()
{
    cout<<a*b<<"\n";
}
};
int main ()
{
    top t;
    t.multi();
    top2 t2;
t2.multi();
 }