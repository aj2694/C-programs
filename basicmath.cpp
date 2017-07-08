//Program that shows basic mathematical function
#include<iostream>
using namespace std;
class A
{
private:
    int num;
    int pow;
public:
    A(int,int);
    ~A();
    void calculatepow();
    void getres();
};
A::A(int num,int pow)
{
    this->num=num;
    this->pow=pow;
}
A::~A()
{
    cout<<"destructor called";
}
void A::calculatepow()
{
    int i,res=1;

    for(;pow>0;pow--)
    {
        res=res*num;
        cout<<res;
    }

}
int main()
{
    A a(2,3);
    a.calculatepow();
}
