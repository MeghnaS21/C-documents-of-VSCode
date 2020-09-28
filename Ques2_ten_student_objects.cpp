#include<iostream>
#include<string>
using namespace std;

class Students
{
    public:
      string phone_no;
      string address;
      int roll_no;
      void display(void);
};

void Students::display(void)
{
    cout<<"1- Phone number of a studdent is: "<<phone_no<<endl;
    cout<<"2- Address of a student: "<<address<<endl;
    cout<<"3- Roll number of a student: "<<roll_no<<endl<<endl;
}

int main()
{
    Students Meghna;
    Students Lipika;
    Students Misbah;
    Students Ayushi;
    Students Priya;
    Students Rishu;
    Students Himanshu;
    Students Reet;
    Students Harshita;
    Students Aryan;

    Meghna.phone_no="6392068074";
    Meghna.address="Jankipuram";
    Meghna.roll_no=67;
    Meghna.display();

    Lipika.phone_no="9292765443";
    Lipika.address="Jankipuram";
    Lipika.roll_no=104;
    Lipika.display();

    Misbah.phone_no="6778899098";
    Misbah.address="Chowk";
    Misbah.roll_no=67;
    Misbah.display();

    Ayushi.phone_no="678987654";
    Ayushi.address="Barabanki";
    Ayushi.roll_no=67;
    Ayushi.display();

    Priya.phone_no="7867655434";
    Priya.address="Gomti";
    Priya.roll_no=67;
    Priya.display();

    Rishu.phone_no="8054738926";
    Rishu.address="Sitapur";
    Rishu.roll_no=67;
    Rishu.display();

    Himanshu.phone_no="4567382923";
    Himanshu.address="Kapoorthala";
    Himanshu.roll_no=67;
    Himanshu.display();

    Reet.phone_no="8767854321";
    Reet.address="Jankipuram";
    Reet.roll_no=76;
    Reet.display();

    Aryan.phone_no="1234567891";
    Aryan.address="Jankipuram";
    Aryan.roll_no=77;
    Aryan.display();

    return 0;
}