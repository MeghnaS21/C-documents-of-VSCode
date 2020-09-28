#include<iostream>
using namespace std;

class Student
{
    private:
       int marks, performance;
    public:
       int rollno, attendance, rank;
    
    void setData(int marks, int performane);
    void getData()
    {
        cout<<"Marks of this stuent is: "<<marks<<endl;
        cout<<"Performance of this stuent is: "<<performance<<endl;
        cout<<"Roll No. of this stuent is: "<<rollno<<endl;
        cout<<"Attendance of this stuent is: "<<attendance<<endl;
        cout<<"Rank of this student is: "<<rank<<endl;
    }
};
void Student::setData(int m1, int p1)
{
    marks=m1;
    performance=p1;
}

int main()
{
    Student meghna;

    meghna.rollno = 67;
    meghna.attendance = 100;
    meghna.rank = 1;
    meghna.setData(100, 1);
    meghna.getData();

    return 0;
}