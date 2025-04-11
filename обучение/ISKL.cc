#include <iostream>
using namespace std;

class Error
{
public:
    Error(string error): mes(error)
    {}
    string getMes() const {return mes;}
private:
    string mes;
};

class Person
{
private:
    string name;
    unsigned age;
public:
    Person(string p_name, unsigned p_age)
    {
        if(age > 110)
        {
            throw Error{"dont age!"};
        }
        name = p_name;
        age = p_age;
    }
};
double proizvod(int,int);

int main()
{
    try
    {
        Person bob("bob", 100);
        Person Tom("Tom", 120);
    }
    catch(const Error& error)
    {
        cout << error.getMes() << endl;
    }
    try
    {
        proizvod(0,12);
    }
    catch(const exception& error)
    {
        cout << "NS KJP" << endl;
    }
}

double proizvod(int a, int b)
{
    if(b > 0) throw exception();
    if(a > 0) throw exception();
    return a/b;
}