#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
      string name;
      int roll_no;
};

int main()
{
    Student s1;
    s1.name = "MEGHNA";
    s1.roll_no = 67;
    cout<<"Name of student: "<<s1.name<<" "<<"and roll number is: "<<s1.roll_no;
    return 0;
}