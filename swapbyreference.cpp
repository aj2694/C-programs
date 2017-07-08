//Code for swapping by using reference
#include<iostream>
void swap(int&,int&);
int main()
{
    using namespace std;
    int a=10,b=12;
    swap(a,b);

    cout<<a<<b;
    return 0;
}
void swap(int &c,int &d)
{
    int temp;
    temp=c;
    c=d;
    d=temp;
}
