#include<iostream>
using namespace std;

class Employee
{
    int ID;
    static int count;

public:
    void setData(void)
    {
        cout<<"Enter the id: "<<endl;
        cin>>ID;
        count++;
    }

    void getData(void)
    {
        cout<<"ID of employee "<<count<<" is "<<ID<<endl;
    }
    /*while declaring the member functions as static we are making it independent of any object of the class
     and it can be called even without the  objects of the class using scope resolution operator. 
     SYNTAX:-
           class name :: memer_function_name;
    */

    static void getcount(void)
    {
        cout<<"The value of count is: "<<count<<endl;
    }
};

int Employee:: count;

int main()
{
    Employee meghna, misbah, ayushi;

    meghna.setData();
    meghna.getData();
    Employee::getcount();

    misbah.setData();
    misbah.getData();
    Employee::getcount();

    ayushi.setData();
    ayushi.getData();
    Employee::getcount();

    return 0;
}
