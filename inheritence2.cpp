//Program that shows inheritance with virtual methods
#include<iostream>
#include<cstring>
using namespace std;
class movie
{
    char* name;
    char* category;
public:
    movie();
    movie(char[],char[]);
    ~movie();
   virtual void display();
};
movie::movie()
{
    name=new char[10];
    category=new char[10];
    name="no name";
    category="bolly";
    cout<<"default constructor called"<<endl;
}
movie::movie(char a[10],char b[10])
{
    name=new char[strlen(a)];
    category=new char[strlen(b)];
    strcpy(name,a);
    strcpy(category,b);
    cout<<"Parametrized constructor called"<<endl;
}
movie::~movie()
{
    delete[]name;
    delete[]category;
    cout<<"Destructor called"<<endl;
}
void movie::display()
{
    cout<<"name"<<name<<endl;
    cout<<"category"<<category<<endl;
}
class bolly:public movie
{
    int ratings;
public:
    bolly();
    bolly(char[],char[],int);
  void   display();
};
bolly::bolly()
{
    ratings=0;
}
bolly::bolly(char c[10],char d[10],int ratings):movie(c,d)
{
    this->ratings=ratings;
}
void bolly::display()
{
    movie::display();
    cout<<"ratings"<<ratings<<endl;
}

int main()
{
   movie *m1=new bolly("lol","jok",3);
    m1->display();

}
