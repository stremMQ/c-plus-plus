#include <iostream>
using namespace std;

class Integer
{
    int integ;
public:
    Integer(int p_integ)
    {
        integ = p_integ;
        cout << "creat object!" << endl;
    }
    void setInt(int p_integ)
    {
        integ = p_integ;
    }
    int getInt()
    {
        return integ;
    }
    void print()
    {
        cout << integ << endl;
    }
};

int main()
{
    Integer num(16);
    num.setInt(28);
    cout << num.getInt() << endl;
    num.print();
}
