#include <iostream>
#include <string>
using namespace std;

class Cars
{
    string company;
    string model;
    string fuel_type;
    float mileage;
    double price;

public:
    Cars()
    {
        cout << "                          DEFAULT  CONSTRUCTOR    " << endl;
    }
    Cars(string cname, string mname, string ftype, float m, double p)
    {
        cout << "                         PARAMETERIZED CONSTRUCTOR  " << endl;
        company = cname;
        model = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    Cars(Cars &obj)
    {
        cout << "                         copy CONSTRUCTOR  " << endl;
        company = obj.company;
        model = obj.model;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        price = obj.price;
    }
    void setData(string cname, string mname, string ftype, float m, double p)
    {
        company = cname;
        model = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    void displayData()
    {
        cout << "Car properties: " << endl;
        cout << "BRAND NAME:- " << company << endl;
        cout << "MODEL:- " << model << endl;
        cout << "FUEL TYPE:- " << fuel_type << endl;
        cout << "MILEAGE:- " << mileage << endl;
        cout << "PRICE:- " << price << endl
             << endl;
    }

    ~Cars()
    {
        cout << "DESTRUCTOR CALLED" << endl;

        /*we will get this destructor called three times becuse it was clled for all the three objects.
         and for dynamic memory allocation dalocation will happen in this part*/
    }
};

int main()
{
    Cars car1, car2("Bugatti", "Chhiron", "Petrol", 4.5, 499000);
    car1.setData("Lamborghini", "Aventador", "Petrol", 5.5, 501000);
    car1.displayData();
    car2.displayData();

    Cars car3 = car1;
    car3.displayData();

    return 0;
}