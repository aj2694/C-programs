//Program that shows use function pointers
#include<iostream>
#include<cstring>
#include<typeinfo>
#include<string>
using namespace std;
class mammal
{
protected:
    int itsAge;
    int itsWeight;
public:
    mammal(int,int);
    virtual  ~mammal();
    virtual  void getitsinfo();
    virtual void  itsSound();
    virtual  void  itsFood();
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
void mammal::itsFood()
{
    cout<<"All mammals drink milk"<<endl;

}
void mammal::itsSound()
{
    cout<<"All mammals make sound"<<endl;
}
void mammal::getitsinfo()
{
    cout<<"Mammals age and weight"<<itsAge<<itsWeight<<endl;
}
class dog:public mammal
{
private:
    char* itsBreed;
    void func();

public:
        friend class cat;

    dog(int,int,char*);
    ~dog();
    void itsFood();
    void  itsSound();
    void getitsinfo();
    void hunt();
};
void dog::func()
{
    cout<<"private";
}
void dog::hunt()
{
    cout<<"this dog hunts";
}
dog::dog(int age,int w,char *ptr):mammal(age,w)
{
    int len;
    cout<<"Dog constructor called";
    len=strlen(ptr);
    itsBreed=new char[len+1];
    strcpy(itsBreed,ptr);
}
dog::~dog()
{
    cout<<"Dog destructor called";
    delete[] itsBreed;
}
void dog::itsFood()
{
    cout<<"Bones!"<<endl;
}
void dog::itsSound()
{
    cout<<"Woof!";
}
void dog::getitsinfo()
{
    mammal::getitsinfo();
    cout<<endl;


    cout.setf(ios::right);
    cout<<"its breed" ;
    cout.setf(ios::internal);
    cout<<itsBreed<<endl;
}
class cat:public mammal
{
private:
   // char* itsBreed;
public:
    friend class dog;
    cat(int,int);
    ~cat();
  void itsFood();
    void  itsSound();
void setitsbreed(dog&d1,char*name)
{
    strcpy(d1.itsBreed,name);
}
};
cat::cat(int age,int w):mammal(age,w)
{
    int len;
    cout.width(10);
    cout.fill('*');
    cout<<"Cat constructor called";
//    len=strlen(ptr);
//    itsBreed=new char[len+1];
//    strcpy(itsBreed,ptr);
}
cat::~cat()
{
    cout<<"Cat destructor called";
  //  delete[] itsBreed;
}
void cat::itsFood()
{
    cout<<"Fish!"<<endl;
}
void cat::itsSound()
{
    cout<<"Mew!";
}
int main()
{
    string test="this is a test ";
    mammal *pethouse[3];
    dog *d1;
    void (mammal::*functptr)();
    cat frisky(1,2);
    pethouse[0]=new cat(2,32);
    pethouse[1]=new dog(1,21,"bruno");
    for(int i=0;i<=2;i++)
    {
        switch(i)
        {


        case 0:functptr=mammal::getitsinfo;
        break;
        case 1:functptr=mammal::itsFood;
        break;
        case 2:functptr=mammal::itsSound;
        break;
        }
        for(int j=0;j<2;j++)
        {
        (pethouse[j]->*functptr)();
        }

    }
d1=new dog(2,3,"bronu");
d1=dynamic_cast<dog*>(pethouse[1]);
d1->hunt();
       cout.write(typeid(functptr).name(),10);
  dog scobby(2,3,"scooby");
  cat qwerty(3,2);
  qwerty.setitsbreed(scobby,"shaggy");
    scobby.getitsinfo();
    cout<<test;
    return 0;
}
