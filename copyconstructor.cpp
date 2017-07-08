//Program that shows how to write a copy constructor
#include<iostream>
using namespace std;
class SimpleCircle
{
private:
    itsRadius;
public:
    SimpleCircle();
    SimpleCircle(int);
    ~SimpleCircle();
    SimpleCircle(Simplecircle);
    void getitsradius();
    void setitsradius();
};
SimpleCircle::SimpleCircle()
    {
        cout<<"Constructor Default";
        itsRadius=0;
    }
SimpleCircle::SimpleCircle(int itsRadius)
    {
        cout<<"Constructor with this pointer and parameterized";
        this->itsRadius=itsRadius;
    }
SimpleCircle::~SimpleCircle()
    {
        cout<<"Destructor";
    }
SimpleCircle::SimpleCircle(Simplecircle& temp)
    {
        cout<<"Copy Constructor";
        this->itsRadius=temp.itsRadius;
    }
void SimpleCircle::getitsradius()
    {
        cout<<"Radius:"<<itsRadius;
    }
void SimpleCircle::setitsradius()
    {
        int rad;
        cout<<"please enter the radius";
        cin>>rad;
        itsRadius=rad;
    }

int main()
{
    SimpleCircle c1(0),c2,c3(4),c4;
    c1.getitsradius();
    c2.setitsradius();
    c2.getitsradius();
    c3.getitsradius();
    c4.getitsradius();
    return 0;
}
