#include <iostream>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
using namespace std;

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "To[p]: " << st.top() << endl;
    while(!st.empty())
    {
        cout << "num: " << st.top() << endl;
        st.pop(); 
    }


    priority_queue<int> prior;
    prior.push(124);
    prior.push(543);
    prior.push(45);
    while(!prior.empty())
    {
        cout << "num: " << prior.top() << endl;
        prior.pop();
    }


    set<int> semt;
    semt.insert(3);
    semt.insert(1);
    semt.insert(2);
    semt.insert(1);
    semt.insert(2);
    semt.insert(3);
    for(int i: semt)
    {
        cout << "NumSet:" << i << endl;
    }
    semt.erase(1);
    cout << "count: " << semt.count(1) << endl;

    unordered_set<int> unSet{3,2,1};
    unSet.insert(4);
    unSet.insert(3);
    unSet.insert(6);
    cout << "unNum: " << endl;
    for(int i: unSet)
    {
        cout << i << "\t" ;
    }
    cout << endl;


    map<string, unsigned> list_shop;
    list_shop["bread"] = 59;
    list_shop["milk"] = 160;
    list_shop["choсolate"] = 69;

    cout << "bread\t" << list_shop["bread"] << endl;

    for(const auto& [prod,price]: list_shop)
    {
        cout << prod << "\t" << price << endl;
    }

    map<string, unsigned> menu
    {
        {"xz", 30}, {"djopa", 120}, {"zalupa", 200}
    };

    menu.erase("zalupa");
}