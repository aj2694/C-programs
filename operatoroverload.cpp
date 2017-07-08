//Program that shows operator overloading of arithmetic operators
#include<iostream>
using namespace std;
class location
{
private :
    float latitude;
    float longitude;
public:
    location operator -(location);
    location operator=(location);
    void operator ++();
    void operator ++(int);
    location();
    location(float,float);
    void display();
};
location::location()
{
    latitude=0;
    longitude=0;
}
location::location(float latitude,float longitude)
{
   this->latitude= latitude;
   this->longitude =longitude;
}
location location::operator-(location a)
{
location temp;
 temp.latitude=latitude-a.latitude;
temp.longitude=longitude-a.longitude;
    return temp;
}
location location::operator=(location b)
{
    this->latitude=b.latitude;
    this->longitude=b.longitude;
    return *this;
}
void location::operator++()
{

    this->latitude=++latitude;
    this->longitude=++longitude;

}
void location::operator++(int x)
{
    this->latitude=latitude++;
    this->longitude=longitude++;
}
void location::display()
{
    cout<<longitude;
    cout<<latitude;
}
int main()
{
    location loc1(2.3,4.5);
    location loc2(7.4,5.6);
    location temp;
    loc1=loc1-loc2;
    loc1.display();
    loc1=loc2;
    loc1.display();
    ++loc1;
    loc1.display();
    loc1++;
    loc1.display();
}



