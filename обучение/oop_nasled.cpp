#include <iostream>
using namespace std;

class Person
{
private:
    string name;
public:
    Person(string name):name{name}
    {}

    virtual void print()
    {
        cout << "name: " << name << endl;
    }
};

class Employee : public Person
{
private:
    string company;
public:
    Employee(string name, string company): Person(name), company{company}
    {}

    void print()
    {
        Person::print();
        cout << "work in: " << company << endl;
    }
};

int main()
{
    Person bob{"Bob"};
    Person* person{&bob};
    person->print();

    Employee Tom{"Tom", "eldorado"};
    person = &Tom;
    person->print();
}