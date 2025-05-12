#include <iostream>
#include <functional>
using namespace std;

class Print
{
public:
    void operator()(const string& text) const
    {
        cout << text << endl;
    }
};

class lambda123
{
public:
    auto operator()() const {cout << "world!" << endl;}; // тоже самое что и лямбда
};


void do_oper(int a, int b, int(*op)(int,int))
{
    cout << op(a,b) << endl;
}

class Sam
    {
    public:
        int operator()(int a, int b){return a + b;};
    };

    int sub(int a, int b){return a - b;};

int main()
{
    auto suma{[](int a, int b){return a + b;}};
    do_oper(34, 43, suma);

    Print print;
    print("gjikdfhguierhguivbdxjnvklsfdg");
    []{cout << "world!" << endl;} ();  //лямбда функция 

    auto hel{[](const string& text){cout << text << endl;}}; //лямбда функция в переменной

    hel("lox");


    auto sum{[](int num1, int num2)-> double {return num1 + num2;}}; // явное указание типов

    cout << sum(432,678) << endl;

    int num{100};
    auto addnum = [=](int n){cout << n + num << endl;};
    addnum(100);

    int is{10};
    int* ist{&is};
    auto lm = [ist](){(*ist)++;};
    lm();
    cout << "is = " << is << endl;

    auto up = [&](){is++;};
    up();
    cout << "is = " << is << endl;

    int nami{52};
    auto mut = [=]() mutable 
    {
        nami++;
        cout << "cp nami + 1 = " << nami << endl;
    };
    cout << "nami = " << nami <<  endl;


    //function<>
    function<int(int,int)> operation;

    operation = Sam{};
    cout << operation(12,424) << endl;

    operation = sub;
    cout << operation(67, 7) << endl;

    auto mult = [](int a, int b){return a * b;};
    operation = mult;
    cout << mult(12,21) << endl;
    
}