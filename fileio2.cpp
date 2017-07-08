//Program to show file input output
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char buff[90];
    char name[20];
    int choice;
    cout<<"Enter the appropriate option:"<<endl;
    cout<<"1)Create new file 2)Open existing file and append";
    cin>>choice;
    switch (choice)
    {
    case 1:
        {
            cout<<"Enter the name of the file you want to create"<<endl;
            cin>>name;
            ofstream fout(name);
            cout<<"Enter the data";
            cin.ignore(1,'\n');
            cin.getline(buff,90);
            fout<<buff;
            fout.close();
            break;
        }
    case 2:
        {
            cout<<"Enter the name of the existing file"<<endl;
            cin>>name;
            ofstream fout(name,app);
            if(!fout)
            {
                cout<<"The file you requested cannot be found"<<endl;
            }
            else
            {
              cout<<"Enter the data"<<endl;
               cin.ignore(1,'\n');
              cin.getline(buff,90);
              fout<<buff;

            }
            fout.close();
            break;
        }
    }
    cout<<"The data has been entered"<<endl;
    cout<<"Do you want to read the file1)yes2)no"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        {
        char ch;
        ifstream fin(name);
        if(!fin)
        {
            cout<<"File cannot be found"<<endl;
        }
        else
        {
            while(fin.get(ch))
            {
                cout<<ch;
            }

        }
        fin.close();
        break;
        }
    case 2:
        {
        cout<<"exiting"<<endl;
        break;
        }
    }
    return 0;
}
