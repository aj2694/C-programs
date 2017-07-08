//Program that shows how to write a constructor and destructor
#include<iostream>
using namespace std;
class A
{
    public:
    int* a;
    int sizee;
    A(int);
    A(A &);
    ~A();
    int& display();
};
A::A(int no)
{
    sizee=no;
    a=new int[no];
}
A::A(A &c)
{
    a=new int[c.sizee];
    for(int i=0;i<c.sizee;i++)
    {
        a[i]=c.a[i];
    }
}
A::~A()
{
    cout<<"destructor";
    delete[]a;
}
int& A::display()
{
    return *a;
}

int main()
{
    A obj1(3);
    obj1.a[0]=1;
    obj1.a[1]=9;
    obj1.a[2]=10;
    A obj2(obj1);
    cout<<obj2.a[0]<<obj2.a[1];

}
