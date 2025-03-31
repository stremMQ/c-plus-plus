#include <iostream>
using namespace std;
 
class Integer
{
public:
    Integer(int number);
    int getValue() const;
    void setValue(int number) const;
    void print() const;
private:
    mutable int value;
};
Integer::Integer(int number)
{
    value=number;
    std::cout << "Object created" << std::endl;
}
int Integer::getValue() const { return value; }
void Integer::setValue(int number) const { value = number; }
void Integer::print() const
{
    std::cout << "Value: " << value << std::endl;
}

int main()
{
    const Integer num{3124};
    num.print();
    num.setValue(123);
    cout << num.getValue() << endl;
    num.print();
}