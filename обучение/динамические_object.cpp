#include <iostream>
#include <memory>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    // Создание динамического обьекта
    int *ptr {new int{7}};
    // Вывод динамического обьекта
    cout << *ptr << endl;
    // Изменение динамического обьекта
    *ptr = 42;

    cout << *ptr << endl;
    // Удаление динамического обьекта
    delete ptr;
    ptr = nullptr;
    // Переназначение динамического обьекта
    ptr = new int{12};

    cout << *ptr << endl;

    delete ptr;

    ptr = nullptr;
    // Создание динамического массива
    const int n {4};
    int *numbers {new int[n]{1,2,3,4}};
    // Вывод динамического обьекта
    for (unsigned i{}; i < n; i++)
    {
        cout << numbers[i] << "\t" << endl;
    } 
    // Удаление динамического обьекта
    delete [] numbers;
    numbers = nullptr;

    //динамическая память для многомерных массивов
    unsigned rows = 3;
    unsigned columns = 2;
    //создание массива
    int** mosive{new int*[rows]{}};

    for(unsigned i{}; i < rows; i++)
    {
        mosive[i] = new int[columns]{};
    }

    //удаление массива

    for(unsigned i{}; i < rows; i++)
    {
        delete[] mosive[i];
    }
    delete[] mosive;

    // Создание умного указателя
    unique_ptr<int> num {make_unique<int>(125)};
    // Получаем адрес обьекта
    cout << num.get() <<endl;
    // Получаем значение обьекта
    cout << *num << endl;
    // Меняем значение обьекта
    *num = 234;
    // Получаем новое значение обьекта
    cout << *num << endl;


    // Умный указатель на массив
    unsigned razmer {4};
    auto pnum {make_unique<int[]>(razmer)};
    // Вывод значений массива как с обычным

    auto pvo {make_unique<int>(1212)};
    wcout << L"Старый адрес: " << pvo.get() << endl;
    wcout << L"Старое значение: " << *pvo << endl;
    // reser - освобождение памяти и переназначение её
    pvo.reset(new int{1213});
    wcout << L"Новый адрес: " << pvo.get() << endl;
    wcout << L"Новое значение: " << *pvo << endl;
}