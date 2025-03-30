#include <iostream>
using namespace std;

class Integer
{
    int num;
public:
    Integer(int);
    int getInt();
    void print();
    void setInt(int);
};

Integer::Integer(int number)
{
    num = number;
    cout << "object created!" << endl;
}

int Integer::getInt(){return num;}
void Integer::print(){cout << "value: " << num << endl;}
void Integer::setInt(int number){num = number;}

int main()
{
    Integer num{324};
    num.print();
    num.setInt(234);
    cout << num.getInt() << endl;
}