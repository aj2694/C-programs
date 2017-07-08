//File input/output operations
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class student
{public:
    char name[20];
    int rollno;
    public:
        student();
    student(char[],int);
    ~student();

};
student::student()
{

}
student::student(char name[10],int rollno)
{
    cout<<"this is a constructor";

   strcpy(this->name,name);
    this->rollno=rollno;

}
student::~student()
{
    cout<<"destructor";
}
int main()
{
    int j;
    student s1[5];
    student s2("",1);
     ofstream i;
    i.open("cpptextfile.txt");

   for(j=0;j<5;j++)
   {
       cout<<"enter rollno"<<endl;
       cin>>s1[j].rollno;
       fflush(stdin);
       cout<<"enter name"<<endl;
       cin.getline(s1[j].name,20);
        i.write((char*)&s1[j],sizeof(student));
   }
    char ch[20];
    char str[20]="this is test";

    i.close();
   ifstream o;
   try
     {
     o.open("cpptextfile.txt");
     if(!o.is_open())
      {
          int a;
          throw(a);
      }
      while(!o.eof())
   {

      o.read((char*)&s2,sizeof(student));
      cout<<s2.name;
      cout<<s2.rollno;
    cout<<endl;
   }
      o.close();
      }
      catch(int a)
      {
          cout<<"file not found";
    }


}
