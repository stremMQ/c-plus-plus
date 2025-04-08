#include <iostream>
using namespace std;

class Animal
{
private:
    string name;
    int weight;
public:
    Animal(string name, int weight): name(name), weight(weight)
    {}
    virtual void makeSound() const = 0;
    
    void print()
    {
        cout << "name: " << name << "\t weight: "<< weight << endl;
    }
};

class Cat : public Animal
{
public:
    Cat(string name, int wes): Animal(name, wes)
    {}

    void makeSound() const override
    {
        cout << "may" << endl;
        cout << "mrr" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog(string name , int wes): Animal(name, wes)
    {}

    void makeSound() const override
    {
        cout << "gav" << endl;
        cout << "rrr" << endl;
    }
};

int main()
{
    Cat barsik("Barsik", 5);
    barsik.makeSound();

    Dog bernard("Bernard", 25);
    bernard.makeSound();
}