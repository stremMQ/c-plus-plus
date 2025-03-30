#include <iostream>
 using namespace std;
class Integer
{
public:
    Integer(int number)
    {
        value=number;
    }
    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }
    Integer(const Integer &p)
    {
        value = p.value;
    }
private:
    int value;
};

int main()
{
    Integer num(124);
    num.print();
    Integer num2(num);
    num2.print();
}