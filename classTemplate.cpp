#include <iostream>
using namespace std;

template <typename T, typename U>
class weighgts
{
    T kg;
    U grams;

public:
    void setData(T x, U y)
    {
        kg = x;
        grams = y;
    }
    void getData()
    {
        cout << "kilograms: " << kg << endl;
        cout << "Grams: " << grams << endl;
    }
};
int main()
{
    weighgts<int, float> obj1;

    obj1.setData(5, 500.50);
    cout << "output: " << endl; 
    obj1.getData();
    return 0;
}