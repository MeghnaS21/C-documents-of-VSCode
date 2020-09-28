#include <iostream>
using namespace std;

class base
{
protected:
    int width;
    int height;

public:
    void setWidth(int x)
    {
        width = x;
    }
    void setHeight(int y)
    {
        height = y;
    }
};

class Rectangle : public base
{
public:
    int area()
    {
        return (width * height);
    }
};

int main()
{
    Rectangle rect;

    rect.setWidth(5);
    rect.setHeight(6);

    cout << "Area: " << rect.area();

    return 0;
}