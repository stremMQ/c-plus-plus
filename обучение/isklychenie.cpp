#include <iostream>
using namespace std;

double delen(int a, int b)
{
    if(b == 0) throw 0;
    if(a == 0) throw "lox";
    return a / b;
}

void test(int a, int b)
{
    try
    {
        double rez {delen(a,b)};
        cout << rez << endl;
    }
    catch(int& code)
    {
        cout << "devision dy zero!" << endl;
    }
    catch(const char& error_message)
    {
        cout << error_message << endl;
    }
}

int main()
{
    test(0,0);
}