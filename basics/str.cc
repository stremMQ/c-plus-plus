#include <iostream>
using namespace std;

int main()
{
    string Aa{100, 'a'};
    string hello{"hello World!", 6, 6};
    string lox{"ti lox",2};

    int num{128};
    cout << "num: " + to_string(num) << endl;
    string numS{to_string(num)};
    int numI{stoi(numS)};

    const char* mes_ykaz {numS.c_str()};
    cout << mes_ykaz << endl;

    char* ykaz{numS.data()};
    cout << ykaz << endl;

    int rez = Aa.compare(hello);
    cout << rez << endl;

    string text{"Hello Metanit.com!"};
    string podstr{text.substr(14)};
    string podstr2{text.substr(3,7)};
    cout << podstr2 << "\t" << podstr2 << endl;
}