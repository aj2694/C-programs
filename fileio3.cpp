//Program to show file input output
#include<fstream>
#include<iostream>
using namespace std;
class animal
{
    int itsWeight;
    int itsAge;
public:
    animal(int,int);
    ~animal();
    int getitsWeight();
    void setitsWeight();
    int getitsAge();
    void setitsAge();
};
animal::animal(int itsWeight,int itsAge)
{
    this->itsWeight=itsWeight;
    this->itsAge=itsAge;
}
animal::~animal()
{

}
int animal::getitsWeight()
{
    return itsWeight;
}
 void animal::setitsWeight()
 {
     cout<<"Enter weight"<<endl;
     cin>>itsWeight;
 }
 int animal::getitsAge()
{
    return itsAge;
}
 void animal::setitsAge()
 {
     cout<<"Enter age"<<endl;
     cin>>itsAge;
 }
 int main()
 {
     animal buck(1,1),buk2(0,0);
     ofstream fout("Animal.txt",ios::binary);
     fout.write((char*) &buck,sizeof buck);
     fout.close();
     ifstream fin("Animal.txt",ios::binary);
     fin.read((char*)&buk2,sizeof buk2);
     cout<<buk2.getitsWeight();
     cout<<buk2.getitsAge();
     fin.close();


 }
