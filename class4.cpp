#include<iostream>
using namespace std;
class student
{
    int rno;
    public:student(int rno)
    {
        this->rno=rno;
    }
    void show()
    {
        cout<<"Rno="<<rno;
    }
};
int main (){
    student s(101);
    s.show();
    student s2(s);
    s2.show();// in shallow copy object is copy
    

}