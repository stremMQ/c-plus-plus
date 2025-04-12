#include <iostream>
using namespace std;
//предопределение функции
template <typename T>T add(T, T);
//шаблон класса
template <typename M>
class Person
{
private:
    M id;
    string name;
public:
    void getId();
    Person(M id, string name): id(id), name(name)
    {}
    void print()
    {
        cout << "id: " << id << "\t name: " << name << endl;
    }
};
//функция шаблона вне класса
template<typename F>
void Person<F>::getId()
{
    cout << "id: " << id << endl;
}
//наследование шаблона класса
template <typename M>
class User: public Person<M>
{
    User(M id, string name): Person<M>(id, name)
    {}
};


int main()
{
    cout << add(4, 5) << endl;
    cout << add(4.5, 5.4) << endl;
    cout << add("Hello", "world!") << endl;
    cout << add<double>(3.4, 2.1) << endl; // явное приведение

    Person man("fghbt123","Alex");
    Person woman(123442,"Maya");
    man.print();
    woman.print();
    man.getId();
}
//универсальная функция к разным типам
template <typename T, typename k>T add(T a,k b) // можно использовать несколько типов данных "typename k" но это не обязательно
{
    return a + b;
}