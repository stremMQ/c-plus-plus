#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
    //вектор
    vector<int> nums;

    //добавление элементов в вектор в конец
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    //вывод всех элементов вектора
    for(int i: nums)
    {
        cout << "num: " << i << endl;
    }

    //итератор вектора
    auto iter = nums.cbegin();
    //добавление элемента 33 на 3 указание итератором
    nums.emplace(iter + 2, 33);
    //добавление элемента 22 на 2 указание итератора
    nums.insert(iter + 1, 22);

    for(int n: nums)
    {
        cout << "num add: " << n << endl;
    }

    vector<int> neskolko{1,2,3,4};
    for(int f: neskolko)
    {
        cout << "neskolko: " << f << endl;
    }
    auto iter3 = neskolko.cbegin();
    //добавление тех элементов 11 на 1 указание итератора
    neskolko.insert(iter3, 3, 4);
    for(int b: neskolko)
    {
        cout << "nes: " << b << endl;
    }

    vector<int> clean{1,2,3,4};
    for(int m: clean)
    {
        cout << "vec: " << m << endl;
    }
    //удаление всех элементов вектора
    clean.clear();
    for(int m: clean)
    {
        cout << "vec clean: " << m << endl;
    }

    vector<int> back{1,2,3,4};
    for(int m: back)
    {
        cout << "vec back: " << m << endl;
    }
    //удаление последнего элемента
    back.pop_back();
    for(int m: back)
    {
        cout << "vec back-1: " << m << endl;
    }

    auto iter2 = back.cbegin();
    //удаляет элемент на который указывает итератор
    back.erase(iter2 + 2);
    for(int m: back)
    {
        cout << "vec back--1: " << m << endl;
    }
    //удаляет элемент в промежутке итераторов
    back.erase(iter, iter+1);
    for(int m: back)
    {
        cout << "vec back-all: " << m << endl;
    }

    vector<int> rez{1,2,3,4};
    for(int m: rez)
    {
        cout << "vec rez: " << m << endl;
    }
    //ограничение длины вектора и заполение пустоты 1, можно только ограничеть еще
    rez.resize(6,1);
    for(int m: rez)
    {
        cout << "vec rez = 6 il: " << m << endl;
    }

    vector<string> langs{"Java","Python","Goland"};
    for(string i: langs)
    {
        cout << i << "\t";
    }
    cout << endl;
    //количество замен и на что заменяется
    langs.assign(6,"C++");
    for(string i: langs)
    {
        cout << i << "\t";
    }
    cout << endl;
    //замена значений
    langs.assign({"C++","C","1C","C#"});
    for(string i: langs)
    {
        cout << i << "\t";
    }
    cout << endl;

    vector<string> str{"one","two","three"};
    vector<string> num{"stroka","strochka","strochenka"};

    str.swap(num);

    for(string i: str)
    {
        cout << "swap: " << i << endl;
    }



    array<string, 5> nin{"one","two","three","four","five"};
    for(string i: nin)
    {
        cout << i << "\t";
    }
    cout << endl;

    string first = nin.front();
    string last = nin.back();
    string at = nin.at(5-1);

    cout << "first: " << first << "\t back: " << last << "\t at: " << at << endl;

    nin.fill("undefined");
    for(string i: nin)
    {
        cout << "fill: " << i << "\t";
    }
    cout << endl;
    //list я скипнул, там почти тоже самое что и вектор, но я его полностью посмотрел
}