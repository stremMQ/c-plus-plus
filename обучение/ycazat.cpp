#include <iostream>
using namespace std;
int main()
{
    int number {125};
    auto *pnumber {&number};

    cout << pnumber << endl;
    cout << &pnumber << endl;
    cout << *pnumber << endl;

    *pnumber = 35;
    int pn {*pnumber};

    cout << pn << endl;

    int b {5};
    int *by {&b};
    int *yby {&*by};

    cout << yby << endl;
    cout << *yby << endl;

    *yby = 112;

    cout << b << endl;

    return 0;
}