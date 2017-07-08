//Code that shows how to create a stack
#include<iostream>
using namespace std;
#define maxsize 100
class Stack
{
    int sizeofstack;
    int *tos;
    int *arr;
public:
    Stack(int);
    ~Stack();
    void push();
    void pop();
};
Stack::Stack(int sizeofstack)
{
    cout<<"\nConstructor called";
    this->sizeofstack=sizeofstack;
    arr=new int[(this->sizeofstack)];
    tos=arr;
}
Stack::~Stack()
{
    cout<<"\nDestructor called";
    delete[]arr;
}
void Stack::push()
{
    if(tos-arr>=sizeofstack)
    {
        cout<<"\nStack overflow";
    }
    else
    {
        int i;
        cout<<"\nENter element";
        cin>>i;
        *arr=i;
        arr++;
    }
}
void Stack::pop()
{
    if(tos-arr==0)
    {
        cout<<"\nStack underflow";
    }
    else
    {
        cout<<"\n"<<*(arr-1);
        arr--;
    }
}
int main()
{
    Stack s1(3);
    s1.push();
    s1.push();
    s1.push();
    s1.pop();
    s1.pop();
    s1.pop();
}
