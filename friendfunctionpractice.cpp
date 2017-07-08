//Program that shows use of friend functions
#include<iostream>
using namespace std;
class A
{
private:
    int a;
public:
    friend class B;

};
class B
{
    int b;
public:
    friend class A;
    void seta(A&,int);
};
void B:: seta(A& x,int n)
{
  x.a=n;
    cout<<x.a;
}
int main()
{
    A a;
    B b;
   b.seta(a,9);
}
