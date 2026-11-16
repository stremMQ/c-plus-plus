#include <iostream>
using namespace std;

int main()
{
    string text{"hello loxs"};
    int num = text.find("lo");
    cout << num << endl;

    if(text.find("lfdf") == string::npos)
    {
        cout << "ti lox" << endl;
    }

    int num2 = text.rfind("xs");
    cout << num2 << endl;
    string str{"Hello World"};
    string str2;
    str2.append(str.substr(0,5) + str.substr(5,6));
    cout << str2 << endl;

    str.insert(5,"loxi");
    cout << str << endl;

    string lang{"java Python C#"};
    lang.replace(11,2,"c++");
    cout << lang << endl;
    lang.replace(6,5,5,'*');
    cout << lang << endl;

    lang.erase(4,6);
    cout << lang << endl;
}