#include <iostream>
using namespace std;

class shape
{
public:
    virtual double perimetr() const = 0;
    virtual double ploshad() const = 0;
};

class Pramoug: public shape
{
public:
    Pramoug(double a, double b): weight(a), height(b)
    {    }

    double perimetr() const override
    {
        return weight * height;
    }

    double ploshad() const override
    {
        return weight * height * 2;
    }


private:
    double weight;
    double height;
};


class Number
{
public:
    int value;
    Number(int a): value(a)
    {}

    void print()
    {
        cout << value << endl;
    }

    Number operator - (const Number& number2)
    {
        return Number{value - number2.value};
    }

    int operator + (int num) const
    {
        return value + num;
    }
};

Number operator + (const Number& num1, Number& num2)
{
    return Number{num1.value + num2.value};
}


class DinamicType
{
private:
    int value;
public:
    DinamicType(int a): value(a)
    {}

    operator int() const 
    {
        return value;
    }
    explicit operator bool() const {return 0;}
};




class Moon
{
private:
    string company;
    int age;
    string name;
public:
    Moon(string a, int b , string c): company(a), age(b), name(c)
    {}
    string operator[](int num) const
    {
        switch(num)
        {
            case 0: return company;
            case 1: return to_string(age);
            case 2: return name;
            default: return "lox";
        }
    }
};

int main()
{
    Number num1 {30};
    Number num2 {31};
    Number rez {num2 - num1};
    Number rez2 {num1 + rez};
    int number{rez + 30};

    Pramoug per{30.0, 30.0};
    per.perimetr();
    rez.print();
    rez2.print();

    DinamicType number1212{234};
    int main {number1212};
    int main2 = static_cast<int>(number1212);
    cout << main << endl;


    Moon men("Microsoft", 27, "Mike");
    cout << men[0] << "\t " << men[1] << "\t" << men[2] << endl;
}