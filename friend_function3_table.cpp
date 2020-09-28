#include <iostream>
#include <cmath>

using namespace std;

class table
{
    int a;

public:
    void setNumber(int n1)
    {
        a = n1;
    }

    friend table result(table t1);

    void printTable()
    {
        cout << a << endl;
    }
};

table result(table t1)
{
    table t2;
    for (int i = 1; i < 11; i++)
    {
        t2.setNumber(t1.a * i);
        t2.printTable();
    }
    exit(0);
}

int main()
{
    table o1, res;
    o1.setNumber(5);
    o1.printTable();

    res = result(o1);

    return 0;
}
