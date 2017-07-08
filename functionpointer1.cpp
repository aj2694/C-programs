//Program that shows use of function pointer
#include<iostream>
using namespace std;
class mammal
{
    private:
    int itsage;
    static int noofmammals;
    public:
    mammal(int);
    ~mammal();
    static int getnoofmammals();
    virtual void itssound();
    virtual void itscolor()=0;
    void (*funcptr)();
};
int mammal:: noofmammals=0;
mammal::mammal(int itsage)
{
    cout<<"Mammal constructor called";
    this->itsage=itsage;
    noofmammals++;
}
mammal::~mammal()
{
    noofmammals--;
    cout<<"Mammal destructor called";
}
void mammal::itssound()
{
    cout<<"Mammal sound";
}
int mammal::getnoofmammals()
{
    return noofmammals;
}
class dog:public mammal
{
public:
    dog(int);
    ~dog();
    void itssound();
    void itscolor();

};
dog::dog(int age):mammal(age)
{

    cout<<"Dog constructor called";

}

dog::~dog()
{
    cout<<"Dog destructor called";

}
void dog::itssound()
{
    cout<<"woof";
}
void dog::itscolor()
{

    cout<<"black";
}
class cat:public mammal
{
public:
    cat(int);
    ~cat();
    void itssound();
    void itscolor();
};
cat::cat(int age):mammal(age)
{

    cout<<"Cat constructor called";

}

cat::~cat()
{
    cout<<"Cat destructor called";

}
void cat::itssound()
{
    cout<<"meow";
}
void cat::itscolor()
{
    cout<<"white";
}
int main()
{

    mammal *pet[2];
     void (mammal::*funcptr[2])();
    for(int i=0;i<2;i++)
    {
        if(i==0)
        {
            pet[0]=new dog(2);
            funcptr[0]=mammal::itssound;

        }
        if(i==1)
        {
            pet[1]=new cat(3);
            funcptr[1]=mammal::itscolor;
        }
    }
  cout<< mammal::getnoofmammals();
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
    {


    {
    (pet[i]->*funcptr[j])();
    }

    }
    for(int i=0;i<2;i++)
    {
        delete pet[i];
         cout<< mammal::getnoofmammals();

    }

    return 0;
}
