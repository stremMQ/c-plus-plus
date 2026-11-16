#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    stack < string > stack;

    if(stack.empty())
    {
        wcout << L"сет пуст" << endl;
    }
    cout << stack.size() << endl;

    stack.push("one");
    stack.push("two");
    stack.push("three");
    stack.push("four");
    stack.push("five");

    cout << stack.empty() << endl;
    cout << stack.size() << endl;
    
    while(!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }

    queue < string > queue;

    if(queue.empty())
    {
        wcout << L"Очередь пуста" << endl;
    }
    cout << queue.empty() << endl;

    queue.push("one");
    queue.push("two");
    queue.push("three");
    queue.push("four");
    queue.push("five");

    cout << queue.front() << "- 1" << endl;
    cout << queue.back() << "- 5" << endl;

    while(!queue.empty())
    {
        cout << queue.front() << endl;
        queue.pop();
    }
}