#include<iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
       void initcounter(void)
       {
           counter=0;
       }
       void setPrice(void);
       void displayPrice(void);
};

void Shop:: setPrice(void)
{
    cout<<"Enter ID of your item- "<<(counter+1)<<" is "<<endl;
    cin >> itemId[counter];
    cout<<"Enter Price "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop:: displayPrice(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"Price of item with ID "<<itemId[i]<<" is Rs."<<itemPrice[i]<<endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initcounter();
    for(int i=1;i<6;i++)
    {
        dukaan.setPrice();
    }
    dukaan.displayPrice();
    return 0;
}