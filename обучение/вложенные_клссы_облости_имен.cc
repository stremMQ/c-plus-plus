#include <iostream>
using namespace std;

// мое пространство имен
namespace hello
{
    //вложенное пространство имен
    namespace message
    {
        const string hello{"hello"};
        const string bye{"bye"};
        const string hi{"hi"};
    }

    string mes{"hello world!"};
    void print(const string& text)
    {
        cout << text << endl;
    }
    void getMessage(const string& mess)
    {
        cout << mess << endl;
    }
}

namespace mes = hello::message;

class Counter
{
private:
    int* value;
public:
    Counter(int up)
    {
        value = new int{up};
    }
    //деструктор
    ~Counter()
    {
        delete value;
    }
    void print()
    {
        cout << "value: " << value << endl;
    }

    // присвоение
    Counter& operator=(const Counter& counter)
    {
        //проверка на тот-же обьект
        if(&counter != this)
        {
            value = counter.value;
        }
        return *this;
    }
};

//вложенные классы
class User
{
private:
    string name;

    class Secret
    {
    public:
        Secret(string email, string password): email(email), password(password)
        {}
        string email;
        string password;
    };
    Secret secret{"",""};
public:
    User(string name, string email, string password)
    {
        this->name = name;
        secret = Secret(email, password);
    }
    void print()
    {
        cout << "name:" << name << "\n email: " << secret.email << "\t password: " << secret.password << endl;
    }
};


int main()
{
    //оператор присваивания
    Counter num1(34);
    Counter num2(35);
    num2.print();
    num2 = num1;
    num2.print();

    //пример использования оператора присваивания
    Counter num{45};
    {
        Counter nums{12};
        num = nums;
        num.print();
    }
    //nums удалилась из за диструктора
    num.print();
    // вызов из пространства имен
    hello::print(hello::mes);
    hello::getMessage(hello::message::hello);
    hello::getMessage(mes::bye);

    //к классу User
    User me{"Alexander","smq892675@gmail.com","gfjfokghjriog123"};
    me.print();
}