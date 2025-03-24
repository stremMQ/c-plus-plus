#include <iostream>
#include <string>

int mosive[3]{1,2,3};
const int mosive2[]{1,2,4,5,5,5,6,2};

int main()
{
    setlocale(LC_ALL,"");
    int izmena = mosive2[2];
    std::cout << izmena << std::endl;
    mosive[2] = 234;
    std::cout << mosive[2];

    std::cout <<"size: " << sizeof(mosive2)/sizeof(mosive2[0]) << std::endl;
    std::cout << "size: " << std::size(mosive2) << std::endl;

    int sum{};
    for (int i: mosive2)
    {
        sum += i;
        std::cout << i << std::endl;
    }
    std::cout << "sum: "<< sum << std::endl;

    const int max {3};
    int in_mosive[max]{};
    int j{};
    while(j < max)
    {
        std::cin >> in_mosive[j];
        j++;
    }
    for(int& nm: in_mosive) std::cout << nm << " " << std::endl;

    int numbers[3][2]
    {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    std::cout << numbers[1][1] << " " << numbers[2][0] << std::endl;
    numbers[2][0] = 52;
    numbers[1][1] = 42;
    std::cout << numbers[1][1] << " " << numbers[2][0] << std::endl;

    for (auto &bm: numbers)
    {
        for (int number: bm)
        {
            std::cout << number << "\t";
        }
        std::cout << std::endl;
    }

    char simvol_mos[]{"hello"};
    std::cout << simvol_mos << std::endl;

    const int max_L {25};
    char langs[][max_L]
    {
        "c++", "c#", "python", "java",
        "kotlin", "php", "c--", "go"
    };
    std::cout << langs[4] << std::endl;

    const int maximym {100};
    char spis_govna[maximym] {};
    std::cout << "input text:" << std::endl;
    std::cin.getline(spis_govna, maximym);
    std::cout << "your text: " << spis_govna << std::endl;

    std::string name {};
    getline(std::cin, name);
    std::cout << name << std::endl;
}