#include <iostream>
#include <mutex>
#include <thread>
#include <functional>
using namespace std;

class Counter{
private:
    mutex m;
    int cnt = 0;
public:
    void Increment(){
        lock_guard<mutex> lock(m);
        cnt ++;
    }

    int GetValue(){
        return cnt;
    }
};


int main(){
    Counter numi;
    for(int x = 0; x < 10000; x ++){
        thread th(&Counter::Increment, &numi);
        thread th2(&Counter::Increment, &numi);
        thread th3(&Counter::Increment, &numi);
        thread th4(&Counter::Increment, &numi);
        thread th5(&Counter::Increment, &numi);
        thread th6(&Counter::Increment, &numi);

        th.join();
        th2.join();
        th3.join();
        th4.join();
        th5.join();
        th6.join();
    }

    cout << numi.GetValue() << endl;

}