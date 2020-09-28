//string is the collectio of characters. two types of c++ prograing langauage
//1- C style strings
//2- String that are objects f string class(The standard C++ Libraary String Classes)

// char str= " meghna ";

#include<iostream>
#include<string>
using namespace std;

int main()
{
    //C style string
    char str[100];
    cout<<"Enter your name : "<<endl;
    cin.getline(str, 100);
    cout<<"Name is "<<str<<endl;
    return 0;

}
//strcpy(s1, s2);
//strcats(s1,s2);
//strlens(s1);
//strcmp(s1,s2);
//strchr(s1,ch);
