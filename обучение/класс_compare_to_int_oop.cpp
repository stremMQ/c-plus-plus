#include <iostream>
using namespace std;

#include <iostream>
 
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
    int compare(Integer& name)
    {
        if(this->value > name.value)
        {
            return 1;
        }
        else if(this->value < name.value)
        {
            return -1;
        }
        else return 0;
    }
private:
    int value;
};

int main()
{
    Integer num1(124);
    Integer num2(123);
    cout << num1.compare(num2);
}