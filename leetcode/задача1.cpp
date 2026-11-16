#include <iostream>

using namespace std;

int add(int, int);
double add (double, double);
string add (string, string);

int main()
{
    int num1 {345};
    int num2 {34234};

    cout << add(num1, num2) << endl;

    double num3 {3.67};
    double num4 {234.6};

    cout << add(num3, num4) << endl;

    string str5 {"Hello "};
    string str6 {"World!"};

    cout << add(str5, str6) << endl;
}

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

string add(string a, string b)
{
    return a + b;
}