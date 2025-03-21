#include <iostream>

using namespace std;

int a {34};

void hello();

void plusr()
{
    static int plusplus {10};
    cout << "rez = " << plusplus << endl;
    plusplus ++;
}

void print(string a = "text")
{
    cout << a << endl;
}

void ssilca(int& num)
{
    num += num * 10;
    cout << num << endl;
}

int sum(int f, int g)
{
    int sumc {f + g};
    return sumc;
}

int main ()
{
    int numsi {3213};

    for (int i{1}; i < 4; i++)
    {
        hello();
        plusr();
    }

    print("Hello World!");

    ssilca(numsi);
    cout << numsi << endl;

    int sumf = sum(12, 54);
    cout << sumf << endl;
}

void hello()
{
    int a {10};
    cout << "hello " << a << endl;
    cout << "hello " << ::a << endl;
}