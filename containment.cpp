//Program that shows the concept of containment

#include<iostream>
#include<cstring>
using namespace std;
class cDate
{
    char day[10];
    int month;
    int year;
public:
    cDate(char[],int,int);
    ~cDate();
};
cDate::cDate(char day[10],int month,int year)
{
strcpy(this->day,day);
    this->month=month;
    this->year=year;
    cout<<"cDate Constructor";
}
cDate::~cDate()
{
    cout<<"cDate Destructor";

}
class cString
{
    int len;
    char *str;
public:
    cString(int,char *);
    ~cString();

};
cString::cString(int len,char buff[50])
{
    this->len=len;
    str=new char[len+1];
    strcpy(str,buff);
    cout<<"String constructor called";
}
cString::~cString()
{
    delete[] str;
    cout<<"string destructor";
}

class cEmployee
{
    int id;
    cString Ename;
    cDate doj;
public:
    cEmployee(int,int,char *,char[],int,int);
    ~cEmployee();
    void seteverything();
};
cEmployee::cEmployee(int id,int len,char* name,char day[10],int mon,int yr):Ename(len,name),doj(day,mon,yr)
{


        cout<<"employee constructor called";
}
cEmployee::~cEmployee()
{
    cout<<"employee destructor";
}
void cEmployee::seteverything()
{
    cout<<"enter id";

    cout<<id;
}
int main()
{
    cEmployee ramesh(1,10,"ramesh","monday",3,2016);
    ramesh.seteverything();


}


