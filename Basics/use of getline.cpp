#include<iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Hello, "<< name << " Have a great day"<<endl;
    return 0;
}