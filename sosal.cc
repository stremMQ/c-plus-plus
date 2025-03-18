#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    char text {};
    do
    {
        cout << "Sosal?" << endl;
        cout << "y/n" << endl;
        cin >> text;
    }
    while (text != 'y');
    return 0;
}