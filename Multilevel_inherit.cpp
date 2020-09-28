#include <iostream>
using namespace std;

class Student
{
public:
    void set_roll_Number(int);
    void get_roll_Number();

protected:
    int roll_number;
};

void Student ::set_roll_Number(int r)
{
    roll_number = r;
}

void Student ::get_roll_Number()
{
    cout << "Roll number : " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float DSA;
    float DATABASE;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m, float p)
{
    DSA = m;
    DATABASE = p;
}

void Exam ::get_marks()
{
    cout << "DSA marks : " << DSA << endl;
    cout << "DATABASE marks : " << DATABASE << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void displayResult()
    {
        get_roll_Number();
        get_marks();
        cout << "Your percentage is " << (DSA + DATABASE) / 2<< endl;
        
    }
};

int main()
{
    Result meghna;
    meghna.set_roll_Number(67);
    meghna.set_marks(99.9, 100);
    meghna.displayResult();

    return 0;
}