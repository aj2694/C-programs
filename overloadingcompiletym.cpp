//Program that shows operator overloading by changing the signature of functions
#include<iostream>
using namespace std;
class A
{
private:
    int num;
public:
int func(int);
int func(int,int);
int func(int,int,int);
};
int A::func(int a)
{
    return a;
}
int A::func(int a,int b)
{
    return a*b;
}
int A::func(int a ,int b, int c)
{
    return c;
}
int main()
{
    A a;
    cout<<a.func(2)<<endl;
    cout<<a.func(2,5)<<endl;
    cout<<a.func(5,6,7)<<endl;
}
