#include <iostream>

int x;
int main()
{
    setlocale(LC_ALL, "");
    std::wcout << L"привет мир!" << std::endl;
    std::wcout << L"Hello world" << std::endl;
    std::cout << "Hello World" << std:: endl;

    int a;
    a = 132;
    int b = 12;
    long long c {23'432'443'535};
    int f (2345);

    std::cout<< a << " " << b << " " << c << " " << f << "\n";
    std::cout << x << std::endl;
    std::wcout << L"размер " << sizeof(c) <<std::endl;
    
    double sum {100.2};
    unsigned int hours {8};
    unsigned int revenuePerHour { static_cast<unsigned int>(sum / hours * sum) };

    std::cout << revenuePerHour;

    int m {100};
    long long p {m << 10};
    std::cout << std::endl << p;

    int one {10};
    int two {12};
    bool three {one == two};
    bool four {one == 10};

    std::cout << std::endl << std::boolalpha << three << " " << four << std::endl;

    if(one == 10)
    {
        std::cout << "one = 10" << std::endl;
    }

    if (two == 12) std::cout << "two = 12" << std::endl;

    if (two == 13)
    {
        std::cout << "two = 13" << std::endl;
    }
    else if (two == 14)
    {
        if (two >= 14)
        {
            std::wcout << L"ты лох" << std::endl;
        }
    }
    else
    {
        std::wcout << L"ты всеровно лох!" << std::endl;
    }

    int me {1};
    int you {2};
    if(int c {2-1}; me != you) std::wcout << L"мы разные!" << std::endl;

    int we = me > you ? me - you : me + you;

    std::cout << we << std::endl;

    int sch {12};
    switch (int xz{5};sch)
    {
        case 1: 
            std::cout << "sch = 1" << std:: endl;
            break;
        case 2: 
            std::cout << "sch = 2" << std:: endl;
            break;
        case 3: 
            std::cout << "sch = 3" << std:: endl;
            break;
        case 4: 
            std::cout << "sch = 4" << std:: endl;
            break;
        case 5:
        { 
            int jfg {100};
            std::cout << "sch = 5" << jfg << std:: endl;
            break;
        }
        case 6: 
            std::cout << "sch = 6" << std:: endl;
            break;
        case 7: 
            std::cout << "sch = 7" << std:: endl;
            break;
        case 8:
        case 9: 
            std::cout << "sch = 9" << std:: endl;
            break;
        case 10: 
            std::cout << "sch = 10" << std:: endl;
            break;
        case 11: 
        case 12: 
            std::cout << "sch = 12" << xz << std:: endl;
            break;
        default:
        std::wcout << L"хз" << std:: endl;
    }

    for (char ch: "Hello World!")
    {
        std::cout << ch << std::endl;
    }

    int zxc {-1};

    do
    {
        std::cout << "jfjfjfjfjjfjfjfjfjfjfj" << std::endl;
        zxc --;
    }
    while(zxc >= 0 && zxc < 3);
    
    for (int q {1}; q < 11; q++)
    {
        for (int t {1}; t < 11; t ++)
        {
            std::cout << q * t << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}