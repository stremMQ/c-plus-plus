#include <iostream>
using namespace std;

class Test
{
private:
    int x;
    int y;
public:
    Test(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void print()
    {
        cout << "x: " << x << "\t y: " << y << endl;
    }
    Test &plus(int x, int y)
    {
        this->x += x;
        this->y += y;
        return *this;
    }
};

class Car
{
    friend void car_setPrice(Car&, int);
    friend void car_drive(Car&);
private:
    string name_car;
    int price_car;
    static inline unsigned cnt{};
public:
    Car(string name, int price)
    {
        name_car = name;
        price_car = price;
        cnt++;
    }
    void print()
    {
        cout << name_car << " : " << price_car << endl; 
    }
    static void count()
    {
        cout << cnt << endl;
    }
};


void car_setPrice(Car& car, int price)
{
    car.price_car = price; 
}

void car_drive(Car& car)
{
    cout << car.name_car << " gooo!" << endl;
}

int main()
{
    Test tocka{1234,4324};
    tocka.print();
    tocka.plus(-2143,-423);
    tocka.print();


    Car mercedes{"mercedes", 20000};
    Car bmw("bmw", 20000);
    Car lada("lada", 2000);
    mercedes.print();
    bmw.print();
    lada.print();
    car_drive(mercedes);
    car_setPrice(mercedes, 1700);
    mercedes.print();
    Car::count();
}