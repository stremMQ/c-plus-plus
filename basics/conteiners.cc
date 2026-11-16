#include <iostream>
#include <vector>

using namespace std;

int main(){
    //вектор
    vector<int> numbers{1,2,3,4,5,6,7,8,9,0};

    //первый элемент вектора
    int first{numbers.front()};
    //последний элемент вектора
    int last{numbers.back()};
    //элемент вектора по индексу
    int second{numbers[3-1]};

    cout << "first: " << first << endl;
    cout << "last: " << last << endl;
    cout << "second: " << second << endl;
    
    //замена элемента в векторе по индексу
    numbers[6-1] = 15;

    //вывод всех элементов вектора
    for(int i: numbers)
    {
        cout << "num: " << i << endl;
    }

    try
    {
        //выбор элемента по индексу если такого нет то out_of_range
        int n {numbers.at(10)};
        cout << n << endl;
    }
    catch(out_of_range)
    {
        int n {numbers.at(9)};
        cout << n << endl;
    }

    //итератор вектора вывод указателя на первый элемент
    vector<int>::iterator iter{numbers.begin()};

    cout << "iter: " << *iter << endl;

    //изменение элемента по итератору
    *iter = 125;

    cout << "num: " << numbers[0] << endl;

    //перемещение итератора по элементам
    iter += 4;

    cout << "iter: " << *iter << endl;

    --iter;

    cout << "iter: " << *iter << endl;

    //перебор через итератор
    while(iter != numbers.end())
    {
        cout << "num: " << *iter << endl;
        ++iter;
    }
    //реверсивный веребор
    for(auto iter{numbers.rbegin()}; iter != numbers.rend(); iter ++)
    {
        cout << "num: " << *iter << endl;
    }
    //итератор массива
    int mas[]{1,2,3,4,5};
    //первый элемент массива
    auto it = begin(mas);

    cout << "iter: " << *it << endl;
    //последний элемент массива
    auto end = std::end(mas);

    cout << "end: " << *end << endl;

    numbers.insert(numbers.end(), begin(mas) + 1, std::end(mas));

    cout << "num end: " << numbers.back() << endl;

}