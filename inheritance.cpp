//Program that shows concept of constructors, destructor and inheritance
#include<iostream>
#include<cstring>
using namespace std;
class mammal
{
protected:
    int itsAge;
    int itsWeight;
public:
    mammal(int,int);
    virtual  ~mammal();
    void getitsinfo();
};
mammal::mammal(int itsAge,int itsWeight)
{
    cout<<"mammal constructor called"<<endl;
    this->itsAge=itsAge;
    this->itsWeight=itsWeight;
}
mammal::~mammal()
{
    cout<<"mammal destructor called"<<endl;
}
void mammal::getitsinfo()
{
    cout<<"Mammals age and weight"<<itsAge<<itsWeight<<endl;
}
class dog:private mammal
{
public:
     dog(int,int);
    ~dog();
    void setdata();
};
void dog::setdata()
{
 //   itsAge=0;
  //  itsWeight=0;
    cout<<itsAge<<itsWeight;
}
dog::dog(int age,int w):mammal(age,w)
{
    cout<<"Dog constructor called";

}
dog::~dog()
{
    cout<<"Dog destructor called";

}
int main()
{
    dog d(5,4);
    d.setdata();

}
